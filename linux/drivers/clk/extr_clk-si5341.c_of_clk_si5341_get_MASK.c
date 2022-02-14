
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct of_phandle_args {unsigned int* args; } ;
struct clk_hw {int dummy; } ;
struct clk_si5341 {unsigned int num_outputs; unsigned int num_synth; TYPE_3__* i2c_client; struct clk_hw hw; TYPE_2__* synth; TYPE_1__* clk; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct clk_hw hw; } ;
struct TYPE_4__ {struct clk_hw hw; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned int) ;

__attribute__((used)) static struct clk_hw *
FUNC_2(struct of_phandle_args *VAR_1, void *VAR_2)
{
 struct clk_si5341 *VAR_3 = VAR_2;
 unsigned int VAR_4 = VAR_1->args[1];
 unsigned int VAR_5 = VAR_1->args[0];

 switch (VAR_5) {
 case 0:
  if (VAR_4 >= VAR_3->num_outputs) {
   FUNC_1(&VAR_3->i2c_client->dev,
    "invalid output index %u\n", VAR_4);
   return FUNC_0(-VAR_0);
  }
  return &VAR_3->clk[VAR_4].hw;
 case 1:
  if (VAR_4 >= VAR_3->num_synth) {
   FUNC_1(&VAR_3->i2c_client->dev,
    "invalid synthesizer index %u\n", VAR_4);
   return FUNC_0(-VAR_0);
  }
  return &VAR_3->synth[VAR_4].hw;
 case 2:
  if (VAR_4 > 0) {
   FUNC_1(&VAR_3->i2c_client->dev,
    "invalid PLL index %u\n", VAR_4);
   return FUNC_0(-VAR_0);
  }
  return &VAR_3->hw;
 default:
  FUNC_1(&VAR_3->i2c_client->dev, "invalid group %u\n", VAR_5);
  return FUNC_0(-VAR_0);
 }
}
