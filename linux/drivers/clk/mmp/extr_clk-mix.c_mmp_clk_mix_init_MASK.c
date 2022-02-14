
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_mix {int table_size; scalar_t__ table; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct mmp_clk_mix*,scalar_t__,int ) ;
 struct mmp_clk_mix* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct mmp_clk_mix *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->table)
  FUNC_0(VAR_1, VAR_1->table, VAR_1->table_size);
}
