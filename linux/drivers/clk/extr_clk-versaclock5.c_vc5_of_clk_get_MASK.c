
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc5_driver_data {TYPE_2__* clk_out; TYPE_1__* chip_info; } ;
struct of_phandle_args {unsigned int* args; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {struct clk_hw hw; } ;
struct TYPE_3__ {unsigned int clk_out_cnt; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;

__attribute__((used)) static struct clk_hw *FUNC_1(struct of_phandle_args *VAR_1,
         void *VAR_2)
{
 struct vc5_driver_data *VAR_3 = VAR_2;
 unsigned int VAR_4 = VAR_1->args[0];

 if (VAR_4 >= VAR_3->chip_info->clk_out_cnt)
  return FUNC_0(-VAR_0);

 return &VAR_3->clk_out[VAR_4].hw;
}
