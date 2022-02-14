
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {char const** argv; int env_array; } ;


 struct child_process VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct child_process*) ;
 int FUNC_6 (int,int ,int *,int *,struct child_process*) ;
 scalar_t__ FUNC_7 (struct child_process*) ;
 int VAR_5 ;
 int FUNC_8 (char const*,char*) ;
 int * VAR_6 ;
 int FUNC_9 (int,char const**) ;

int FUNC_10(int VAR_7, const char **VAR_8)
{
 struct child_process VAR_9 = VAR_0;
 int VAR_10;

 if (VAR_7 > 1 && !FUNC_8(VAR_8[1], "testsuite"))
  FUNC_3(FUNC_9(VAR_7 - 1, VAR_8 + 1));

 if (VAR_7 < 3)
  return 1;
 while (!FUNC_8(VAR_8[1], "env")) {
  if (!VAR_8[2])
   FUNC_2("env specifier without a value");
  FUNC_0(&VAR_9.env_array, VAR_8[2]);
  VAR_8 += 2;
  VAR_7 -= 2;
 }
 if (VAR_7 < 3)
  return 1;
 VAR_9.argv = (const char **)VAR_8 + 2;

 if (!FUNC_8(VAR_8[1], "start-command-ENOENT")) {
  if (FUNC_7(&VAR_9) < 0 && VAR_2 == VAR_1)
   return 0;
  FUNC_4(VAR_5, "FAIL %s\n", VAR_8[1]);
  return 1;
 }
 if (!FUNC_8(VAR_8[1], "run-command"))
  FUNC_3(FUNC_5(&VAR_9));

 VAR_10 = FUNC_1(VAR_8[2]);
 VAR_9.argv = (const char **)VAR_8 + 3;

 if (!FUNC_8(VAR_8[1], "run-command-parallel"))
  FUNC_3(FUNC_6(VAR_10, VAR_4,
         ((void*)0), ((void*)0), &VAR_9));

 if (!FUNC_8(VAR_8[1], "run-command-abort"))
  FUNC_3(FUNC_6(VAR_10, VAR_4,
         ((void*)0), VAR_6, &VAR_9));

 if (!FUNC_8(VAR_8[1], "run-command-no-jobs"))
  FUNC_3(FUNC_6(VAR_10, VAR_3,
         ((void*)0), VAR_6, &VAR_9));

 FUNC_4(VAR_5, "check usage\n");
 return 1;
}
