
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct clk_muxing_ctrl {int num_muxes; struct clk** muxes; } ;
struct clk_mux {scalar_t__ shift; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int ) ;
 int FUNC_1 (struct clk*) ;
 struct clk_mux* FUNC_2 (int ) ;

__attribute__((used)) static struct clk *FUNC_3(
 struct of_phandle_args *VAR_2, void *VAR_3)
{
 struct clk_muxing_ctrl *VAR_4 = (struct clk_muxing_ctrl *)VAR_3;
 int VAR_5;

 if (VAR_2->args_count < 1)
  return FUNC_0(-VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_muxes; VAR_5++) {
  struct clk_mux *VAR_6 =
   FUNC_2(FUNC_1(VAR_4->muxes[VAR_5]));
  if (VAR_2->args[0] == VAR_6->shift)
   return VAR_4->muxes[VAR_5];
 }
 return FUNC_0(-VAR_1);
}
