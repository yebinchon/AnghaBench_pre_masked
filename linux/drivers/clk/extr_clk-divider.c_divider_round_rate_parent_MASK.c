
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_hw {int dummy; } ;
struct clk_div_table {int dummy; } ;


 long FUNC_0 (int ,int) ;
 int FUNC_1 (struct clk_hw*,struct clk_hw*,unsigned long,unsigned long*,struct clk_div_table const*,int ,unsigned long) ;

long FUNC_2(struct clk_hw *VAR_0, struct clk_hw *VAR_1,
          unsigned long VAR_2, unsigned long *VAR_3,
          const struct clk_div_table *VAR_4,
          u8 VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 return FUNC_0((u64)*VAR_3, VAR_7);
}
