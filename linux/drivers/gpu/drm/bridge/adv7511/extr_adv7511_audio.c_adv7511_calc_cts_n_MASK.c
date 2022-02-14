
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0, unsigned int VAR_1,
          unsigned int *VAR_2, unsigned int *VAR_3)
{
 switch (VAR_1) {
 case 32000:
  *VAR_3 = 4096;
  break;
 case 44100:
  *VAR_3 = 6272;
  break;
 case 48000:
  *VAR_3 = 6144;
  break;
 }

 *VAR_2 = ((VAR_0 * *VAR_3) / (128 * VAR_1)) * 1000;
}
