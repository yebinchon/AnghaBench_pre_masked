
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_pll_clk {int mode; unsigned long m_div; unsigned long n_div; int p_div; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct lpc32xx_pll_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_5, unsigned long VAR_6,
       unsigned long VAR_7)
{
 struct lpc32xx_pll_clk *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9;
 unsigned long VAR_10;


 switch (VAR_8->mode) {
 case 131:
  VAR_9 = VAR_2;
  VAR_9 |= (VAR_8->m_div - 1) << 1;
  VAR_9 |= (VAR_8->n_div - 1) << 9;
  VAR_10 = (VAR_7 * VAR_8->m_div) / VAR_8->n_div;
  break;
 case 132:
  VAR_9 = VAR_1;
  VAR_9 |= (VAR_8->p_div - 1) << 11;
  VAR_10 = VAR_7 / (1 << (VAR_8->p_div));
  break;
 case 130:
  VAR_9 = VAR_2 | VAR_1;
  VAR_10 = VAR_7;
  break;
 case 129:
  VAR_9 = VAR_3;
  VAR_9 |= (VAR_8->m_div - 1) << 1;
  VAR_9 |= (VAR_8->n_div - 1) << 9;
  VAR_9 |= (VAR_8->p_div - 1) << 11;
  VAR_10 = (VAR_7 * VAR_8->m_div) / VAR_8->n_div;
  break;
 case 128:
  VAR_9 = 0x0;
  VAR_9 |= (VAR_8->m_div - 1) << 1;
  VAR_9 |= (VAR_8->n_div - 1) << 9;
  VAR_9 |= (VAR_8->p_div - 1) << 11;
  VAR_10 = (VAR_7 * VAR_8->m_div) /
    (VAR_8->n_div * (1 << VAR_8->p_div));
  break;
 default:
  return -VAR_0;
 }


 if (VAR_10 != VAR_6)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_8->reg, 0x1FFFF, VAR_9);
}
