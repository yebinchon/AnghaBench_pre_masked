
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;

void
FUNC_6(const char *VAR_0, bool VAR_1)
{
 char *VAR_2;

 if ((VAR_2 = FUNC_4(VAR_0)) == ((void*)0))
  FUNC_0("out of memory\n");

 if (VAR_1) {
  char *VAR_3 = FUNC_5(VAR_2, '/');
  if (VAR_3 == ((void*)0)) {
   FUNC_1(VAR_2);
   return;
  }
  *VAR_3 = '\0';
 }
 if (FUNC_2(VAR_2) != 0)
  FUNC_3("creation of %s failed", VAR_2);
 FUNC_1(VAR_2);
}
