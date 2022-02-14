
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ktd2692_context {int lock; scalar_t__ regulator; int fled_cdev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ktd2692_context* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct ktd2692_context *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->fled_cdev);

 if (VAR_1->regulator) {
  VAR_2 = FUNC_4(VAR_1->regulator);
  if (VAR_2)
   FUNC_0(&VAR_0->dev,
    "Failed to disable supply: %d\n", VAR_2);
 }

 FUNC_2(&VAR_1->lock);

 return 0;
}
