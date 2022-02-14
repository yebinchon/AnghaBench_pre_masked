
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lpc32xx_pll_clk {int m_div; int n_div; int p_div; int mode; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int,int,int) ;
 int FUNC_3 (char*,int ,unsigned long,int,...) ;
 int FUNC_4 (char*,int ,unsigned long) ;
 struct lpc32xx_pll_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_6(struct clk_hw *VAR_3, unsigned long VAR_4,
        unsigned long *VAR_5)
{
 struct lpc32xx_pll_clk *VAR_6 = FUNC_5(VAR_3);
 u64 VAR_7, VAR_8 = VAR_4, VAR_9 = *VAR_5, VAR_10 = (u64)VAR_4 << 6;
 u64 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15;

 FUNC_3("%s: %lu/%lu\n", FUNC_0(VAR_3), *VAR_5, VAR_4);

 if (VAR_4 > 266500000)
  return -VAR_0;


 for (VAR_14 = 4; VAR_14 >= 0; VAR_14--) {
  for (VAR_15 = 4; VAR_15 > 0; VAR_15--) {
   VAR_7 = FUNC_1(VAR_8 * VAR_15 * (1 << VAR_14), VAR_9);


   if (!(VAR_7 && VAR_7 <= 256
         && FUNC_2(VAR_9, VAR_15, 1000000, 27000000)
         && FUNC_2(VAR_9 * VAR_7 * (1 << VAR_14), VAR_15,
           156000000, 320000000)))
    continue;


   if (VAR_8 * VAR_15 * (1 << VAR_14) - VAR_9 * VAR_7 <= VAR_10) {
    VAR_11 = VAR_7;
    VAR_12 = VAR_15;
    VAR_13 = VAR_14;
    VAR_10 = VAR_8 * VAR_15 * (1 << VAR_14) - VAR_9 * VAR_7;
   }
  }
 }

 if (VAR_10 == (u64)VAR_4 << 6) {
  FUNC_4("%s: %lu: no valid PLL parameters are found\n",
         FUNC_0(VAR_3), VAR_4);
  return -VAR_0;
 }

 VAR_6->m_div = VAR_11;
 VAR_6->n_div = VAR_12;
 VAR_6->p_div = VAR_13;


 if (!VAR_13)
  VAR_6->mode = VAR_1;
 else
  VAR_6->mode = VAR_2;

 VAR_8 = FUNC_1(VAR_9 * VAR_11, VAR_12 * (1 << VAR_13));

 if (!VAR_10)
  FUNC_3("%s: %lu: found exact match: %llu/%llu/%llu\n",
    FUNC_0(VAR_3), VAR_4, VAR_11, VAR_12, VAR_13);
 else
  FUNC_3("%s: %lu: found closest: %llu/%llu/%llu - %llu\n",
    FUNC_0(VAR_3), VAR_4, VAR_11, VAR_12, VAR_13, VAR_8);

 return VAR_8;
}
