
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

bool FUNC_1(int VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_0 == VAR_1)
  return 1;

 if (!VAR_0 || !VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_0 - VAR_1);

 if (((((VAR_2 + VAR_0 + VAR_1) * 100)) / (VAR_0 + VAR_1)) < 105)
  return 1;

 return 0;
}
