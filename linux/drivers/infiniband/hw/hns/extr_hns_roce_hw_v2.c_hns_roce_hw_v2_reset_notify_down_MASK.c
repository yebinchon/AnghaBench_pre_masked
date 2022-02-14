
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port_num; } ;
struct ib_event {TYPE_2__ element; int * device; int event; } ;
struct hns_roce_dev {int is_reset; int active; int dis_db; int ib_dev; } ;
struct TYPE_3__ {scalar_t__ instance_state; int state; int reset_state; } ;
struct hnae3_handle {scalar_t__ priv; TYPE_1__ rinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ib_event*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_4)
{
 struct hns_roce_dev *VAR_5;
 struct ib_event VAR_6;

 if (VAR_4->rinfo.instance_state != VAR_1) {
  FUNC_2(VAR_0, &VAR_4->rinfo.state);
  return 0;
 }

 VAR_4->rinfo.reset_state = VAR_2;
 FUNC_0(VAR_0, &VAR_4->rinfo.state);

 VAR_5 = (struct hns_roce_dev *)VAR_4->priv;
 if (!VAR_5)
  return 0;

 VAR_5->is_reset = 1;
 VAR_5->active = 0;
 VAR_5->dis_db = 1;

 VAR_6.event = VAR_3;
 VAR_6.device = &VAR_5->ib_dev;
 VAR_6.element.port_num = 1;
 FUNC_1(&VAR_6);

 return 0;
}
