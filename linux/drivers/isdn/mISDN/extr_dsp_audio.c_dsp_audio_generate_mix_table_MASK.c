
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 int* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

void
FUNC_0(void)
{
 int VAR_3, VAR_4;
 s32 VAR_5;

 VAR_3 = 0;
 while (VAR_3 < 256) {
  VAR_4 = 0;
  while (VAR_4 < 256) {
   VAR_5 = VAR_0[VAR_3];
   VAR_5 += VAR_0[VAR_4];
   if (VAR_5 > 32767)
    VAR_5 = 32767;
   if (VAR_5 < -32768)
    VAR_5 = -32768;
   VAR_1[(VAR_3 << 8) | VAR_4] =
    VAR_2[VAR_5 & 0xffff];
   VAR_4++;
  }
  VAR_3++;
 }
}
