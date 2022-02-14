
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int bits_per_word; int dev; int modalias; } ;
struct TYPE_2__ {int base; int ngpio; int can_sleep; int owner; int * parent; int set_multiple; int set; int get; int direction_output; int label; } ;
struct gen_74x164_chip {int registers; int lock; TYPE_1__ gpio_chip; int gpiod_oe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct gen_74x164_chip*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int*) ;
 int FUNC_5 (int *,char*,int ) ;
 struct gen_74x164_chip* FUNC_6 (int *,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_1__*,struct gen_74x164_chip*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct spi_device*,struct gen_74x164_chip*) ;
 int FUNC_12 (struct spi_device*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_10)
{
 struct gen_74x164_chip *VAR_11;
 u32 VAR_12;
 int VAR_13;




 VAR_10->bits_per_word = 8;

 VAR_13 = FUNC_12(VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_4(&VAR_10->dev, "registers-number", &VAR_12);
 if (VAR_13) {
  FUNC_3(&VAR_10->dev, "Missing 'registers-number' property.\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_6(&VAR_10->dev, sizeof(*VAR_11) + VAR_12, VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->gpiod_oe = FUNC_5(&VAR_10->dev, "enable",
       VAR_4);
 if (FUNC_0(VAR_11->gpiod_oe))
  return FUNC_1(VAR_11->gpiod_oe);

 FUNC_8(VAR_11->gpiod_oe, 1);

 FUNC_11(VAR_10, VAR_11);

 VAR_11->gpio_chip.label = VAR_10->modalias;
 VAR_11->gpio_chip.direction_output = VAR_6;
 VAR_11->gpio_chip.get = VAR_7;
 VAR_11->gpio_chip.set = VAR_9;
 VAR_11->gpio_chip.set_multiple = VAR_8;
 VAR_11->gpio_chip.base = -1;

 VAR_11->registers = VAR_12;
 VAR_11->gpio_chip.ngpio = VAR_2 * VAR_11->registers;

 VAR_11->gpio_chip.can_sleep = 1;
 VAR_11->gpio_chip.parent = &VAR_10->dev;
 VAR_11->gpio_chip.owner = VAR_5;

 FUNC_10(&VAR_11->lock);

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13) {
  FUNC_3(&VAR_10->dev, "Failed writing: %d\n", VAR_13);
  goto exit_destroy;
 }

 VAR_13 = FUNC_7(&VAR_11->gpio_chip, VAR_11);
 if (!VAR_13)
  return 0;

exit_destroy:
 FUNC_9(&VAR_11->lock);

 return VAR_13;
}
