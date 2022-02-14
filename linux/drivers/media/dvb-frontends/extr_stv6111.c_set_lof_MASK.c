
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv {int ref_freq; int* reg; int frequency; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct stv*,int,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct stv*,int) ;
 int FUNC_4 (struct stv*,int,int) ;

__attribute__((used)) static int FUNC_5(struct stv *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = (VAR_2 + 999999) / 1000000;
 u32 VAR_4 = (VAR_1 + 500) / 1000;
 u32 VAR_5 = 1, VAR_6 = 0, VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11;

 if (VAR_3 < 6)
  VAR_3 = 6;
 if (VAR_3 > 50)
  VAR_3 = 50;

 if (VAR_4 <= 1300000) {
  VAR_5 = 4;
  VAR_6 = 1;
 } else {
  VAR_5 = 2;
  VAR_6 = 0;
 }
 VAR_7 = VAR_4 * VAR_5;
 VAR_8 = VAR_7 / VAR_0->ref_freq;
 VAR_9 = VAR_7 % VAR_0->ref_freq;
 VAR_9 = FUNC_0(VAR_9, 0x40000, VAR_0->ref_freq);

 VAR_10 = 0;
 if (VAR_7 < 2700000)
  VAR_10 = 0;
 else if (VAR_7 < 2950000)
  VAR_10 = 1;
 else if (VAR_7 < 3300000)
  VAR_10 = 2;
 else if (VAR_7 < 3700000)
  VAR_10 = 3;
 else if (VAR_7 < 4200000)
  VAR_10 = 5;
 else if (VAR_7 < 4800000)
  VAR_10 = 6;
 else
  VAR_10 = 7;

 VAR_0->reg[0x02] |= 0x80;

 VAR_0->reg[0x03] = (VAR_0->reg[0x03] & ~0x80) | (VAR_6 << 7);
 VAR_0->reg[0x04] = (VAR_8 & 0xFF);
 VAR_0->reg[0x05] = (((VAR_8 >> 8) & 0x01) | ((VAR_9 & 0x7F) << 1)) & 0xff;
 VAR_0->reg[0x06] = ((VAR_9 >> 7) & 0xFF);
 VAR_0->reg[0x07] = (VAR_0->reg[0x07] & ~0x07) | ((VAR_9 >> 15) & 0x07);
 VAR_0->reg[0x07] = (VAR_0->reg[0x07] & ~0xE0) | (VAR_10 << 5);

 VAR_0->reg[0x08] = (VAR_0->reg[0x08] & ~0xFC) | ((VAR_3 - 6) << 2);

 VAR_0->reg[0x09] = (VAR_0->reg[0x09] & ~0x0C) | 0x0C;
 FUNC_4(VAR_0, 2, 8);

 FUNC_3(VAR_0, 0x0C);

 FUNC_2(10000, 12000);

 FUNC_1(VAR_0, 0x03, &VAR_11);
 if (VAR_11 & 0x10) {
  VAR_0->reg[0x02] &= ~0x80;
  FUNC_4(VAR_0, 2, 1);
 }
 FUNC_1(VAR_0, 0x08, &VAR_11);

 VAR_0->frequency = VAR_4;

 return 0;
}
