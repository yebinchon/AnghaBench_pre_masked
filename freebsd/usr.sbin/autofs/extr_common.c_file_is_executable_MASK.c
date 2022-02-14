
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_3)
{
 struct stat VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5 != 0)
  FUNC_0(1, "cannot stat %s", VAR_3);
 if ((VAR_4.st_mode & VAR_2) || (VAR_4.st_mode & VAR_0) ||
     (VAR_4.st_mode & VAR_1))
  return (1);
 return (0);
}
