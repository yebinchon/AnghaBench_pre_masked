
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct stat {int st_flags; } ;


 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

__attribute__((used)) static u_long
FUNC_2(char *VAR_0)
{
 struct stat VAR_1;

 if (FUNC_1(VAR_0, &VAR_1) < 0)
  FUNC_0(-1, "stat(%s)", VAR_0);

 return (VAR_1.st_flags);
}
