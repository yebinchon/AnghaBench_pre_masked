
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long s32 ;
typedef int s16 ;



__attribute__((used)) static long FUNC_0(s16 VAR_0)
{
 s16 VAR_1;
 s32 VAR_2;
 long VAR_3;

 VAR_1 = VAR_0 >> 11;
 VAR_2 = ((s16)((VAR_0 & 0x7ff) << 5)) >> 5;

 VAR_3 = VAR_2;


 VAR_3 = VAR_3 * 1000L;

 if (VAR_1 >= 0)
  VAR_3 <<= VAR_1;
 else
  VAR_3 >>= -VAR_1;

 return VAR_3;
}
