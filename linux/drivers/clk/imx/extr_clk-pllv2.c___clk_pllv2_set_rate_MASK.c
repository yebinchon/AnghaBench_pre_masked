
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef long u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_1, unsigned long VAR_2,
  u32 *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 u32 VAR_6;
 long VAR_7, VAR_8, VAR_9, VAR_10 = 999999;
 u64 VAR_11;
 unsigned long VAR_12;

 VAR_12 = 4 * VAR_2;
 VAR_8 = VAR_7 = -1;
 while (++VAR_8 < 16 && VAR_7 < 5)
  VAR_7 = VAR_1 * (VAR_8+1) / VAR_12;
 if (VAR_7 > 15)
  return -VAR_0;
 VAR_8--;

 VAR_11 = VAR_1 * (VAR_8 + 1) - VAR_12 * VAR_7;
 FUNC_0(VAR_11, VAR_12 / 1000000);
 VAR_9 = (long)VAR_11;

 VAR_6 = VAR_7 << 4 | VAR_8;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_10;
 *VAR_5 = VAR_9;

 return 0;
}
