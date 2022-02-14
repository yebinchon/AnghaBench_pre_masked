
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 char* VAR_2 ;
 int FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct stat VAR_3, VAR_4;
 char *VAR_5, *VAR_6;
 int VAR_7;

 if (FUNC_3("../..", VAR_2) == ((void*)0))
  FUNC_0(VAR_0, "Unable to find root of source tree");
 if ((VAR_6 = FUNC_2("PWD")) != ((void*)0) && *VAR_6 == '/' &&
     (VAR_6 = FUNC_5(VAR_6)) != ((void*)0)) {

  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   if ((VAR_5 = FUNC_7(VAR_6, '/')) == ((void*)0)) {
    FUNC_1(VAR_6);
    return;
   }
   *VAR_5 = '\0';
  }
  if (FUNC_4(VAR_6, &VAR_3) != -1 && FUNC_4(VAR_2, &VAR_4) != -1 &&
      VAR_3.st_dev == VAR_4.st_dev && VAR_3.st_ino == VAR_4.st_ino)
   FUNC_6(VAR_2, VAR_6, VAR_1);
  FUNC_1(VAR_6);
 }
}
