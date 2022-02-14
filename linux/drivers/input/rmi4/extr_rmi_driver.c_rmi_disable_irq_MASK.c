
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_driver_data {int enabled; int enabled_mutex; int attn_fifo; } ;
struct rmi_device_platform_data {int irq; } ;
struct rmi_device {int dev; TYPE_1__* xport; } ;
struct rmi4_attn_data {int data; int member_0; } ;
struct TYPE_2__ {int dev; } ;


 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct rmi4_attn_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct rmi_device_platform_data* FUNC_10 (struct rmi_device*) ;

void FUNC_11(struct rmi_device *VAR_0, bool VAR_1)
{
 struct rmi_device_platform_data *VAR_2 = FUNC_10(VAR_0);
 struct rmi_driver_data *VAR_3 = FUNC_0(&VAR_0->dev);
 struct rmi4_attn_data VAR_4 = {0};
 int VAR_5 = VAR_2->irq;
 int VAR_6, VAR_7;

 FUNC_8(&VAR_3->enabled_mutex);

 if (!VAR_3->enabled)
  goto out;

 VAR_3->enabled = 0;
 FUNC_3(VAR_5);
 if (VAR_1 && FUNC_2(VAR_0->xport->dev)) {
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6)
   FUNC_1(&VAR_0->dev,
     "Failed to enable irq for wake: %d\n",
     VAR_6);
 }


 while (!FUNC_6(&VAR_3->attn_fifo)) {
  VAR_7 = FUNC_5(&VAR_3->attn_fifo, &VAR_4);
  if (VAR_7)
   FUNC_7(VAR_4.data);
 }

out:
 FUNC_9(&VAR_3->enabled_mutex);
}
