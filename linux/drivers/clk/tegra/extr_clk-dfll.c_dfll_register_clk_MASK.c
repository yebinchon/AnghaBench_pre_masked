
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* init; } ;
struct tegra_dfll {int dfll_clk; TYPE_2__* dev; TYPE_4__ dfll_clk_hw; int output_clock_name; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct tegra_dfll *VAR_3)
{
 int VAR_4;

 VAR_1.name = VAR_3->output_clock_name;
 VAR_3->dfll_clk_hw.init = &VAR_1;

 VAR_3->dfll_clk = FUNC_1(VAR_3->dev, &VAR_3->dfll_clk_hw);
 if (FUNC_0(VAR_3->dfll_clk)) {
  FUNC_3(VAR_3->dev, "DFLL clock registration error\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_4(VAR_3->dev->of_node, VAR_2,
      VAR_3->dfll_clk);
 if (VAR_4) {
  FUNC_3(VAR_3->dev, "of_clk_add_provider() failed\n");

  FUNC_2(VAR_3->dfll_clk);
  return VAR_4;
 }

 return 0;
}
