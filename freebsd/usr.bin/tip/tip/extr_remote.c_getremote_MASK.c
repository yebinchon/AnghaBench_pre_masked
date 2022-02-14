
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 char* FUNC_4 (char*,char) ;

char *
FUNC_5(char *VAR_4)
{
 char *VAR_5;
 static char *VAR_6;
 static int VAR_7 = 0;

 if (!VAR_7) {
  if (VAR_4 == VAR_1 && (VAR_4 = FUNC_2("HOST")) == VAR_1) {
   FUNC_1(VAR_3, "%s: no host specified\n", VAR_2);
   FUNC_0(3);
  }
  FUNC_3(VAR_4);
  VAR_6 = VAR_0;
  VAR_7++;
 }




 if (VAR_6 == VAR_1)
  return (VAR_1);
 if ((VAR_5 = FUNC_4(VAR_6, ',')) == ((void*)0)) {
  VAR_0 = VAR_6;
  VAR_6 = VAR_1;
 } else {
  *VAR_5++ = '\0';
  VAR_0 = VAR_6;
  VAR_6 = VAR_5;
 }
 return (VAR_0);
}
