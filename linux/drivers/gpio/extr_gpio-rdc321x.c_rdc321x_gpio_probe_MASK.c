
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct rdc321x_gpio_pdata {int max_gpios; int sb_pdev; } ;
struct TYPE_2__ {char* label; int ngpio; scalar_t__ base; int set; int get; int direction_output; int direction_input; int owner; } ;
struct rdc321x_gpio {TYPE_1__ chip; int * data_reg; scalar_t__ reg2_data_base; int sb_pdev; scalar_t__ reg1_data_base; scalar_t__ reg2_ctrl_base; scalar_t__ reg1_ctrl_base; int lock; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct rdc321x_gpio_pdata* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,struct rdc321x_gpio*) ;
 struct rdc321x_gpio* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int ,scalar_t__,int *) ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;
 int FUNC_7 (struct platform_device*,struct rdc321x_gpio*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 int VAR_10;
 struct resource *VAR_11;
 struct rdc321x_gpio *VAR_12;
 struct rdc321x_gpio_pdata *VAR_13;

 VAR_13 = FUNC_1(&VAR_9->dev);
 if (!VAR_13) {
  FUNC_0(&VAR_9->dev, "no platform data supplied\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_4(&VAR_9->dev, sizeof(struct rdc321x_gpio),
     VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_6(VAR_9, VAR_3, "gpio-reg1");
 if (!VAR_11) {
  FUNC_0(&VAR_9->dev, "failed to get gpio-reg1 resource\n");
  return -VAR_0;
 }

 FUNC_8(&VAR_12->lock);
 VAR_12->sb_pdev = VAR_13->sb_pdev;
 VAR_12->reg1_ctrl_base = VAR_11->start;
 VAR_12->reg1_data_base = VAR_11->start + 0x4;

 VAR_11 = FUNC_6(VAR_9, VAR_3, "gpio-reg2");
 if (!VAR_11) {
  FUNC_0(&VAR_9->dev, "failed to get gpio-reg2 resource\n");
  return -VAR_0;
 }

 VAR_12->reg2_ctrl_base = VAR_11->start;
 VAR_12->reg2_data_base = VAR_11->start + 0x4;

 VAR_12->chip.label = "rdc321x-gpio";
 VAR_12->chip.owner = VAR_4;
 VAR_12->chip.direction_input = VAR_6;
 VAR_12->chip.direction_output = VAR_5;
 VAR_12->chip.get = VAR_7;
 VAR_12->chip.set = VAR_8;
 VAR_12->chip.base = 0;
 VAR_12->chip.ngpio = VAR_13->max_gpios;

 FUNC_7(VAR_9, VAR_12);




 VAR_10 = FUNC_5(VAR_12->sb_pdev,
     VAR_12->reg1_data_base,
     &VAR_12->data_reg[0]);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_12->sb_pdev,
     VAR_12->reg2_data_base,
     &VAR_12->data_reg[1]);
 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_9->dev, "registering %d GPIOs\n",
     VAR_12->chip.ngpio);
 return FUNC_3(&VAR_9->dev, &VAR_12->chip,
          VAR_12);
}
