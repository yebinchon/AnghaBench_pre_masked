
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {unsigned int* args; } ;
struct max9485_driver_data {TYPE_1__* hw; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct clk_hw hw; } ;



__attribute__((used)) static struct clk_hw *
FUNC_0(struct of_phandle_args *VAR_0, void *VAR_1)
{
 struct max9485_driver_data *VAR_2 = VAR_1;
 unsigned int VAR_3 = VAR_0->args[0];

 return &VAR_2->hw[VAR_3].hw;
}
