
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_i2c_dev {int fast_clk; TYPE_1__* hw; int div_clk; scalar_t__ is_multimaster_mode; int adapter; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int has_single_clk_source; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct tegra_i2c_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tegra_i2c_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct tegra_i2c_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->adapter);

 if (VAR_1->is_multimaster_mode)
  FUNC_0(VAR_1->div_clk);

 FUNC_4(&VAR_0->dev);
 if (!FUNC_5(&VAR_0->dev))
  FUNC_7(&VAR_0->dev);

 FUNC_1(VAR_1->div_clk);
 if (!VAR_1->hw->has_single_clk_source)
  FUNC_1(VAR_1->fast_clk);

 FUNC_6(VAR_1);
 return 0;
}
