
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1) - FUNC_1(VAR_0);

 if (VAR_2 < 0 || FUNC_0(&VAR_1[VAR_2], VAR_0) != 0)
  return (-1);
 return (VAR_2);
}
