
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int command_base_addr; } ;
struct rmi_function {TYPE_3__ fd; struct rmi_device* rmi_dev; int dev; } ;
struct rmi_device {int dummy; } ;
struct f54_data {int is_busy; int data_mutex; int work; int workqueue; scalar_t__ timeout; int cmd_done; int report_type; TYPE_2__* fn; } ;
struct TYPE_4__ {int data_base_addr; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;


 int VAR_0 ;
 struct f54_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct rmi_device*,int ,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct rmi_function *VAR_2, u8 VAR_3)
{
 struct f54_data *VAR_4 = FUNC_0(&VAR_2->dev);
 struct rmi_device *VAR_5 = VAR_2->rmi_dev;
 int VAR_6;


 if (VAR_4->report_type != VAR_3) {
  VAR_6 = FUNC_6(VAR_5, VAR_4->fn->fd.data_base_addr,
      VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_4->report_type = VAR_3;
 }






 FUNC_7(2000, 3000);

 FUNC_3(&VAR_4->data_mutex);

 VAR_6 = FUNC_6(VAR_5, VAR_2->fd.command_base_addr, VAR_0);
 if (VAR_6 < 0)
  goto unlock;

 FUNC_1(&VAR_4->cmd_done);

 VAR_4->is_busy = 1;
 VAR_4->timeout = VAR_1 + FUNC_2(100);

 FUNC_5(VAR_4->workqueue, &VAR_4->work, 0);

unlock:
 FUNC_4(&VAR_4->data_mutex);

 return VAR_6;
}
