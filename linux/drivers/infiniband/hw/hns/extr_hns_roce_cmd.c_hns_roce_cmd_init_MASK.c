
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pool; int max_cmds; scalar_t__ use_events; int poll_sem; int hcr_mutex; } ;
struct hns_roce_dev {TYPE_1__ cmd; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct device*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct hns_roce_dev *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;

 FUNC_1(&VAR_3->cmd.hcr_mutex);
 FUNC_2(&VAR_3->cmd.poll_sem, 1);
 VAR_3->cmd.use_events = 0;
 VAR_3->cmd.max_cmds = VAR_0;
 VAR_3->cmd.pool = FUNC_0("hns_roce_cmd", VAR_4,
        VAR_2,
        VAR_2, 0);
 if (!VAR_3->cmd.pool)
  return -VAR_1;

 return 0;
}
