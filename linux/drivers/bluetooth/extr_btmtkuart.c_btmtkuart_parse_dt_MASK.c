
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct serdev_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct btmtkuart_dev {int desired_speed; void* clk; void* reset; void* pins_runtime; void* pinctrl; void* pins_boot; void* boot; void* osc; void* vcc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct btmtkuart_dev*) ;
 scalar_t__ FUNC_3 (struct btmtkuart_dev*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 void* FUNC_5 (TYPE_1__*,char*) ;
 void* FUNC_6 (TYPE_1__*,char*) ;
 void* FUNC_7 (TYPE_1__*,char*,int ) ;
 void* FUNC_8 (TYPE_1__*) ;
 void* FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (struct device_node*,char*,int*) ;
 void* FUNC_11 (void*,char*) ;
 struct btmtkuart_dev* FUNC_12 (struct serdev_device*) ;

__attribute__((used)) static int FUNC_13(struct serdev_device *VAR_1)
{
 struct btmtkuart_dev *VAR_2 = FUNC_12(VAR_1);
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 u32 VAR_4 = 921600;
 int VAR_5;

 if (FUNC_3(VAR_2)) {
  FUNC_10(VAR_3, "current-speed", &VAR_4);

  VAR_2->desired_speed = VAR_4;

  VAR_2->vcc = FUNC_9(&VAR_1->dev, "vcc");
  if (FUNC_0(VAR_2->vcc)) {
   VAR_5 = FUNC_1(VAR_2->vcc);
   return VAR_5;
  }

  VAR_2->osc = FUNC_6(&VAR_1->dev, "osc");
  if (FUNC_0(VAR_2->osc)) {
   VAR_5 = FUNC_1(VAR_2->osc);
   return VAR_5;
  }

  VAR_2->boot = FUNC_7(&VAR_1->dev, "boot",
           VAR_0);
  if (FUNC_0(VAR_2->boot)) {
   VAR_5 = FUNC_1(VAR_2->boot);
   return VAR_5;
  }

  VAR_2->pinctrl = FUNC_8(&VAR_1->dev);
  if (FUNC_0(VAR_2->pinctrl)) {
   VAR_5 = FUNC_1(VAR_2->pinctrl);
   return VAR_5;
  }

  VAR_2->pins_boot = FUNC_11(VAR_2->pinctrl,
             "default");
  if (FUNC_0(VAR_2->pins_boot) && !VAR_2->boot) {
   VAR_5 = FUNC_1(VAR_2->pins_boot);
   FUNC_4(&VAR_1->dev,
    "Should assign RXD to LOW at boot stage\n");
   return VAR_5;
  }

  VAR_2->pins_runtime = FUNC_11(VAR_2->pinctrl,
         "runtime");
  if (FUNC_0(VAR_2->pins_runtime)) {
   VAR_5 = FUNC_1(VAR_2->pins_runtime);
   return VAR_5;
  }

  VAR_2->reset = FUNC_7(&VAR_1->dev, "reset",
            VAR_0);
  if (FUNC_0(VAR_2->reset)) {
   VAR_5 = FUNC_1(VAR_2->reset);
   return VAR_5;
  }
 } else if (FUNC_2(VAR_2)) {
  VAR_2->clk = FUNC_5(&VAR_1->dev, "ref");
  if (FUNC_0(VAR_2->clk))
   return FUNC_1(VAR_2->clk);
 }

 return 0;
}
