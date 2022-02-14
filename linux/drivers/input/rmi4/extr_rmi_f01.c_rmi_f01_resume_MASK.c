
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int control_base_addr; } ;
struct rmi_function {int dev; TYPE_1__ fd; int rmi_dev; } ;
struct TYPE_4__ {int ctrl0; } ;
struct f01_data {TYPE_2__ device_control; scalar_t__ old_nosleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct f01_data* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rmi_function *VAR_3)
{
 struct f01_data *VAR_4 = FUNC_1(&VAR_3->dev);
 int VAR_5;

 if (VAR_4->old_nosleep)
  VAR_4->device_control.ctrl0 |= VAR_0;

 VAR_4->device_control.ctrl0 &= ~VAR_1;
 VAR_4->device_control.ctrl0 |= VAR_2;

 VAR_5 = FUNC_2(VAR_3->rmi_dev, VAR_3->fd.control_base_addr,
     VAR_4->device_control.ctrl0);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev,
   "Failed to restore normal operation: %d.\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
