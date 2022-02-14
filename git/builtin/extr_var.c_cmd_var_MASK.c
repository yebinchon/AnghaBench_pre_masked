
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

int FUNC_6(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 const char *VAR_6 = ((void*)0);
 if (VAR_3 != 2)
  FUNC_5(VAR_2);

 if (FUNC_4(VAR_4[1], "-l") == 0) {
  FUNC_0(VAR_1, ((void*)0));
  FUNC_1();
  return 0;
 }
 FUNC_0(VAR_0, ((void*)0));
 VAR_6 = FUNC_3(VAR_4[1]);
 if (!VAR_6)
  FUNC_5(VAR_2);

 FUNC_2("%s\n", VAR_6);

 return 0;
}
