
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int parent; } ;
struct lp873x_gpio {TYPE_1__ chip; TYPE_5__* lp873; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,struct lp873x_gpio*) ;
 struct lp873x_gpio* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct lp873x_gpio*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct lp873x_gpio *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_4);

 VAR_4->lp873 = FUNC_1(VAR_3->dev.parent);
 VAR_4->chip = VAR_2;
 VAR_4->chip.parent = VAR_4->lp873->dev;

 VAR_5 = FUNC_2(&VAR_3->dev, &VAR_4->chip, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
