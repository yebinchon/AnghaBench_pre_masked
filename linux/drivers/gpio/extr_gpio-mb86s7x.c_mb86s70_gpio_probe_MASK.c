
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int ngpio; int base; int to_irq; int * parent; int owner; int label; int set; int get; int free; int request; int direction_input; int direction_output; } ;
struct mb86s70_gpio_chip {TYPE_1__ gc; int clk; int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 struct mb86s70_gpio_chip* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (TYPE_1__*,struct mb86s70_gpio_chip*) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct platform_device*,struct mb86s70_gpio_chip*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_10)
{
 struct mb86s70_gpio_chip *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_8(&VAR_10->dev, sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 FUNC_12(VAR_10, VAR_11);

 VAR_11->base = FUNC_9(VAR_10, 0);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 if (!FUNC_11(&VAR_10->dev)) {
  VAR_11->clk = FUNC_7(&VAR_10->dev, ((void*)0));
  if (FUNC_0(VAR_11->clk))
   return FUNC_1(VAR_11->clk);

  VAR_12 = FUNC_4(VAR_11->clk);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_13(&VAR_11->lock);

 VAR_11->gc.direction_output = VAR_4;
 VAR_11->gc.direction_input = VAR_3;
 VAR_11->gc.request = VAR_7;
 VAR_11->gc.free = VAR_5;
 VAR_11->gc.get = VAR_6;
 VAR_11->gc.set = VAR_8;
 VAR_11->gc.label = FUNC_6(&VAR_10->dev);
 VAR_11->gc.ngpio = 32;
 VAR_11->gc.owner = VAR_2;
 VAR_11->gc.parent = &VAR_10->dev;
 VAR_11->gc.base = -1;

 if (FUNC_11(&VAR_10->dev))
  VAR_11->gc.to_irq = VAR_9;

 VAR_12 = FUNC_10(&VAR_11->gc, VAR_11);
 if (VAR_12) {
  FUNC_5(&VAR_10->dev, "couldn't register gpio driver\n");
  FUNC_3(VAR_11->clk);
  return VAR_12;
 }

 if (FUNC_11(&VAR_10->dev))
  FUNC_2(&VAR_11->gc);

 return 0;
}
