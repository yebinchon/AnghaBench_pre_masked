
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efa_com_get_hw_hints_result {int poll_interval; int mmio_read_timeout; int driver_watchdog_timeout; int admin_completion_timeout; } ;
struct efa_com_dev {int efa_dev; } ;
struct TYPE_4__ {int poll_interval; int mmio_read_timeout; int driver_watchdog_timeout; int admin_completion_timeout; } ;
struct TYPE_3__ {TYPE_2__ hw_hints; } ;
struct efa_admin_get_feature_resp {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_dev*,struct efa_admin_get_feature_resp*,int ) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct efa_com_dev *VAR_1,
    struct efa_com_get_hw_hints_result *VAR_2)
{
 struct efa_admin_get_feature_resp VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3, VAR_0);
 if (VAR_4) {
  FUNC_1(VAR_1->efa_dev,
          "Failed to get hw hints %d\n", VAR_4);
  return VAR_4;
 }

 VAR_2->admin_completion_timeout = VAR_3.u.hw_hints.admin_completion_timeout;
 VAR_2->driver_watchdog_timeout = VAR_3.u.hw_hints.driver_watchdog_timeout;
 VAR_2->mmio_read_timeout = VAR_3.u.hw_hints.mmio_read_timeout;
 VAR_2->poll_interval = VAR_3.u.hw_hints.poll_interval;

 return 0;
}
