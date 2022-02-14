
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_driver_data {int enabled; } ;
struct rmi_device_platform_data {int irq; } ;
struct rmi_device {int dev; TYPE_1__* xport; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct rmi_driver_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ,int,int ,struct rmi_device*) ;
 int FUNC_4 (int ) ;
 struct rmi_device_platform_data* FUNC_5 (struct rmi_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct rmi_device *VAR_3)
{
 struct rmi_device_platform_data *VAR_4 = FUNC_5(VAR_3);
 struct rmi_driver_data *VAR_5 = FUNC_2(&VAR_3->dev);
 int VAR_6 = FUNC_4(VAR_4->irq);
 int VAR_7;

 if (!VAR_6)
  VAR_6 = VAR_1;

 VAR_7 = FUNC_3(&VAR_3->dev, VAR_4->irq, ((void*)0),
     VAR_2, VAR_6 | VAR_0,
     FUNC_0(VAR_3->xport->dev),
     VAR_3);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_3->dev, "Failed to register interrupt %d\n",
   VAR_4->irq);

  return VAR_7;
 }

 VAR_5->enabled = 1;

 return 0;
}
