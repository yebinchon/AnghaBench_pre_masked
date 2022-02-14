
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct pretty_print_context {int dummy; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;
typedef int pretty_ctx ;


 struct strbuf STRBUF_INIT ;
 int format_commit_message (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 struct commit* lookup_commit_reference_gently (struct repository*,struct object_id*,int) ;
 int memset (struct pretty_print_context*,int ,int) ;
 scalar_t__ read_ref (char const*,struct object_id*) ;
 int strbuf_release (struct strbuf*) ;
 int strbuf_trim (struct strbuf*) ;
 int strcmp (int ,char const*) ;

__attribute__((used)) static int notes_cache_match_validity(struct repository *r,
          const char *ref,
          const char *validity)
{
 struct object_id oid;
 struct commit *commit;
 struct pretty_print_context pretty_ctx;
 struct strbuf msg = STRBUF_INIT;
 int ret;

 if (read_ref(ref, &oid) < 0)
  return 0;

 commit = lookup_commit_reference_gently(r, &oid, 1);
 if (!commit)
  return 0;

 memset(&pretty_ctx, 0, sizeof(pretty_ctx));
 format_commit_message(commit, "%s", &msg, &pretty_ctx);
 strbuf_trim(&msg);

 ret = !strcmp(msg.buf, validity);
 strbuf_release(&msg);

 return ret;
}
