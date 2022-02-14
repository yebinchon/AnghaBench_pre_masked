
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_driver_data {int enabled; int enabled_mutex; } ;
struct rmi_device_platform_data {int irq; } ;
struct rmi_device {int dev; TYPE_1__* xport; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct rmi_device_platform_data* FUNC_8 (struct rmi_device*) ;
 int FUNC_9 (struct rmi_device*) ;

void FUNC_10(struct rmi_device *VAR_1, bool VAR_2)
{
 struct rmi_device_platform_data *VAR_3 = FUNC_8(VAR_1);
 struct rmi_driver_data *VAR_4 = FUNC_0(&VAR_1->dev);
 int VAR_5 = VAR_3->irq;
 int VAR_6;
 int VAR_7;

 FUNC_6(&VAR_4->enabled_mutex);

 if (VAR_4->enabled)
  goto out;

 FUNC_4(VAR_5);
 VAR_4->enabled = 1;
 if (VAR_2 && FUNC_2(VAR_1->xport->dev)) {
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   FUNC_1(&VAR_1->dev,
     "Failed to disable irq for wake: %d\n",
     VAR_7);
 }





 VAR_6 = FUNC_5(VAR_3->irq);
 if (VAR_6 & VAR_0)
  FUNC_9(VAR_1);

out:
 FUNC_7(&VAR_4->enabled_mutex);
}
