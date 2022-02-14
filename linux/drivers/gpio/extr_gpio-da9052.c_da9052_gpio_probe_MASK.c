
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct da9052_pdata {scalar_t__ gpio_base; } ;
struct TYPE_7__ {scalar_t__ base; } ;
struct da9052_gpio {TYPE_1__ gp; TYPE_5__* da9052; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 TYPE_5__* FUNC_1 (int ) ;
 struct da9052_pdata* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,struct da9052_gpio*) ;
 struct da9052_gpio* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct platform_device*,struct da9052_gpio*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct da9052_gpio *VAR_4;
 struct da9052_pdata *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->da9052 = FUNC_1(VAR_3->dev.parent);
 VAR_5 = FUNC_2(VAR_4->da9052->dev);

 VAR_4->gp = VAR_2;
 if (VAR_5 && VAR_5->gpio_base)
  VAR_4->gp.base = VAR_5->gpio_base;

 VAR_6 = FUNC_3(&VAR_3->dev, &VAR_4->gp, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_5(VAR_3, VAR_4);

 return 0;
}
