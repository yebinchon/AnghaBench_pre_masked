
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int control_base_addr; } ;
struct rmi_function {int dev; TYPE_2__ fd; TYPE_4__* rmi_dev; } ;
struct TYPE_7__ {int ctrl0; } ;
struct f01_data {int old_nosleep; TYPE_3__ device_control; } ;
struct TYPE_8__ {TYPE_1__* xport; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 struct f01_data* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rmi_function *VAR_5)
{
 struct f01_data *VAR_6 = FUNC_1(&VAR_5->dev);
 int VAR_7;

 VAR_6->old_nosleep =
  VAR_6->device_control.ctrl0 & VAR_0;
 VAR_6->device_control.ctrl0 &= ~VAR_0;

 VAR_6->device_control.ctrl0 &= ~VAR_1;
 if (FUNC_2(VAR_5->rmi_dev->xport->dev))
  VAR_6->device_control.ctrl0 |= VAR_3;
 else
  VAR_6->device_control.ctrl0 |= VAR_4;

 VAR_7 = FUNC_3(VAR_5->rmi_dev, VAR_5->fd.control_base_addr,
     VAR_6->device_control.ctrl0);
 if (VAR_7) {
  FUNC_0(&VAR_5->dev, "Failed to write sleep mode: %d.\n", VAR_7);
  if (VAR_6->old_nosleep)
   VAR_6->device_control.ctrl0 |= VAR_0;
  VAR_6->device_control.ctrl0 &= ~VAR_1;
  VAR_6->device_control.ctrl0 |= VAR_2;
  return VAR_7;
 }

 return 0;
}
