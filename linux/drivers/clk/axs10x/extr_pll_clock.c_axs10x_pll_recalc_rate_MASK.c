
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct axs10x_pll_clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct axs10x_pll_clk*,int ) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 struct axs10x_pll_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_3,
         unsigned long VAR_4)
{
 u64 VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 struct axs10x_pll_clk *VAR_9 = FUNC_3(VAR_3);

 VAR_6 = FUNC_0(FUNC_1(VAR_9, VAR_1));
 VAR_7 = FUNC_0(FUNC_1(VAR_9, VAR_0));
 VAR_8 = FUNC_0(FUNC_1(VAR_9, VAR_2));

 VAR_5 = (u64)VAR_4 * VAR_7;
 FUNC_2(VAR_5, VAR_6 * VAR_8);

 return VAR_5;
}
