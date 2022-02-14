
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct bt_bmc {int poll_timer; int irq; int miscdev; } ;


 int FUNC_0 (int *) ;
 struct bt_bmc* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct bt_bmc *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_2(&VAR_1->miscdev);
 if (!VAR_1->irq)
  FUNC_0(&VAR_1->poll_timer);
 return 0;
}
