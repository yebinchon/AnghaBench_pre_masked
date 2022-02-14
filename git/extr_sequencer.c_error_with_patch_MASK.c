
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct commit {int dummy; } ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct repository*) ;
 char* FUNC_6 (struct replay_opts*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (struct repository*,struct commit*,struct replay_opts*) ;
 char* FUNC_9 () ;
 int FUNC_10 (struct commit*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_11(struct repository *VAR_1,
       struct commit *VAR_2,
       const char *VAR_3, int VAR_4,
       struct replay_opts *VAR_5,
       int VAR_6, int VAR_7)
{
 if (VAR_2) {
  if (FUNC_8(VAR_1, VAR_2, VAR_5))
   return -1;
 } else if (FUNC_1(FUNC_9(),
        FUNC_5(VAR_1), 0666))
  return FUNC_2(FUNC_0("unable to copy '%s' to '%s'"),
        FUNC_5(VAR_1), FUNC_9());

 if (VAR_7) {
  if (FUNC_7())
   return -1;

  FUNC_3(VAR_0,
   FUNC_0("You can amend the commit now, with\n"
     "\n"
     "  git commit --amend %s\n"
     "\n"
     "Once you are satisfied with your changes, run\n"
     "\n"
     "  git rebase --continue\n"),
   FUNC_6(VAR_5));
 } else if (VAR_6) {
  if (VAR_2)
   FUNC_4(VAR_0, FUNC_0("Could not apply %s... %.*s"),
       FUNC_10(VAR_2), VAR_4, VAR_3);
  else




   FUNC_4(VAR_0, FUNC_0("Could not merge %.*s"),
       VAR_4, VAR_3);
 }

 return VAR_6;
}
