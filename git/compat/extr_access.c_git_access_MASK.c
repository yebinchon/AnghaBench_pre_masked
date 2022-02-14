
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

int FUNC_3(const char *VAR_6, int VAR_7)
{
 struct stat VAR_8;


 if (FUNC_1())
  return FUNC_0(VAR_6, VAR_7);

 if (FUNC_2(VAR_6, &VAR_8) < 0)
  return -1;


 if (!(VAR_7 & VAR_4))
  return 0;




 if (VAR_8.st_mode & (VAR_3 | VAR_1 | VAR_2))
  return 0;

 VAR_5 = VAR_0;
 return -1;
}
