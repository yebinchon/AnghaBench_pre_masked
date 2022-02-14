
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_5)
{
 struct stat VAR_6;


 if (FUNC_1(VAR_5, VAR_3) == 0 &&
     FUNC_4(VAR_5, &VAR_6) == 0 &&
     FUNC_0(VAR_6.st_mode) &&
     (FUNC_2() != 0 ||
     (VAR_6.st_mode & (VAR_2 | VAR_0 | VAR_1)) != 0)) {
  if (!VAR_4)
   FUNC_3("%s\n", VAR_5);
  return (1);
 }
 return (0);
}
