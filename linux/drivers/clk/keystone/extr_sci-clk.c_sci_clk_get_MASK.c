
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_clk_provider {int num_clocks; int clocks; } ;
struct clk_hw {int dummy; } ;
struct sci_clk {struct clk_hw hw; int clk_id; int dev_id; } ;
struct of_phandle_args {int args_count; int * args; } ;
typedef int clk ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_0 (int ) ;
 int VAR_2 ;
 struct sci_clk** FUNC_1 (struct sci_clk*,int ,int ,int,int ) ;

__attribute__((used)) static struct clk_hw *FUNC_2(struct of_phandle_args *VAR_3, void *VAR_4)
{
 struct sci_clk_provider *VAR_5 = VAR_4;
 struct sci_clk **VAR_6;
 struct sci_clk VAR_7;

 if (VAR_3->args_count != 2)
  return FUNC_0(-VAR_0);

 VAR_7.dev_id = VAR_3->args[0];
 VAR_7.clk_id = VAR_3->args[1];

 VAR_6 = FUNC_1(&VAR_7, VAR_5->clocks, VAR_5->num_clocks,
        sizeof(VAR_6), VAR_2);

 if (!VAR_6)
  return FUNC_0(-VAR_1);

 return &(*VAR_6)->hw;
}
