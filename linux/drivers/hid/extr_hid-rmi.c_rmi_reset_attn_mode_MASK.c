
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rmi_device {TYPE_2__* driver; } ;
struct TYPE_3__ {struct rmi_device* rmi_dev; } ;
struct rmi_data {int flags; TYPE_1__ xport; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int (* reset_handler ) (struct rmi_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct rmi_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,int ) ;
 int FUNC_2 (struct rmi_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_2)
{
 struct rmi_data *VAR_3 = FUNC_0(VAR_2);
 struct rmi_device *VAR_4 = VAR_3->xport.rmi_dev;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (VAR_5)
  return VAR_5;

 if (FUNC_3(VAR_1, &VAR_3->flags))
  VAR_5 = VAR_4->driver->reset_handler(VAR_4);

 return VAR_5;
}
