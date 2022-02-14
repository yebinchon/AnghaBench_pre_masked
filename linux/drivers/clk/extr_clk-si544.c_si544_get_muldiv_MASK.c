
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_si544_muldiv {int ls_div_bits; int hs_div; int fb_div_int; int fb_div_frac; int delta_m; } ;
struct clk_si544 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct clk_si544 *VAR_3,
 struct clk_si544_muldiv *VAR_4)
{
 int VAR_5;
 u8 VAR_6[6];

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_2, VAR_6, 2);
 if (VAR_5)
  return VAR_5;

 VAR_4->ls_div_bits = (VAR_6[1] >> 4) & 0x07;
 VAR_4->hs_div = (VAR_6[1] & 0x07) << 8 | VAR_6[0];

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_1, VAR_6, 6);
 if (VAR_5)
  return VAR_5;

 VAR_4->fb_div_int = VAR_6[4] | (VAR_6[5] & 0x07) << 8;
 VAR_4->fb_div_frac = VAR_6[0] | VAR_6[1] << 8 | VAR_6[2] << 16 |
    VAR_6[3] << 24;

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_0, VAR_6, 3);
 if (VAR_5)
  return VAR_5;


 VAR_4->delta_m = VAR_6[0] << 8 | VAR_6[1] << 16 | VAR_6[2] << 24;
 VAR_4->delta_m >>= 8;

 return 0;
}
