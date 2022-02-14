
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_device {TYPE_1__* pdev; int hu_lock; scalar_t__ hu; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct intel_device *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->pdev->dev, "hci_intel irq\n");

 FUNC_2(&VAR_3->hu_lock);
 if (VAR_3->hu)
  FUNC_1(VAR_3->hu);
 FUNC_3(&VAR_3->hu_lock);


 FUNC_4(&VAR_3->pdev->dev);
 FUNC_5(&VAR_3->pdev->dev);
 FUNC_6(&VAR_3->pdev->dev);

 return VAR_0;
}
