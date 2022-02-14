
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(const char *VAR_2)
{
 struct stat VAR_3;

 if (FUNC_5(VAR_2, &VAR_3) ||
     !FUNC_0(VAR_3.st_mode))
  return 0;
 return VAR_3.st_mode & VAR_1;
}
