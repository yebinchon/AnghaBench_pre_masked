
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct stash_info {TYPE_1__ revision; int w_commit; } ;
struct child_process {int git_cmd; int no_stdout; int args; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char*,char*,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_8 (struct child_process*) ;

__attribute__((used)) static int FUNC_9(struct stash_info *VAR_2, int VAR_3)
{
 int VAR_4;
 struct child_process VAR_5 = VAR_0;
 struct child_process VAR_6 = VAR_0;






 VAR_5.git_cmd = 1;
 FUNC_3(&VAR_5.args, "reflog", "delete", "--updateref",
    "--rewrite", ((void*)0));
 FUNC_1(&VAR_5.args, VAR_2->revision.buf);
 VAR_4 = FUNC_8(&VAR_5);
 if (!VAR_4) {
  if (!VAR_3)
   FUNC_7(FUNC_0("Dropped %s (%s)"), VAR_2->revision.buf,
      FUNC_6(&VAR_2->w_commit));
 } else {
  return FUNC_5(FUNC_0("%s: Could not drop stash entry"),
        VAR_2->revision.buf);
 }





 VAR_6.git_cmd = 1;

 VAR_6.no_stdout = 1;
 FUNC_3(&VAR_6.args, "rev-parse", "--verify", "--quiet", ((void*)0));
 FUNC_2(&VAR_6.args, "%s@{0}", VAR_1);
 VAR_4 = FUNC_8(&VAR_6);


 if (VAR_4)
  FUNC_4();

 return 0;
}
