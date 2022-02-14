
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; int * funcs; } ;
struct sii8620 {int extcon; TYPE_1__ bridge; struct device* dev; TYPE_2__* supplies; int gpio_reset; int clk_xtal; int mt_queue; int lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {int irq; struct device dev; } ;
struct TYPE_4__ {char* supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct sii8620* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,TYPE_2__*) ;
 int FUNC_8 (struct device*,int ,int *,int ,int,char*,struct sii8620*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct i2c_client*,struct sii8620*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;
 int FUNC_13 (struct sii8620*) ;
 int FUNC_14 (struct sii8620*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct sii8620 *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = VAR_11;
 FUNC_12(&VAR_12->lock);
 FUNC_0(&VAR_12->mt_queue);

 VAR_12->clk_xtal = FUNC_4(VAR_11, "xtal");
 if (FUNC_1(VAR_12->clk_xtal)) {
  FUNC_3(VAR_11, "failed to get xtal clock from DT\n");
  return FUNC_2(VAR_12->clk_xtal);
 }

 if (!VAR_9->irq) {
  FUNC_3(VAR_11, "no irq provided\n");
  return -VAR_0;
 }
 FUNC_11(VAR_9->irq, VAR_6);
 VAR_13 = FUNC_8(VAR_11, VAR_9->irq, ((void*)0),
     VAR_8,
     VAR_5 | VAR_4,
     "sii8620", VAR_12);
 if (VAR_13 < 0) {
  FUNC_3(VAR_11, "failed to install IRQ handler\n");
  return VAR_13;
 }

 VAR_12->gpio_reset = FUNC_5(VAR_11, "reset", VAR_3);
 if (FUNC_1(VAR_12->gpio_reset)) {
  FUNC_3(VAR_11, "failed to get reset gpio from DT\n");
  return FUNC_2(VAR_12->gpio_reset);
 }

 VAR_12->supplies[0].supply = "cvcc10";
 VAR_12->supplies[1].supply = "iovcc18";
 VAR_13 = FUNC_7(VAR_11, 2, VAR_12->supplies);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_14(VAR_12);
 if (VAR_13 < 0) {
  FUNC_3(VAR_12->dev, "failed to initialize EXTCON\n");
  return VAR_13;
 }

 FUNC_10(VAR_9, VAR_12);

 VAR_12->bridge.funcs = &VAR_7;
 VAR_12->bridge.of_node = VAR_11->of_node;
 FUNC_9(&VAR_12->bridge);

 if (!VAR_12->extcon)
  FUNC_13(VAR_12);

 return 0;
}
