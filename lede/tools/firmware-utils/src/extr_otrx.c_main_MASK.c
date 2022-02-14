
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;

int FUNC_5(int VAR_0, char **VAR_1) {
 if (VAR_0 > 1) {
  if (!FUNC_3(VAR_1[1], "check"))
   return FUNC_0(VAR_0, VAR_1);
  else if (!FUNC_3(VAR_1[1], "create"))
   return FUNC_1(VAR_0, VAR_1);
  else if (!FUNC_3(VAR_1[1], "extract"))
   return FUNC_2(VAR_0, VAR_1);
 }

 FUNC_4();
 return 0;
}
