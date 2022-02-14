
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 char const* VAR_0 ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, int *VAR_2)
{
 struct stat VAR_3;

 if (!VAR_1 || !FUNC_4(VAR_1, "/dev/null"))
  *VAR_2 = 0;




 else if (VAR_1 == VAR_0)
  *VAR_2 = FUNC_0(0666);
 else if (FUNC_2(VAR_1, &VAR_3))
  return FUNC_1("Could not access '%s'", VAR_1);
 else
  *VAR_2 = VAR_3.st_mode;
 return 0;
}
