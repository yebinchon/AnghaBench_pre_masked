
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_1)
{
 struct stat VAR_2, VAR_3;

 if (FUNC_1(VAR_1, &VAR_2) < 0)
  return 0;

 if (FUNC_0(VAR_1, VAR_2 ^ VAR_0) < 0)
  return 0;

 if (FUNC_1(VAR_1, &VAR_3) < 0)
  return 0;

 return (VAR_2 != VAR_3);
}
