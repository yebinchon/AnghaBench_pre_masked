
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(u64 VAR_1, int VAR_2, u32 *VAR_3)
{
 u64 VAR_4;
 u64 VAR_5;
 u64 VAR_6;
 u64 VAR_7;
 u64 VAR_8;

 VAR_4 = (u64)1 << VAR_2;
 VAR_5 = VAR_4 - 1;
 VAR_8 = VAR_1 & VAR_5;
 VAR_6 = VAR_4 >> 6;
 VAR_7 = VAR_6 - 1;

 if (VAR_8 & VAR_7)
  return -VAR_0;

 *VAR_3 = VAR_8 >> FUNC_0(VAR_6);
 return 0;
}
