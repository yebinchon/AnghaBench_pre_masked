
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lpc32xx_pll_clk {int n_div; int m_div; int p_div; int mode; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 struct clk_hw* FUNC_1 (struct clk_hw*,int ) ;
 int FUNC_2 (struct clk_hw*) ;
 void* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int,int,int) ;
 int FUNC_5 (char*,int ,unsigned long,unsigned long) ;
 struct lpc32xx_pll_clk* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_7(struct clk_hw *VAR_2, unsigned long VAR_3,
       unsigned long *VAR_4)
{
 struct lpc32xx_pll_clk *VAR_5 = FUNC_6(VAR_2);
 struct clk_hw *VAR_6, *VAR_7;
 u64 VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_5("%s: %lu/%lu\n", FUNC_0(VAR_2), *VAR_4, VAR_3);







 if (VAR_3 != 48000000)
  return -VAR_0;


 VAR_6 = FUNC_1(VAR_2, 0);
 if (!VAR_6)
  return -VAR_0;


 VAR_7 = FUNC_1(VAR_6, 0);
 if (!VAR_7)
  return -VAR_0;
 VAR_11 = FUNC_2(VAR_7);


 for (VAR_8 = 16; VAR_8 >= 1; VAR_8--) {
  for (VAR_9 = 1; VAR_9 <= 4; VAR_9++) {
   VAR_10 = FUNC_3(192000000 * VAR_8 * VAR_9, VAR_11);
   if (!(VAR_10 && VAR_10 <= 256
         && VAR_10 * VAR_11 == 192000000 * VAR_8 * VAR_9
         && FUNC_4(VAR_11, VAR_8, 1000000, 20000000)
         && FUNC_4(VAR_11, VAR_8 * VAR_9, 1000000, 27000000)))
    continue;

   VAR_5->n_div = VAR_9;
   VAR_5->m_div = VAR_10;
   VAR_5->p_div = 2;
   VAR_5->mode = VAR_1;
   *VAR_4 = FUNC_3(VAR_11, VAR_8);

   return VAR_3;
  }
 }

 return -VAR_0;
}
