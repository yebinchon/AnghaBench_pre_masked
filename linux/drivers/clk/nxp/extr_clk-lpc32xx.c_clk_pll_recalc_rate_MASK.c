
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_pll_clk {int m_div; int n_div; int p_div; int mode; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct clk_hw*) ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (unsigned long,int,int,int) ;
 int FUNC_3 (char*,int ,unsigned long,int,int,int,int,unsigned long,unsigned long,int,unsigned long) ;
 int FUNC_4 (char*,int ,unsigned long,unsigned long,unsigned long) ;
 int FUNC_5 (int ,int ,int*) ;
 struct lpc32xx_pll_clk* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_7(struct clk_hw *VAR_12,
      unsigned long VAR_13)
{
 struct lpc32xx_pll_clk *VAR_14 = FUNC_6(VAR_12);
 bool VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18, VAR_19, VAR_20;
 u32 VAR_21;

 FUNC_5(VAR_11, VAR_14->reg, &VAR_21);
 VAR_15 = VAR_21 & VAR_2;
 VAR_16 = VAR_21 & VAR_1;
 VAR_17 = VAR_21 & VAR_3;

 VAR_14->m_div = ((VAR_21 & VAR_4) >> 1) + 1;
 VAR_14->n_div = ((VAR_21 & VAR_6) >> 9) + 1;
 VAR_14->p_div = ((VAR_21 & VAR_5) >> 11) + 1;

 if (VAR_15 && VAR_16) {
  VAR_14->p_div = 0;
  VAR_14->mode = VAR_8;
  return VAR_13;
 }
 if (VAR_16) {
  VAR_14->mode = VAR_0;
  return VAR_13 / (1 << VAR_14->p_div);
 }
 if (VAR_15) {
  VAR_14->p_div = 0;
  VAR_14->mode = VAR_7;
 }

 VAR_20 = VAR_13 / VAR_14->n_div;
 VAR_18 = VAR_19 = VAR_20 * VAR_14->m_div;

 if (!VAR_15) {
  if (VAR_17) {
   VAR_19 *= (1 << VAR_14->p_div);
   VAR_14->mode = VAR_9;
  } else {
   VAR_18 /= (1 << VAR_14->p_div);
   VAR_14->mode = VAR_10;
  }
 }

 FUNC_3("%s: %lu: 0x%x: %d/%d/%d, %lu/%lu/%d => %lu\n",
   FUNC_0(VAR_12),
   VAR_13, VAR_21, VAR_15, VAR_16, VAR_17,
   VAR_14->n_div, VAR_14->m_div, (1 << VAR_14->p_div), VAR_18);

 if (FUNC_1(VAR_12) &&
     !(FUNC_2(VAR_13, 1, 1000000, 20000000)
       && FUNC_2(VAR_19, 1, 156000000, 320000000)
       && FUNC_2(VAR_20, 1, 1000000, 27000000)))
  FUNC_4("%s: PLL clocks are not in valid ranges: %lu/%lu/%lu\n",
         FUNC_0(VAR_12),
         VAR_13, VAR_19, VAR_20);

 return VAR_18;
}
