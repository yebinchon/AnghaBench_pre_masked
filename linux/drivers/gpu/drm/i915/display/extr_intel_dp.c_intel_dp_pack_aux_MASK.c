
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;



u32 FUNC_0(const u8 *VAR_0, int VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 if (VAR_1 > 4)
  VAR_1 = 4;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 |= ((u32)VAR_0[VAR_2]) << ((3 - VAR_2) * 8);
 return VAR_3;
}
