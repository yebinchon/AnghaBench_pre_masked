
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * bus; int * type; struct TYPE_10__* parent; } ;
struct TYPE_9__ {int function_number; } ;
struct rmi_function {TYPE_2__ dev; TYPE_1__ fd; struct rmi_device* rmi_dev; } ;
struct rmi_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_6 (int ,TYPE_2__*,char*,int ) ;
 int VAR_2 ;

int FUNC_7(struct rmi_function *VAR_3)
{
 struct rmi_device *VAR_4 = VAR_3->rmi_dev;
 int VAR_5;

 FUNC_4(&VAR_3->dev);

 FUNC_2(&VAR_3->dev, "%s.fn%02x",
       FUNC_1(&VAR_4->dev), VAR_3->fd.function_number);

 VAR_3->dev.parent = &VAR_4->dev;
 VAR_3->dev.type = &VAR_2;
 VAR_3->dev.bus = &VAR_1;

 VAR_5 = FUNC_3(&VAR_3->dev);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev,
   "Failed device_register function device %s\n",
   FUNC_1(&VAR_3->dev));
  goto err_put_device;
 }

 FUNC_6(VAR_0, &VAR_4->dev, "Registered F%02X.\n",
   VAR_3->fd.function_number);

 return 0;

err_put_device:
 FUNC_5(&VAR_3->dev);
 return VAR_5;
}
