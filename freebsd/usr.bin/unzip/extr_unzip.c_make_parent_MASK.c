
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_0)
{
 struct stat VAR_1;
 char *VAR_2;

 VAR_2 = FUNC_5(VAR_0, '/');
 if (VAR_2 == ((void*)0) || VAR_2 == VAR_0)
  return;
 *VAR_2 = '\0';
 if (FUNC_1(VAR_0, &VAR_1) == 0) {
  if (FUNC_0(VAR_1.st_mode)) {
   *VAR_2 = '/';
   return;
  }
  FUNC_6(VAR_0);
 }
 FUNC_7(VAR_0);
 FUNC_3(VAR_0, 0755);
 *VAR_2 = '/';
}
