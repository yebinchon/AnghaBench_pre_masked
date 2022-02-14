
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int git_cmd; char const** argv; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct child_process*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,char*) ;

int FUNC_5(int VAR_1, const char **VAR_2)
{
 struct child_process VAR_3 = VAR_0;
 int VAR_4 = 0;

 FUNC_2(&VAR_4);
 if (VAR_4)
  FUNC_0("No git repo found");
 if (VAR_1 > 1 && !FUNC_4(VAR_2[1], "--setup-work-tree")) {
  FUNC_3();
  VAR_2++;
 }
 VAR_3.git_cmd = 1;
 VAR_3.argv = (const char **)VAR_2 + 1;
 return FUNC_1(&VAR_3);
}
