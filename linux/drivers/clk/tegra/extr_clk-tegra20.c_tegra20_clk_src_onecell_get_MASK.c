
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {scalar_t__* args; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct clk_hw* FUNC_2 (struct clk*) ;
 struct clk_hw* FUNC_3 (struct clk_hw*) ;
 struct clk* FUNC_4 (struct of_phandle_args*,void*) ;

__attribute__((used)) static struct clk *FUNC_5(struct of_phandle_args *VAR_3,
            void *VAR_4)
{
 struct clk_hw *VAR_5;
 struct clk_hw *VAR_6;
 struct clk *VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (FUNC_1(VAR_7))
  return VAR_7;
 if (VAR_3->args[0] == VAR_1 ||
     VAR_3->args[0] == VAR_2) {
  VAR_6 = FUNC_2(VAR_7);

  VAR_5 = FUNC_3(VAR_6);
  if (!VAR_5)
   return FUNC_0(-VAR_0);
 }

 return VAR_7;
}
