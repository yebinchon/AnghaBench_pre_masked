
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {scalar_t__ no_commit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct repository*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct repository *VAR_1, int VAR_2,
    struct replay_opts *VAR_3)
{
 char *VAR_4 = FUNC_3("GIT_CHERRY_PICK_HELP");

 if (VAR_4) {
  FUNC_2(VAR_0, "%s\n", VAR_4);





  FUNC_5(FUNC_4(VAR_1));
  return;
 }

 if (VAR_2) {
  if (VAR_3->no_commit)
   FUNC_1(FUNC_0("after resolving the conflicts, mark the corrected paths\n"
     "with 'git add <paths>' or 'git rm <paths>'"));
  else
   FUNC_1(FUNC_0("after resolving the conflicts, mark the corrected paths\n"
     "with 'git add <paths>' or 'git rm <paths>'\n"
     "and commit the result with 'git commit'"));
 }
}
