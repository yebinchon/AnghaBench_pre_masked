
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct crypto4xx_core_device {int rng_lock; int dev; int tasklet; int irq; } ;


 int FUNC_0 (struct crypto4xx_core_device*) ;
 int FUNC_1 (int ) ;
 struct crypto4xx_core_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct crypto4xx_core_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct crypto4xx_core_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_6(VAR_2);

 FUNC_3(VAR_2->irq, VAR_1);
 FUNC_4(VAR_2->irq);

 FUNC_7(&VAR_2->tasklet);

 FUNC_1(VAR_2->dev);
 FUNC_5(&VAR_2->rng_lock);

 FUNC_0(VAR_2);

 return 0;
}
