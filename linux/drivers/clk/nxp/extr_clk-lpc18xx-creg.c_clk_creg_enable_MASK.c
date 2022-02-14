
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_creg_data {int en_mask; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct clk_creg_data* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_creg_data *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->reg, VAR_0,
      VAR_2->en_mask, VAR_2->en_mask);
}
