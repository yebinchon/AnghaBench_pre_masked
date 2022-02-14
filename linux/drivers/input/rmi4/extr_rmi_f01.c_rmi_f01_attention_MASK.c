
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int data_base_addr; } ;
struct rmi_function {int dev; TYPE_1__ fd; struct rmi_device* rmi_dev; } ;
struct rmi_device {TYPE_2__* driver; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* reset_handler ) (struct rmi_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct rmi_device*,int ,int *) ;
 int FUNC_6 (struct rmi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct rmi_function *VAR_3 = VAR_2;
 struct rmi_device *VAR_4 = VAR_3->rmi_dev;
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_5(VAR_4, VAR_3->fd.data_base_addr, &VAR_6);
 if (VAR_5) {
  FUNC_3(&VAR_3->dev,
   "Failed to read device status: %d.\n", VAR_5);
  return FUNC_0(VAR_5);
 }

 if (FUNC_1(VAR_6))
  FUNC_4(&VAR_3->dev,
    "Device in bootloader mode, please update firmware\n");

 if (FUNC_2(VAR_6)) {
  FUNC_4(&VAR_3->dev, "Device reset detected.\n");
  VAR_5 = VAR_4->driver->reset_handler(VAR_4);
  if (VAR_5) {
   FUNC_3(&VAR_3->dev, "Device reset failed: %d\n", VAR_5);
   return FUNC_0(VAR_5);
  }
 }

 return VAR_0;
}
