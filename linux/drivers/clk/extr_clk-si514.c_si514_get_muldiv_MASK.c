
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_si514_muldiv {int m_frac; int m_int; int ls_div_bits; int hs_div; } ;
struct clk_si514 {int regmap; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_si514 *VAR_1,
 struct clk_si514_muldiv *VAR_2)
{
 int VAR_3;
 u8 VAR_4[7];

 VAR_3 = FUNC_1(VAR_1->regmap, VAR_0,
   VAR_4, FUNC_0(VAR_4));
 if (VAR_3)
  return VAR_3;

 VAR_2->m_frac = VAR_4[0] | VAR_4[1] << 8 | VAR_4[2] << 16 |
      (VAR_4[3] & 0x1F) << 24;
 VAR_2->m_int = (VAR_4[4] & 0x3f) << 3 | VAR_4[3] >> 5;
 VAR_2->ls_div_bits = (VAR_4[6] >> 4) & 0x07;
 VAR_2->hs_div = (VAR_4[6] & 0x03) << 8 | VAR_4[5];
 return 0;
}
