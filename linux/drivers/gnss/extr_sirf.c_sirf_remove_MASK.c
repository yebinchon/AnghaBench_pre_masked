
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int gdev; int vcc; scalar_t__ on_off; int irq; scalar_t__ wakeup; } ;
struct serdev_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sirf_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct sirf_data* FUNC_6 (struct serdev_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct serdev_device *VAR_1)
{
 struct sirf_data *VAR_2 = FUNC_6(VAR_1);

 FUNC_2(VAR_2->gdev);

 if (FUNC_0(VAR_0))
  FUNC_4(&VAR_1->dev);
 else
  FUNC_7(&VAR_1->dev);

 if (VAR_2->wakeup)
  FUNC_1(VAR_2->irq, VAR_2);

 if (VAR_2->on_off)
  FUNC_5(VAR_2->vcc);

 FUNC_3(VAR_2->gdev);
}
