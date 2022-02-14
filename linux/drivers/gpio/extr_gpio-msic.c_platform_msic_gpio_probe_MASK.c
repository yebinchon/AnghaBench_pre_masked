
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {char* label; int ngpio; int can_sleep; struct device* parent; scalar_t__ base; int to_irq; int set; int get; int direction_output; int direction_input; } ;
struct msic_gpio {int irq; scalar_t__ irq_base; TYPE_1__ chip; int buslock; struct platform_device* pdev; } ;
struct intel_msic_gpio_pdata {scalar_t__ gpio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct intel_msic_gpio_pdata* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,struct msic_gpio*) ;
 int FUNC_3 (TYPE_1__*,struct msic_gpio*) ;
 int VAR_5 ;
 int FUNC_4 (int,int ,struct msic_gpio*) ;
 int FUNC_5 (scalar_t__,int *,int ) ;
 int FUNC_6 (scalar_t__,struct msic_gpio*) ;
 int FUNC_7 (struct msic_gpio*) ;
 struct msic_gpio* FUNC_8 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct intel_msic_gpio_pdata *VAR_15 = FUNC_1(VAR_14);
 struct msic_gpio *VAR_16;
 int VAR_17 = FUNC_10(VAR_13, 0);
 int VAR_18;
 int VAR_19;

 if (VAR_17 < 0) {
  FUNC_0(VAR_14, "no IRQ line: %d\n", VAR_17);
  return VAR_17;
 }

 if (!VAR_15 || !VAR_15->gpio_base) {
  FUNC_0(VAR_14, "incorrect or missing platform data\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_8(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_2(VAR_14, VAR_16);

 VAR_16->pdev = VAR_13;
 VAR_16->irq = VAR_17;
 VAR_16->irq_base = VAR_15->gpio_base + VAR_3;
 VAR_16->chip.label = "msic_gpio";
 VAR_16->chip.direction_input = VAR_6;
 VAR_16->chip.direction_output = VAR_7;
 VAR_16->chip.get = VAR_8;
 VAR_16->chip.set = VAR_10;
 VAR_16->chip.to_irq = VAR_11;
 VAR_16->chip.base = VAR_15->gpio_base;
 VAR_16->chip.ngpio = VAR_4;
 VAR_16->chip.can_sleep = 1;
 VAR_16->chip.parent = VAR_14;

 FUNC_9(&VAR_16->buslock);

 VAR_18 = FUNC_3(&VAR_16->chip, VAR_16);
 if (VAR_18) {
  FUNC_0(VAR_14, "Adding MSIC gpio chip failed\n");
  goto err;
 }

 for (VAR_19 = 0; VAR_19 < VAR_16->chip.ngpio; VAR_19++) {
  FUNC_6(VAR_19 + VAR_16->irq_base, VAR_16);
  FUNC_5(VAR_19 + VAR_16->irq_base,
      &VAR_12,
      VAR_5);
 }
 FUNC_4(VAR_16->irq, VAR_9, VAR_16);

 return 0;
err:
 FUNC_7(VAR_16);
 return VAR_18;
}
