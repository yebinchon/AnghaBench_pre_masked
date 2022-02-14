
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; TYPE_2__* parent; } ;
struct tps65218_gpio {TYPE_1__ gpio_chip; struct tps65218* tps65218; } ;
struct tps65218 {int dummy; } ;
struct TYPE_7__ {int of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct tps65218* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,struct tps65218_gpio*) ;
 struct tps65218_gpio* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct tps65218_gpio*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct tps65218 *VAR_4 = FUNC_1(VAR_3->dev.parent);
 struct tps65218_gpio *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_3->dev, sizeof(*VAR_5),
         VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->tps65218 = VAR_4;
 VAR_5->gpio_chip = VAR_2;
 VAR_5->gpio_chip.parent = &VAR_3->dev;




 VAR_6 = FUNC_2(&VAR_3->dev, &VAR_5->gpio_chip,
         VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->dev, "Failed to register gpiochip, %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_4(VAR_3, VAR_5);

 return VAR_6;
}
