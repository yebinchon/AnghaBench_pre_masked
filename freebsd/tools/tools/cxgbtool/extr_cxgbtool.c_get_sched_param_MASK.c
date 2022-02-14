
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,unsigned int*) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, char *VAR_1[], int VAR_2, unsigned int *VAR_3)
{
 if (VAR_2 + 1 >= VAR_0)
  FUNC_0(1, "missing value for %s", VAR_1[VAR_2]);
 if (FUNC_2(VAR_1[VAR_2 + 1], VAR_3))
  FUNC_1(1);
 return 0;
}
