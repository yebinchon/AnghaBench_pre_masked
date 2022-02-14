
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {unsigned int* args; } ;
struct clk_hw_onecell_data {struct clk_hw** hws; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct clk_hw* FUNC_0 (int ) ;

__attribute__((used)) static struct clk_hw *FUNC_1(struct of_phandle_args *VAR_5,
           void *VAR_6)
{
 struct clk_hw_onecell_data *VAR_7 = VAR_6;
 unsigned int VAR_8 = VAR_5->args[0];
 unsigned int VAR_9 = VAR_5->args[1];

 if (VAR_8 == VAR_0) {
  if (VAR_9 >= VAR_2)
   return FUNC_0(-VAR_4);
  return VAR_7->hws[VAR_9];
 } else if (VAR_8 == VAR_1) {
  if (VAR_9 >= VAR_3)
   return FUNC_0(-VAR_4);
  return VAR_7->hws[VAR_2 + VAR_9];
 }

 return FUNC_0(-VAR_4);
}
