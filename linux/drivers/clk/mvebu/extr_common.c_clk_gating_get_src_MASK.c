
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct clk_gate {scalar_t__ bit_idx; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int num_gates; struct clk** gates; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int ) ;
 int FUNC_1 (struct clk*) ;
 TYPE_1__* VAR_2 ;
 struct clk_gate* FUNC_2 (int ) ;

__attribute__((used)) static struct clk *FUNC_3(
 struct of_phandle_args *VAR_3, void *VAR_4)
{
 int VAR_5;

 if (VAR_3->args_count < 1)
  return FUNC_0(-VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_gates; VAR_5++) {
  struct clk_gate *VAR_6 =
   FUNC_2(FUNC_1(VAR_2->gates[VAR_5]));
  if (VAR_3->args[0] == VAR_6->bit_idx)
   return VAR_2->gates[VAR_5];
 }
 return FUNC_0(-VAR_1);
}
