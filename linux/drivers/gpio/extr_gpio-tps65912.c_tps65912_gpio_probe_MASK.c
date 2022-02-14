
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct tps65912_gpio {TYPE_1__ gpio_chip; void* tps; } ;
struct tps65912 {int dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,struct tps65912_gpio*) ;
 struct tps65912_gpio* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct tps65912_gpio*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct tps65912 *VAR_4 = FUNC_1(VAR_3->dev.parent);
 struct tps65912_gpio *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->tps = FUNC_1(VAR_3->dev.parent);
 VAR_5->gpio_chip = VAR_2;
 VAR_5->gpio_chip.parent = VAR_4->dev;

 VAR_6 = FUNC_2(&VAR_3->dev, &VAR_5->gpio_chip,
         VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_4(VAR_3, VAR_5);

 return 0;
}
