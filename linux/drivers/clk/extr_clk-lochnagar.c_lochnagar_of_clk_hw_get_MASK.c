
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {unsigned int* args; } ;
struct lochnagar_clk_priv {TYPE_1__* lclks; int dev; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct clk_hw hw; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 struct clk_hw* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static struct clk_hw *
FUNC_3(struct of_phandle_args *VAR_1, void *VAR_2)
{
 struct lochnagar_clk_priv *VAR_3 = VAR_2;
 unsigned int VAR_4 = VAR_1->args[0];

 if (VAR_4 >= FUNC_0(VAR_3->lclks)) {
  FUNC_2(VAR_3->dev, "Invalid index %u\n", VAR_4);
  return FUNC_1(-VAR_0);
 }

 return &VAR_3->lclks[VAR_4].hw;
}
