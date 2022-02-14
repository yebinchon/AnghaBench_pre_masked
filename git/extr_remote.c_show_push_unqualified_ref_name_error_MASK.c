
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*,char const*) ;
 int FUNC_3 (int ,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,struct object_id*) ;
 int FUNC_5 (int ,struct object_id*,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(const char *VAR_6,
       const char *VAR_7)
{
 struct object_id VAR_8;
 enum object_type VAR_9;






 FUNC_3(FUNC_1("The destination you provided is not a full refname (i.e.,\n"
  "starting with \"refs/\"). We tried to guess what you meant by:\n"
  "\n"
  "- Looking for a ref that matches '%s' on the remote side.\n"
  "- Checking if the <src> being pushed ('%s')\n"
  "  is a ref in \"refs/{heads,tags}/\". If so we add a corresponding\n"
  "  refs/{heads,tags}/ prefix on the remote side.\n"
  "\n"
  "Neither worked, so we gave up. You must fully qualify the ref."),
       VAR_6, VAR_7);

 if (!VAR_4)
  return;

 if (FUNC_4(VAR_7, &VAR_8))
  FUNC_0("'%s' is not a valid object, "
      "match_explicit_lhs() should catch this!",
      VAR_7);
 VAR_9 = FUNC_5(VAR_5, &VAR_8, ((void*)0));
 if (VAR_9 == VAR_1) {
  FUNC_2(FUNC_1("The <src> part of the refspec is a commit object.\n"
    "Did you mean to create a new branch by pushing to\n"
    "'%s:refs/heads/%s'?"),
         VAR_7, VAR_6);
 } else if (VAR_9 == VAR_2) {
  FUNC_2(FUNC_1("The <src> part of the refspec is a tag object.\n"
    "Did you mean to create a new tag by pushing to\n"
    "'%s:refs/tags/%s'?"),
         VAR_7, VAR_6);
 } else if (VAR_9 == VAR_3) {
  FUNC_2(FUNC_1("The <src> part of the refspec is a tree object.\n"
    "Did you mean to tag a new tree by pushing to\n"
    "'%s:refs/tags/%s'?"),
         VAR_7, VAR_6);
 } else if (VAR_9 == VAR_0) {
  FUNC_2(FUNC_1("The <src> part of the refspec is a blob object.\n"
    "Did you mean to tag a new blob by pushing to\n"
    "'%s:refs/tags/%s'?"),
         VAR_7, VAR_6);
 } else {
  FUNC_0("'%s' should be commit/tag/tree/blob, is '%d'",
      VAR_7, VAR_9);
 }
}
