
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct TYPE_4__ {int base; int ngpio; int direction_output; int direction_input; int set; int get; int label; int of_node; } ;
struct mcs814x_gpio_chip {TYPE_1__ chip; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int const*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,struct resource*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct mcs814x_gpio_chip*) ;
 struct mcs814x_gpio_chip* FUNC_5 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int* FUNC_6 (int ,char*,int *) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct mcs814x_gpio_chip*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct mcs814x_gpio_chip *VAR_10;
 int VAR_11;
 const unsigned int *VAR_12;

 VAR_9 = FUNC_7(VAR_8, VAR_3, 0);
 if (!VAR_9)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_8->dev.of_node, "num-gpios", ((void*)0));
 if (!VAR_12)
  FUNC_1(&VAR_8->dev, "FIXME: no num-gpios property\n");

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->regs = FUNC_2(&VAR_8->dev, VAR_9);
 if (!VAR_10->regs) {
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_8(VAR_8, VAR_10);





 VAR_10->chip.label = VAR_8->name;
 VAR_10->chip.get = VAR_6;
 VAR_10->chip.set = VAR_7;
 VAR_10->chip.direction_input = VAR_4;
 VAR_10->chip.direction_output = VAR_5;
 VAR_10->chip.ngpio = FUNC_0(VAR_12);

 VAR_10->chip.base = -1;

 VAR_11 = FUNC_3(&VAR_10->chip);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev, "failed to register gpiochip\n");
  goto out;
 }

 return 0;

out:
 FUNC_8(VAR_8, ((void*)0));
 FUNC_4(VAR_10);
 return VAR_11;
}
