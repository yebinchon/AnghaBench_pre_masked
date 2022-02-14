
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct asic3_led {int cdev; } ;


 struct asic3_led* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct asic3_led *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->cdev);

 return FUNC_2(VAR_0);
}
