
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int control_base_addr; } ;
struct rmi_function {int dev; int rmi_dev; TYPE_1__ fd; } ;
struct TYPE_6__ {int doze_holdoff; int wakeup_threshold; int doze_interval; int ctrl0; } ;
struct TYPE_5__ {scalar_t__ has_adjustable_doze_holdoff; scalar_t__ has_adjustable_doze; } ;
struct f01_data {TYPE_3__ device_control; int doze_holdoff_addr; TYPE_2__ properties; int wakeup_threshold_addr; int doze_interval_addr; } ;


 int FUNC_0 (int *,char*,int) ;
 struct f01_data* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct rmi_function *VAR_0)
{
 struct f01_data *VAR_1 = FUNC_1(&VAR_0->dev);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0->rmi_dev, VAR_0->fd.control_base_addr,
     VAR_1->device_control.ctrl0);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev,
   "Failed to write device_control register: %d\n", VAR_2);
  return VAR_2;
 }

 if (VAR_1->properties.has_adjustable_doze) {
  VAR_2 = FUNC_2(VAR_0->rmi_dev, VAR_1->doze_interval_addr,
      VAR_1->device_control.doze_interval);
  if (VAR_2) {
   FUNC_0(&VAR_0->dev,
    "Failed to write doze interval: %d\n", VAR_2);
   return VAR_2;
  }

  VAR_2 = FUNC_3(VAR_0->rmi_dev,
      VAR_1->wakeup_threshold_addr,
      &VAR_1->device_control.wakeup_threshold,
      sizeof(u8));
  if (VAR_2) {
   FUNC_0(&VAR_0->dev,
    "Failed to write wakeup threshold: %d\n",
    VAR_2);
   return VAR_2;
  }
 }

 if (VAR_1->properties.has_adjustable_doze_holdoff) {
  VAR_2 = FUNC_2(VAR_0->rmi_dev, VAR_1->doze_holdoff_addr,
      VAR_1->device_control.doze_holdoff);
  if (VAR_2) {
   FUNC_0(&VAR_0->dev,
    "Failed to write doze holdoff: %d\n", VAR_2);
   return VAR_2;
  }
 }

 return 0;
}
