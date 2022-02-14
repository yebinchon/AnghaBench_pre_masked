
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (char**,char*) ;

void
FUNC_7(const char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_0(VAR_2[0] == '/');




 VAR_4 = VAR_5 = FUNC_1(VAR_2 + 1);

 VAR_6 = FUNC_1("");
 for (;;) {
  VAR_3 = FUNC_6(&VAR_4, "/");
  if (VAR_3 == ((void*)0))
   break;
  VAR_7 = FUNC_2(VAR_6, '/', VAR_3);
  FUNC_3(VAR_6);
  VAR_6 = VAR_7;

  VAR_8 = FUNC_5(VAR_6, 0755);
  if (VAR_8 != 0 && VAR_1 != VAR_0) {
   FUNC_4("cannot create %s", VAR_6);
   return;
  }
 }

 FUNC_3(VAR_5);
}
