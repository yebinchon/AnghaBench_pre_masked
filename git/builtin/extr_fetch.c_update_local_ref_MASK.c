
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct strbuf {char const* buf; } ;
struct ref {char const* name; int new_oid; scalar_t__ force; int old_oid; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct branch {int name; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int DEFAULT_ABBREV ;
 struct strbuf STRBUF_INIT ;
 char const* _ (char*) ;
 struct branch* branch_get (int *) ;
 int die (char const*,int ) ;
 scalar_t__ fetch_show_forced_updates ;
 scalar_t__ force ;
 int forced_updates_ms ;
 int format_display (struct strbuf*,char,char const*,char const*,char const*,char const*,int) ;
 int getnanotime () ;
 int in_merge_bases (struct commit*,struct commit*) ;
 scalar_t__ is_bare_repository () ;
 int is_null_oid (int *) ;
 struct commit* lookup_commit_reference_gently (int ,int *,int) ;
 int oid_object_info (int ,int *,int *) ;
 int oid_to_hex (int *) ;
 scalar_t__ oideq (int *,int *) ;
 char* prettify_refname (char const*) ;
 int s_update_ref (char const*,struct ref*,int) ;
 scalar_t__ starts_with (char const*,char*) ;
 int strbuf_add_unique_abbrev (struct strbuf*,int *,int ) ;
 int strbuf_addstr (struct strbuf*,char*) ;
 int strbuf_release (struct strbuf*) ;
 int strcmp (char const*,int ) ;
 int the_repository ;
 scalar_t__ update_head_ok ;
 scalar_t__ verbosity ;

__attribute__((used)) static int update_local_ref(struct ref *ref,
       const char *remote,
       const struct ref *remote_ref,
       struct strbuf *display,
       int summary_width)
{
 struct commit *current = ((void*)0), *updated;
 enum object_type type;
 struct branch *current_branch = branch_get(((void*)0));
 const char *pretty_ref = prettify_refname(ref->name);
 int fast_forward = 0;

 type = oid_object_info(the_repository, &ref->new_oid, ((void*)0));
 if (type < 0)
  die(_("object %s not found"), oid_to_hex(&ref->new_oid));

 if (oideq(&ref->old_oid, &ref->new_oid)) {
  if (verbosity > 0)
   format_display(display, '=', _("[up to date]"), ((void*)0),
           remote, pretty_ref, summary_width);
  return 0;
 }

 if (current_branch &&
     !strcmp(ref->name, current_branch->name) &&
     !(update_head_ok || is_bare_repository()) &&
     !is_null_oid(&ref->old_oid)) {




  format_display(display, '!', _("[rejected]"),
          _("can't fetch in current branch"),
          remote, pretty_ref, summary_width);
  return 1;
 }

 if (!is_null_oid(&ref->old_oid) &&
     starts_with(ref->name, "refs/tags/")) {
  if (force || ref->force) {
   int r;
   r = s_update_ref("updating tag", ref, 0);
   format_display(display, r ? '!' : 't', _("[tag update]"),
           r ? _("unable to update local ref") : ((void*)0),
           remote, pretty_ref, summary_width);
   return r;
  } else {
   format_display(display, '!', _("[rejected]"), _("would clobber existing tag"),
           remote, pretty_ref, summary_width);
   return 1;
  }
 }

 current = lookup_commit_reference_gently(the_repository,
       &ref->old_oid, 1);
 updated = lookup_commit_reference_gently(the_repository,
       &ref->new_oid, 1);
 if (!current || !updated) {
  const char *msg;
  const char *what;
  int r;





  const char *name = remote_ref ? remote_ref->name : "";
  if (starts_with(name, "refs/tags/")) {
   msg = "storing tag";
   what = _("[new tag]");
  } else if (starts_with(name, "refs/heads/")) {
   msg = "storing head";
   what = _("[new branch]");
  } else {
   msg = "storing ref";
   what = _("[new ref]");
  }

  r = s_update_ref(msg, ref, 0);
  format_display(display, r ? '!' : '*', what,
          r ? _("unable to update local ref") : ((void*)0),
          remote, pretty_ref, summary_width);
  return r;
 }

 if (fetch_show_forced_updates) {
  uint64_t t_before = getnanotime();
  fast_forward = in_merge_bases(current, updated);
  forced_updates_ms += (getnanotime() - t_before) / 1000000;
 } else {
  fast_forward = 1;
 }

 if (fast_forward) {
  struct strbuf quickref = STRBUF_INIT;
  int r;

  strbuf_add_unique_abbrev(&quickref, &current->object.oid, DEFAULT_ABBREV);
  strbuf_addstr(&quickref, "..");
  strbuf_add_unique_abbrev(&quickref, &ref->new_oid, DEFAULT_ABBREV);
  r = s_update_ref("fast-forward", ref, 1);
  format_display(display, r ? '!' : ' ', quickref.buf,
          r ? _("unable to update local ref") : ((void*)0),
          remote, pretty_ref, summary_width);
  strbuf_release(&quickref);
  return r;
 } else if (force || ref->force) {
  struct strbuf quickref = STRBUF_INIT;
  int r;
  strbuf_add_unique_abbrev(&quickref, &current->object.oid, DEFAULT_ABBREV);
  strbuf_addstr(&quickref, "...");
  strbuf_add_unique_abbrev(&quickref, &ref->new_oid, DEFAULT_ABBREV);
  r = s_update_ref("forced-update", ref, 1);
  format_display(display, r ? '!' : '+', quickref.buf,
          r ? _("unable to update local ref") : _("forced update"),
          remote, pretty_ref, summary_width);
  strbuf_release(&quickref);
  return r;
 } else {
  format_display(display, '!', _("[rejected]"), _("non-fast-forward"),
          remote, pretty_ref, summary_width);
  return 1;
 }
}
