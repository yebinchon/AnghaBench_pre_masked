
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
 char *VAR_1;
 int VAR_2 = 1;
 struct stat VAR_3;

 VAR_1 = VAR_0 + 1;
 while (*VAR_1 && VAR_2) {
  if (*VAR_1 == '/') {
   *VAR_1 = '\0';
   if (FUNC_1(VAR_0, &VAR_3) < 0 || !FUNC_0(VAR_3.st_mode))
    VAR_2 = 0;
   *VAR_1 = '/';
  }
  VAR_1++;
 }
 if (FUNC_1(VAR_0, &VAR_3) < 0 || !FUNC_0(VAR_3.st_mode))
  VAR_2 = 0;
 return (VAR_2);
}
