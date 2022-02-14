
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ngpio; char* label; int base; int can_sleep; int owner; int * parent; int dbg_show; int set; int get; int get_direction; int direction_output; int direction_input; } ;
struct xra1403 {TYPE_1__ chip; struct gpio_desc* regmap; } ;
struct spi_device {int dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,TYPE_1__*,struct xra1403*) ;
 struct gpio_desc* FUNC_5 (int *,char*,int ) ;
 struct xra1403* FUNC_6 (int *,int,int ) ;
 struct gpio_desc* FUNC_7 (struct spi_device*,int *) ;
 int FUNC_8 (struct spi_device*,struct xra1403*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_11)
{
 struct xra1403 *VAR_12;
 struct gpio_desc *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_6(&VAR_11->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;


 VAR_13 = FUNC_5(&VAR_11->dev, "reset", VAR_2);
 if (FUNC_0(VAR_13))
  FUNC_3(&VAR_11->dev, "Could not get reset-gpios\n");

 VAR_12->chip.direction_input = VAR_5;
 VAR_12->chip.direction_output = VAR_6;
 VAR_12->chip.get_direction = VAR_8;
 VAR_12->chip.get = VAR_7;
 VAR_12->chip.set = VAR_10;

 VAR_12->chip.dbg_show = VAR_4;

 VAR_12->chip.ngpio = 16;
 VAR_12->chip.label = "xra1403";

 VAR_12->chip.base = -1;
 VAR_12->chip.can_sleep = 1;
 VAR_12->chip.parent = &VAR_11->dev;
 VAR_12->chip.owner = VAR_3;

 VAR_12->regmap = FUNC_7(VAR_11, &VAR_9);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_14 = FUNC_1(VAR_12->regmap);
  FUNC_2(&VAR_11->dev, "Failed to allocate regmap: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(&VAR_11->dev, &VAR_12->chip, VAR_12);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_11->dev, "Unable to register gpiochip\n");
  return VAR_14;
 }

 FUNC_8(VAR_11, VAR_12);

 return 0;
}
