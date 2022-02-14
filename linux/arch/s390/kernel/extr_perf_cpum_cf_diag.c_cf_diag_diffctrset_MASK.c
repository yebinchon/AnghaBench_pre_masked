
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, u64 *VAR_1, int VAR_2)
{
 for (; --VAR_2 >= 0; ++VAR_0, ++VAR_1)
  if (*VAR_1 >= *VAR_0)
   *VAR_1 -= *VAR_0;
  else
   *VAR_1 = *VAR_0 - *VAR_1;
}
