
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct child_process {int git_cmd; int args; } ;


 struct child_process VAR_0 ;
 struct option FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*,char*,char*,char*,int *) ;
 int FUNC_3 (int *,char const**) ;
 int VAR_2 ;
 int FUNC_4 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_5 (char*) ;
 char* VAR_3 ;
 int FUNC_6 (struct child_process*) ;

__attribute__((used)) static int FUNC_7(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 struct child_process VAR_7 = VAR_0;
 struct option VAR_8[] = {
  FUNC_0()
 };

 VAR_4 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_8,
        VAR_2,
        VAR_1);

 if (!FUNC_5(VAR_3))
  return 0;

 VAR_7.git_cmd = 1;
 FUNC_2(&VAR_7.args, "log", "--format=%gd: %gs", "-g",
    "--first-parent", "-m", ((void*)0));
 FUNC_3(&VAR_7.args, VAR_5);
 FUNC_1(&VAR_7.args, VAR_3);
 FUNC_1(&VAR_7.args, "--");
 return FUNC_6(&VAR_7);
}
