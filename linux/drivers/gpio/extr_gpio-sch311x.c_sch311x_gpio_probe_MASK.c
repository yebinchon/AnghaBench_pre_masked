
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sch311x_pdev_data {scalar_t__ runtime_reg; } ;
struct sch311x_gpio_priv {struct sch311x_gpio_block* blocks; } ;
struct TYPE_5__ {int ngpio; int base; int * parent; int set; int get; int set_config; int get_direction; int direction_output; int direction_input; int free; int request; int owner; int label; } ;
struct sch311x_gpio_block {TYPE_2__ chip; scalar_t__ runtime_reg; int data_reg; int config_regs; int lock; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int data_reg; int config_regs; int base; } ;


 int FUNC_0 (struct sch311x_gpio_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int,...) ;
 struct sch311x_pdev_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 struct sch311x_gpio_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,scalar_t__,int,int ) ;
 int FUNC_6 (TYPE_2__*,struct sch311x_gpio_block*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct platform_device*,struct sch311x_gpio_priv*) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_15)
{
 struct sch311x_pdev_data *VAR_16 = FUNC_2(&VAR_15->dev);
 struct sch311x_gpio_priv *VAR_17;
 struct sch311x_gpio_block *VAR_18;
 int VAR_19, VAR_20;


 if (!FUNC_5(&VAR_15->dev, VAR_16->runtime_reg + VAR_4, 6,
  VAR_0)) {
  FUNC_1(&VAR_15->dev, "Failed to request region 0x%04x-0x%04x.\n",
   VAR_16->runtime_reg + VAR_4, VAR_16->runtime_reg + VAR_4 + 5);
  return -VAR_1;
 }

 VAR_17 = FUNC_4(&VAR_15->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 FUNC_8(VAR_15, VAR_17);

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_17->blocks); VAR_20++) {
  VAR_18 = &VAR_17->blocks[VAR_20];

  FUNC_9(&VAR_18->lock);

  VAR_18->chip.label = VAR_0;
  VAR_18->chip.owner = VAR_5;
  VAR_18->chip.request = VAR_12;
  VAR_18->chip.free = VAR_9;
  VAR_18->chip.direction_input = VAR_7;
  VAR_18->chip.direction_output = VAR_8;
  VAR_18->chip.get_direction = VAR_11;
  VAR_18->chip.set_config = VAR_14;
  VAR_18->chip.get = VAR_10;
  VAR_18->chip.set = VAR_13;
  VAR_18->chip.ngpio = 8;
  VAR_18->chip.parent = &VAR_15->dev;
  VAR_18->chip.base = VAR_6[VAR_20].base;
  VAR_18->config_regs = VAR_6[VAR_20].config_regs;
  VAR_18->data_reg = VAR_6[VAR_20].data_reg;
  VAR_18->runtime_reg = VAR_16->runtime_reg;

  VAR_19 = FUNC_6(&VAR_18->chip, VAR_18);
  if (VAR_19 < 0) {
   FUNC_1(&VAR_15->dev,
    "Could not register gpiochip, %d\n", VAR_19);
   goto exit_err;
  }
  FUNC_3(&VAR_15->dev,
    "SMSC SCH311x GPIO block %d registered.\n", VAR_20);
 }

 return 0;

exit_err:

 for (--VAR_20; VAR_20 >= 0; VAR_20--)
  FUNC_7(&VAR_17->blocks[VAR_20].chip);
 return VAR_19;
}
