
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_si544_muldiv {int hs_div; int ls_div_bits; int fb_div_frac; int fb_div_int; } ;
struct clk_si544 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct clk_si544 *VAR_2,
 struct clk_si544_muldiv *VAR_3)
{
 int VAR_4;
 u8 VAR_5[6];

 VAR_5[0] = VAR_3->hs_div;
 VAR_5[1] = VAR_3->hs_div >> 8 | VAR_3->ls_div_bits << 4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_1, VAR_5, 2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5[0] = VAR_3->fb_div_frac;
 VAR_5[1] = VAR_3->fb_div_frac >> 8;
 VAR_5[2] = VAR_3->fb_div_frac >> 16;
 VAR_5[3] = VAR_3->fb_div_frac >> 24;
 VAR_5[4] = VAR_3->fb_div_int;
 VAR_5[5] = VAR_3->fb_div_int >> 8;





 return FUNC_0(VAR_2->regmap, VAR_0, VAR_5, 6);
}
