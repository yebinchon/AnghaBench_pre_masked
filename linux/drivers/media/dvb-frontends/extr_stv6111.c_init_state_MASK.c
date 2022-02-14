
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv {int* reg; int ref_freq; } ;



__attribute__((used)) static void FUNC_0(struct stv *VAR_0)
{
 u32 VAR_1 = 0;
 u32 VAR_2 = 0;
 u32 VAR_3 = 2;
 u32 VAR_4 = 0xffffffff;
 u32 VAR_5 = 0xffffffff;

 VAR_0->reg[0] = 0x08;
 VAR_0->reg[1] = 0x41;
 VAR_0->reg[2] = 0x8f;
 VAR_0->reg[3] = 0x00;
 VAR_0->reg[4] = 0xce;
 VAR_0->reg[5] = 0x54;
 VAR_0->reg[6] = 0x55;
 VAR_0->reg[7] = 0x45;
 VAR_0->reg[8] = 0x46;
 VAR_0->reg[9] = 0xbd;
 VAR_0->reg[10] = 0x11;

 VAR_0->ref_freq = 16000;

 if (VAR_1 <= 3)
  VAR_0->reg[0x00] |= (VAR_1 & 0x03);
 if (VAR_2 <= 3) {
  VAR_0->reg[0x03] |= (VAR_2 << 5);
  if (VAR_2 == 0x01)
   VAR_0->reg[0x01] |= 0x30;
 }
 if (VAR_5 <= 3)
  VAR_0->reg[0x01] = (VAR_0->reg[0x01] & ~0x30) | (VAR_5 << 4);
 if (VAR_3 <= 7)
  VAR_0->reg[0x03] |= VAR_3;
 if (VAR_4 <= 31)
  VAR_0->reg[0x02] = (VAR_0->reg[0x02] & ~0x1F) | VAR_4 | 0x40;
}
