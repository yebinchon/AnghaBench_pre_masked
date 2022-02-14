
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u64 ;
typedef int u32 ;
struct clk_si544_muldiv {unsigned long ls_div_bits; int hs_div; int fb_div_int; int fb_div_frac; scalar_t__ delta_m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct clk_si544_muldiv *VAR_5,
 unsigned long VAR_6)
{
 u64 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u8 VAR_10;


 VAR_8 = VAR_6;
 VAR_5->ls_div_bits = 0;

 if (VAR_6 >= VAR_4) {
  VAR_5->ls_div_bits = 0;
 } else {
  VAR_10 = 1;
  VAR_9 = 2 * VAR_2;
  while (VAR_9 <= (VAR_2 * 32)) {
   if (((u64)VAR_6 * VAR_9) >= VAR_0)
    break;
   ++VAR_10;
   VAR_9 <<= 1;
  }
  VAR_5->ls_div_bits = VAR_10;
  VAR_8 = VAR_6 << VAR_10;
 }


 VAR_7 = VAR_0 + VAR_8 - 1;
 FUNC_0(VAR_7, VAR_8);
 VAR_5->hs_div = VAR_7;


 if ((VAR_5->hs_div & 1) &&
     (VAR_5->hs_div > VAR_3 || VAR_5->ls_div_bits))
  ++VAR_5->hs_div;


 VAR_7 = (u64)VAR_8 * VAR_5->hs_div;


 VAR_9 = FUNC_0(VAR_7, VAR_1);
 VAR_5->fb_div_int = VAR_7;


 VAR_7 = (u64)VAR_9 << 32;
 VAR_7 += VAR_1 / 2;
 FUNC_0(VAR_7, VAR_1);
 VAR_5->fb_div_frac = VAR_7;


 VAR_5->delta_m = 0;

 return 0;
}
