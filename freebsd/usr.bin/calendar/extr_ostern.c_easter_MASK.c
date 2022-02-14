
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

int
FUNC_1(int VAR_0)
{
 int VAR_1,
     VAR_2,
     VAR_3,
     VAR_4,
     VAR_5,
     VAR_6;

 VAR_1 = VAR_0 % 19;
 VAR_2 = VAR_0 / 100;
 VAR_3 = (VAR_2 - VAR_2 / 4 - (8 * VAR_2 + 13) / 25 + 19 * VAR_1 + 15) % 30;
 VAR_4 = VAR_3 - (VAR_3 / 28) * (1 - (VAR_3 / 28) * (29 / (VAR_3 + 1)) * ((21 - VAR_1) / 11));
 VAR_5 = (VAR_0 + VAR_0 / 4 + VAR_4 + 2 - VAR_2 + VAR_2 / 4) % 7;

 VAR_6 = VAR_4 - VAR_5;

 if (FUNC_0(VAR_0))
  return 31 + 29 + 21 + VAR_6 + 7;
 else
  return 31 + 28 + 21 + VAR_6 + 7;
}
