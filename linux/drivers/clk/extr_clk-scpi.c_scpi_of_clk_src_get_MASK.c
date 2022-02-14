
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_clk_data {unsigned int clk_num; struct scpi_clk** clk; } ;
struct clk_hw {int dummy; } ;
struct scpi_clk {unsigned int id; struct clk_hw hw; } ;
struct of_phandle_args {unsigned int* args; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;

__attribute__((used)) static struct clk_hw *
FUNC_1(struct of_phandle_args *VAR_1, void *VAR_2)
{
 struct scpi_clk *VAR_3;
 struct scpi_clk_data *VAR_4 = VAR_2;
 unsigned int VAR_5 = VAR_1->args[0], VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->clk_num; VAR_6++) {
  VAR_3 = VAR_4->clk[VAR_6];
  if (VAR_5 == VAR_3->id)
   return &VAR_3->hw;
 }

 return FUNC_0(-VAR_0);
}
