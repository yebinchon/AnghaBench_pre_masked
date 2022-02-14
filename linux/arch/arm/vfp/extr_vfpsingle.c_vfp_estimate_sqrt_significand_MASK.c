
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int* VAR_0 ;
 int* VAR_1 ;

u32 FUNC_2(u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;

 if ((VAR_3 & 0xc0000000) != 0x40000000) {
  FUNC_1("VFP: estimate_sqrt: invalid significand\n");
 }

 VAR_6 = VAR_3 << 1;
 VAR_4 = (VAR_6 >> 27) & 15;
 if (VAR_2 & 1) {
  VAR_5 = 0x4000 + (VAR_6 >> 17) - VAR_1[VAR_4];
  VAR_5 = ((VAR_6 / VAR_5) << 14) + (VAR_5 << 15);
  VAR_6 >>= 1;
 } else {
  VAR_5 = 0x8000 + (VAR_6 >> 17) - VAR_0[VAR_4];
  VAR_5 = VAR_6 / VAR_5 + VAR_5;
  VAR_5 = (VAR_5 >= 0x20000) ? 0xffff8000 : (VAR_5 << 15);
  if (VAR_5 <= VAR_6)
   return (s32)VAR_6 >> 1;
 }
 {
  u64 VAR_7 = (u64)VAR_6 << 31;
  FUNC_0(VAR_7, VAR_5);
  return VAR_7 + (VAR_5 >> 1);
 }
}
