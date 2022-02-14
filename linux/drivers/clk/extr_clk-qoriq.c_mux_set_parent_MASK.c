
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct mux_hwclock {size_t num_parents; int* parent_to_clksel; int reg; int cg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 struct mux_hwclock* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3, u8 VAR_4)
{
 struct mux_hwclock *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6;

 if (VAR_4 >= VAR_5->num_parents)
  return -VAR_2;

 VAR_6 = VAR_5->parent_to_clksel[VAR_4];
 FUNC_0(VAR_5->cg, (VAR_6 << VAR_1) & VAR_0, VAR_5->reg);

 return 0;
}
