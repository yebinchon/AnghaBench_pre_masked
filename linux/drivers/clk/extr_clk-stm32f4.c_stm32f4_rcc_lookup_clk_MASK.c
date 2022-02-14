
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int * args; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;
 struct clk_hw** VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static struct clk_hw *
FUNC_2(struct of_phandle_args *VAR_2, void *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2->args[0], VAR_2->args[1]);

 if (VAR_4 < 0)
  return FUNC_0(-VAR_0);

 return VAR_1[VAR_4];
}
