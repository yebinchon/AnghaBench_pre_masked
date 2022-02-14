
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int parent; } ;
struct lp87565_gpio {TYPE_1__ chip; int map; } ;
struct lp87565 {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct lp87565* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,struct lp87565_gpio*) ;
 struct lp87565_gpio* FUNC_3 (TYPE_2__*,int,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct lp87565_gpio *VAR_4;
 struct lp87565 *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->dev.parent);
 VAR_4->chip = VAR_2;
 VAR_4->chip.parent = VAR_5->dev;
 VAR_4->map = VAR_5->regmap;

 VAR_6 = FUNC_2(&VAR_3->dev, &VAR_4->chip, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
