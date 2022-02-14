
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

int FUNC_0(u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;

 if ((VAR_4 == 0) || (VAR_3 == 0) || (VAR_4 > VAR_3))
  return -VAR_0;

 VAR_7 = (100 * VAR_3) / VAR_4;
 VAR_11 = (VAR_1 * (VAR_7 - 100));
 VAR_8 = (1000 * (100 * VAR_2 + VAR_11)) / (10000 + (VAR_11 / 100));
 VAR_8 = (VAR_8 + 5) / 10;
 VAR_9 = ((VAR_8 * VAR_1) + 5000) / 10000;
 VAR_10 = VAR_8 - VAR_9;

 *VAR_6 = VAR_1 - VAR_9;
 *VAR_5 = VAR_1 + VAR_10;

 return 0;
}
