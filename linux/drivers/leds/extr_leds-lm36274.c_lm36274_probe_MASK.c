
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ti_lmu {int regmap; int dev; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct lm36274 {int led_dev; int dev; int regmap; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct ti_lmu* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct lm36274*) ;
 struct lm36274* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct lm36274*) ;
 int FUNC_6 (struct lm36274*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct ti_lmu *VAR_3 = FUNC_1(VAR_2->dev.parent);
 struct lm36274 *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_2->dev, sizeof(*VAR_4),
        VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->pdev = VAR_2;
 VAR_4->dev = VAR_3->dev;
 VAR_4->regmap = VAR_3->regmap;
 FUNC_2(&VAR_2->dev, VAR_4);

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "Failed to parse DT node\n");
  return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "Failed to init the device\n");
  return VAR_5;
 }

 return FUNC_4(VAR_4->dev,
      &VAR_4->led_dev);
}
