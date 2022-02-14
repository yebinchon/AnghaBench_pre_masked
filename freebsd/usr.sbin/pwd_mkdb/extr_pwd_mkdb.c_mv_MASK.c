
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;

void
FUNC_7(char *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_0];
 char *VAR_7;
 int VAR_8 = -1;





 if (FUNC_5(VAR_4, VAR_5) != 0 ||
     (VAR_7 = FUNC_1(VAR_5)) == ((void*)0) ||
     (VAR_8 = FUNC_4(VAR_7, VAR_2|VAR_1)) == -1 ||
     FUNC_3(VAR_8) != 0) {
  int VAR_9 = VAR_3;
  (void)FUNC_6(VAR_6, sizeof(VAR_6), "%s to %s", VAR_4, VAR_5);
  VAR_3 = VAR_9;
  if (VAR_8 != -1)
   FUNC_0(VAR_8);
  FUNC_2(VAR_6);
 }

 if (VAR_8 != -1)
  FUNC_0(VAR_8);
}
