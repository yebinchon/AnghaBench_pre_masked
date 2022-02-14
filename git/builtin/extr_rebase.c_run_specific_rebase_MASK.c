
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_9__ {char* buf; } ;
struct TYPE_16__ {int argv; } ;
struct rebase_options {int type; int flags; char* gpg_sign_opt; char* state_dir; char* upstream_name; char* head_name; char* onto_name; char* revisions; char* switch_to; char* action; scalar_t__ allow_rerere_autoupdate; char* cmd; char* strategy; char* strategy_opts; scalar_t__ dont_finish_rebase; scalar_t__ autosquash; TYPE_1__ git_format_patch_opt; int * squash_onto; scalar_t__ root; scalar_t__ rebase_cousins; scalar_t__ rebase_merges; scalar_t__ allow_empty_message; scalar_t__ keep_empty; scalar_t__ signoff; TYPE_8__ git_am_opts; TYPE_7__* restrict_revision; TYPE_5__* onto; int orig_head; TYPE_3__* upstream; } ;
typedef enum action { ____Placeholder_action } action ;
struct TYPE_14__ {int oid; } ;
struct TYPE_15__ {TYPE_6__ object; } ;
struct TYPE_12__ {int oid; } ;
struct TYPE_13__ {TYPE_4__ object; } ;
struct TYPE_10__ {int oid; } ;
struct TYPE_11__ {TYPE_2__ object; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct strbuf VAR_9 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char*,char*) ;
 int FUNC_3 (struct rebase_options*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rebase_options*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct rebase_options*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (struct strbuf*,int ) ;
 char* VAR_10 ;
 int FUNC_12 (struct rebase_options*) ;
 int FUNC_13 (char const**,int ) ;
 int FUNC_14 (struct rebase_options*,int) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (struct strbuf*,int ) ;
 int FUNC_17 (char*,struct rebase_options*) ;
 int FUNC_18 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_19 (struct strbuf*,char*) ;
 int FUNC_20 (struct strbuf*) ;
 char* FUNC_21 (char*) ;

__attribute__((used)) static int FUNC_22(struct rebase_options *VAR_11, enum action VAR_12)
{
 const char *VAR_13[] = { ((void*)0), ((void*)0) };
 struct strbuf VAR_14 = VAR_9, VAR_15 = VAR_9;
 int VAR_16;
 const char *VAR_17, *VAR_18;

 if (VAR_11->type == VAR_3) {

  FUNC_15("GIT_CHERRY_PICK_HELP", VAR_10, 1);
  if (!(VAR_11->flags & VAR_4)) {
   FUNC_15("GIT_SEQUENCE_EDITOR", ":", 1);
   VAR_11->autosquash = 0;
  }
  if (VAR_11->gpg_sign_opt) {

   char *VAR_19 = FUNC_21(VAR_11->gpg_sign_opt + 2);
   FUNC_7(VAR_11->gpg_sign_opt);
   VAR_11->gpg_sign_opt = VAR_19;
  }

  VAR_16 = FUNC_14(VAR_11, VAR_12);
  goto finished_rebase;
 }

 if (VAR_11->type == VAR_0) {
  VAR_16 = FUNC_12(VAR_11);
  goto finished_rebase;
 }

 FUNC_2(&VAR_14, "GIT_DIR", FUNC_1(FUNC_8()));
 FUNC_2(&VAR_14, "state_dir", VAR_11->state_dir);

 FUNC_2(&VAR_14, "upstream_name", VAR_11->upstream_name);
 FUNC_2(&VAR_14, "upstream", VAR_11->upstream ?
  FUNC_10(&VAR_11->upstream->object.oid) : ((void*)0));
 FUNC_2(&VAR_14, "head_name",
  VAR_11->head_name ? VAR_11->head_name : "detached HEAD");
 FUNC_2(&VAR_14, "orig_head", FUNC_10(&VAR_11->orig_head));
 FUNC_2(&VAR_14, "onto", VAR_11->onto ?
  FUNC_10(&VAR_11->onto->object.oid) : ((void*)0));
 FUNC_2(&VAR_14, "onto_name", VAR_11->onto_name);
 FUNC_2(&VAR_14, "revisions", VAR_11->revisions);
 FUNC_2(&VAR_14, "restrict_revision", VAR_11->restrict_revision ?
  FUNC_10(&VAR_11->restrict_revision->object.oid) : ((void*)0));
 FUNC_2(&VAR_14, "GIT_QUIET",
  VAR_11->flags & VAR_5 ? "" : "t");
 FUNC_16(&VAR_15, VAR_11->git_am_opts.argv);
 FUNC_2(&VAR_14, "git_am_opt", VAR_15.buf);
 FUNC_20(&VAR_15);
 FUNC_2(&VAR_14, "verbose",
  VAR_11->flags & VAR_6 ? "t" : "");
 FUNC_2(&VAR_14, "diffstat",
  VAR_11->flags & VAR_1 ? "t" : "");
 FUNC_2(&VAR_14, "force_rebase",
  VAR_11->flags & VAR_2 ? "t" : "");
 if (VAR_11->switch_to)
  FUNC_2(&VAR_14, "switch_to", VAR_11->switch_to);
 FUNC_2(&VAR_14, "action", VAR_11->action ? VAR_11->action : "");
 FUNC_2(&VAR_14, "signoff", VAR_11->signoff ? "--signoff" : "");
 FUNC_2(&VAR_14, "allow_rerere_autoupdate",
  VAR_11->allow_rerere_autoupdate ?
   VAR_11->allow_rerere_autoupdate == VAR_7 ?
   "--rerere-autoupdate" : "--no-rerere-autoupdate" : "");
 FUNC_2(&VAR_14, "keep_empty", VAR_11->keep_empty ? "yes" : "");
 FUNC_2(&VAR_14, "autosquash", VAR_11->autosquash ? "t" : "");
 FUNC_2(&VAR_14, "gpg_sign_opt", VAR_11->gpg_sign_opt);
 FUNC_2(&VAR_14, "cmd", VAR_11->cmd);
 FUNC_2(&VAR_14, "allow_empty_message",
  VAR_11->allow_empty_message ? "--allow-empty-message" : "");
 FUNC_2(&VAR_14, "rebase_merges",
  VAR_11->rebase_merges ? "t" : "");
 FUNC_2(&VAR_14, "rebase_cousins",
  VAR_11->rebase_cousins ? "t" : "");
 FUNC_2(&VAR_14, "strategy", VAR_11->strategy);
 FUNC_2(&VAR_14, "strategy_opts", VAR_11->strategy_opts);
 FUNC_2(&VAR_14, "rebase_root", VAR_11->root ? "t" : "");
 FUNC_2(&VAR_14, "squash_onto",
  VAR_11->squash_onto ? FUNC_10(VAR_11->squash_onto) : "");
 FUNC_2(&VAR_14, "git_format_patch_opt",
  VAR_11->git_format_patch_opt.buf);

 if (FUNC_9(VAR_11) &&
     !(VAR_11->flags & VAR_4)) {
  FUNC_19(&VAR_14,
         "GIT_SEQUENCE_EDITOR=:; export GIT_SEQUENCE_EDITOR; ");
  VAR_11->autosquash = 0;
 }

 switch (VAR_11->type) {
 case 128:
  VAR_17 = "git-rebase--preserve-merges";
  VAR_18 = "git_rebase__preserve_merges";
  break;
 default:
  FUNC_0("Unhandled rebase type %d", VAR_11->type);
  break;
 }

 FUNC_18(&VAR_14,
      ". git-sh-setup && . %s && %s", VAR_17, VAR_18);
 VAR_13[0] = VAR_14.buf;

 VAR_16 = FUNC_13(VAR_13, VAR_8);
finished_rebase:
 if (VAR_11->dont_finish_rebase)
  ;
 else if (VAR_11->type == VAR_3)
  ;
 else if (VAR_16 == 0) {
  if (!FUNC_5(FUNC_17("stopped-sha", VAR_11)))
   FUNC_6(VAR_11);
 } else if (VAR_16 == 2) {
  struct strbuf VAR_20 = VAR_9;

  FUNC_3(VAR_11);
  FUNC_19(&VAR_20, VAR_11->state_dir);
  FUNC_11(&VAR_20, 0);
  FUNC_20(&VAR_20);
  FUNC_4("Nothing to do");
 }

 FUNC_20(&VAR_14);

 return VAR_16 ? -1 : 0;
}
