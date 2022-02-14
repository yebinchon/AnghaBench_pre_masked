
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_7__ {int of_node; int parent; } ;
struct altr_a10sr_gpio {TYPE_3__ gp; int regmap; } ;
struct altr_a10sr {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 struct altr_a10sr* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,struct altr_a10sr_gpio*) ;
 struct altr_a10sr_gpio* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct altr_a10sr_gpio*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct altr_a10sr_gpio *VAR_4;
 int VAR_5;
 struct altr_a10sr *VAR_6 = FUNC_1(VAR_3->dev.parent);

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->regmap = VAR_6->regmap;

 VAR_4->gp = VAR_2;
 VAR_4->gp.parent = VAR_3->dev.parent;
 VAR_4->gp.of_node = VAR_3->dev.of_node;

 VAR_5 = FUNC_2(&VAR_3->dev, &VAR_4->gp, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_4(VAR_3, VAR_4);

 return 0;
}
