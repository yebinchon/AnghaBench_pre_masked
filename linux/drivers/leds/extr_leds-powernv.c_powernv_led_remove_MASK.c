
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_led_common {int led_disabled; int lock; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 struct powernv_led_common* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct powernv_led_common *VAR_1;


 VAR_1 = FUNC_2(VAR_0);
 VAR_1->led_disabled = 1;


 FUNC_1(&VAR_1->lock);

 FUNC_0(&VAR_0->dev, "PowerNV led module unregistered\n");
 return 0;
}
