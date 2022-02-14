
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 char* FUNC_8 (char*) ;
 int * VAR_1 ;

void FUNC_9(FILE *VAR_2, const char *VAR_3)
{
 static int VAR_4 = -1;
 struct stat VAR_5;
 char *VAR_6;

 if (VAR_2 == VAR_1) {
  if (VAR_4 < 0) {
   VAR_6 = FUNC_8("GIT_FLUSH");
   if (VAR_6)
    VAR_4 = (FUNC_1(VAR_6) == 0);
   else if ((FUNC_7(FUNC_6(VAR_1), &VAR_5) == 0) &&
     FUNC_0(VAR_5.st_mode))
    VAR_4 = 1;
   else
    VAR_4 = 0;
  }
  if (VAR_4 && !FUNC_4(VAR_2))
   return;
 }
 if (FUNC_5(VAR_2)) {
  FUNC_2(VAR_0);
  FUNC_3("write failure on '%s'", VAR_3);
 }
}
