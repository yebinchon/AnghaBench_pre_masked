
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,int ,int *,int*) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_1;
 const char *VAR_2 = FUNC_3("HEAD", 0, ((void*)0), &VAR_1);
 const char *VAR_3;
 if (!VAR_2)
  FUNC_1(FUNC_0("could not resolve HEAD"));
 else if (!(VAR_1 & VAR_0))
  return;
 else if (FUNC_4(VAR_2, "refs/heads/", &VAR_3))
  FUNC_2(VAR_3);
 else
  FUNC_1(FUNC_0("HEAD (%s) points outside of refs/heads/"), VAR_2);
}
