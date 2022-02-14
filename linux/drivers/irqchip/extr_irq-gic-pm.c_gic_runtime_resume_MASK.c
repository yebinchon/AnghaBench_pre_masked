
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gic_clk_data {int num_clocks; } ;
struct gic_chip_pm {int clks; struct gic_clk_data* clk_data; struct gic_chip_data* chip_data; } ;
struct gic_chip_data {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct gic_chip_pm* FUNC_2 (struct device*) ;
 int FUNC_3 (struct gic_chip_data*) ;
 int FUNC_4 (struct gic_chip_data*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct gic_chip_pm *VAR_1 = FUNC_2(VAR_0);
 struct gic_chip_data *VAR_2 = VAR_1->chip_data;
 const struct gic_clk_data *VAR_3 = VAR_1->clk_data;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->num_clocks, VAR_1->clks);
 if (VAR_4) {
  FUNC_1(VAR_0, "clk_enable failed: %d\n", VAR_4);
  return VAR_4;
 }







 if (!VAR_2)
  return 0;

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 return 0;
}
