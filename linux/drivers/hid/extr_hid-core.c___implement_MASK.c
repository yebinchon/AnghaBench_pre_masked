
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, unsigned VAR_1, int VAR_2, u32 VAR_3)
{
 unsigned int VAR_4 = VAR_1 / 8;
 unsigned int VAR_5 = VAR_1 % 8;
 int VAR_6 = 8 - VAR_5;

 while (VAR_2 - VAR_6 >= 0) {
  VAR_0[VAR_4] &= ~(0xff << VAR_5);
  VAR_0[VAR_4] |= VAR_3 << VAR_5;
  VAR_3 >>= VAR_6;
  VAR_2 -= VAR_6;
  VAR_6 = 8;
  VAR_5 = 0;
  VAR_4++;
 }


 if (VAR_2) {
  u8 VAR_7 = ((1U << VAR_2) - 1);
  VAR_0[VAR_4] &= ~(VAR_7 << VAR_5);
  VAR_0[VAR_4] |= VAR_3 << VAR_5;
 }
}
