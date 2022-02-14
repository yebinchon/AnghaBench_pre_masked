
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct gic_clk_data {int num_clocks; int * clocks; } ;
struct gic_chip_pm {int chip_data; struct gic_clk_data const* clk_data; TYPE_1__* clks; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct gic_chip_pm*) ;
 int FUNC_3 (struct device*,int,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (struct device*,int,int,int ) ;
 struct gic_chip_pm* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 struct gic_clk_data* FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 const struct gic_clk_data *VAR_6;
 struct gic_chip_pm *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_6 = FUNC_9(&VAR_4->dev);
 if (!VAR_6) {
  FUNC_0(&VAR_4->dev, "no device match found\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_5(VAR_5, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = FUNC_8(VAR_5->of_node, 0);
 if (!VAR_9) {
  FUNC_0(VAR_5, "no parent interrupt found!\n");
  return -VAR_0;
 }

 VAR_7->clks = FUNC_4(VAR_5, VAR_6->num_clocks,
         sizeof(*VAR_7->clks), VAR_3);
 if (!VAR_7->clks)
  return -VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_6->num_clocks; VAR_10++)
  VAR_7->clks[VAR_10].id = VAR_6->clocks[VAR_10];

 VAR_8 = FUNC_3(VAR_5, VAR_6->num_clocks, VAR_7->clks);
 if (VAR_8)
  goto irq_dispose;

 VAR_7->clk_data = VAR_6;
 FUNC_2(VAR_5, VAR_7);

 FUNC_11(VAR_5);

 VAR_8 = FUNC_12(VAR_5);
 if (VAR_8 < 0)
  goto rpm_disable;

 VAR_8 = FUNC_6(VAR_5, &VAR_7->chip_data, VAR_9);
 if (VAR_8)
  goto rpm_put;

 FUNC_13(VAR_5);

 FUNC_1(VAR_5, "GIC IRQ controller registered\n");

 return 0;

rpm_put:
 FUNC_14(VAR_5);
rpm_disable:
 FUNC_10(VAR_5);
irq_dispose:
 FUNC_7(VAR_9);

 return VAR_8;
}
