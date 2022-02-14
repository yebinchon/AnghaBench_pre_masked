
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_clk_audio_div_table {unsigned long rate; unsigned int int_reg; unsigned int frac_reg; } ;
struct clk_zx_audio_divider {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct clk_zx_audio_divider *VAR_2,
      struct zx_clk_audio_div_table *VAR_3,
      unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10;

 VAR_6 = VAR_5 / VAR_4;

 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;
 else if (VAR_6 < VAR_1)
  VAR_6 = 0;
 VAR_8 = VAR_5 - VAR_4 * VAR_6;
 VAR_9 = VAR_4;

 VAR_10 = FUNC_0(VAR_8, VAR_9);
 VAR_8 = VAR_8 / VAR_10;
 VAR_9 = VAR_9 / VAR_10;

 if ((VAR_8 >> 16) || (VAR_9 >> 16)) {
  if (VAR_8 > VAR_9) {
   VAR_9 = VAR_9 * 0xffff / VAR_8;
   VAR_8 = 0xffff;
  } else {
   VAR_8 = VAR_8 * 0xffff / VAR_9;
   VAR_9 = 0xffff;
  }
 }
 VAR_7 = VAR_8 | (VAR_9 << 16);

 VAR_3->rate = VAR_5 * VAR_9 / (VAR_6 * VAR_9 + VAR_8);
 VAR_3->int_reg = VAR_6;
 VAR_3->frac_reg = VAR_7;
}
