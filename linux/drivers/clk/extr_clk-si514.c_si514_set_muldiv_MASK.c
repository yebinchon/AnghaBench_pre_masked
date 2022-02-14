
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_si514_muldiv {int m_int; int m_frac; int hs_div; int ls_div_bits; } ;
struct clk_si514 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct clk_si514 *VAR_3,
 struct clk_si514_muldiv *VAR_4)
{
 u8 VAR_5;
 u8 VAR_6[7];
 int VAR_7;



 if (VAR_4->m_int < 65 ||
  (VAR_4->m_int == 65 && VAR_4->m_frac <= 139575831))
  VAR_5 = 0x22;

 else if (VAR_4->m_int < 67 ||
  (VAR_4->m_int == 67 && VAR_4->m_frac <= 461581994))
  VAR_5 = 0x23;

 else if (VAR_4->m_int < 72 ||
  (VAR_4->m_int == 72 && VAR_4->m_frac <= 503383578))
  VAR_5 = 0x33;

 else if (VAR_4->m_int < 75 ||
  (VAR_4->m_int == 75 && VAR_4->m_frac <= 452724474))
  VAR_5 = 0x34;
 else
  VAR_5 = 0x44;

 VAR_7 = FUNC_1(VAR_3->regmap, VAR_1, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6[0] = VAR_4->m_frac;
 VAR_6[1] = VAR_4->m_frac >> 8;
 VAR_6[2] = VAR_4->m_frac >> 16;
 VAR_6[3] = VAR_4->m_frac >> 24 | VAR_4->m_int << 5;
 VAR_6[4] = VAR_4->m_int >> 3;
 VAR_6[5] = VAR_4->hs_div;
 VAR_6[6] = (VAR_4->hs_div >> 8) | (VAR_4->ls_div_bits << 4);

 VAR_7 = FUNC_0(VAR_3->regmap, VAR_0, VAR_6 + 5, 2);
 if (VAR_7 < 0)
  return VAR_7;




 return FUNC_0(VAR_3->regmap, VAR_2, VAR_6, 5);
}
