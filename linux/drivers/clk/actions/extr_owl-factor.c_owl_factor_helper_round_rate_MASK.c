
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_factor_hw {struct clk_factor_table* table; } ;
struct owl_clk_common {int hw; } ;
struct clk_factor_table {int dummy; } ;


 int FUNC_0 (struct clk_factor_table const*,unsigned int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_1 (struct owl_factor_hw const*,int *,unsigned long,unsigned long*) ;

long FUNC_2(struct owl_clk_common *VAR_0,
    const struct owl_factor_hw *VAR_1,
    unsigned long VAR_2,
    unsigned long *VAR_3)
{
 const struct clk_factor_table *VAR_4 = VAR_1->table;
 unsigned int VAR_5, VAR_6 = 0, VAR_7 = 1;

 VAR_5 = FUNC_1(VAR_1, &VAR_0->hw, VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_5, &VAR_6, &VAR_7);

 return *VAR_3 * VAR_6 / VAR_7;
}
