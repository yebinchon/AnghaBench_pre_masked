
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,char const**,int) ;
 int FUNC_1 (char const**,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (int,char const**,int *,int ,int ,int ) ;
 int FUNC_6 (char*,char const***) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(char *VAR_3)
{
 const char **VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;
 VAR_5 = FUNC_6(VAR_3, &VAR_4);
 if (VAR_5 < 0)
  FUNC_3(FUNC_2("Bad branch.%s.mergeoptions string: %s"), VAR_0,
      FUNC_2(FUNC_7(VAR_5)));
 FUNC_1(VAR_4, VAR_5 + 2);
 FUNC_0(VAR_4 + 1, VAR_4, VAR_5 + 1);
 VAR_5++;
 VAR_4[0] = "branch.*.mergeoptions";
 FUNC_5(VAR_5, VAR_4, ((void*)0), VAR_1,
        VAR_2, 0);
 FUNC_4(VAR_4);
}
