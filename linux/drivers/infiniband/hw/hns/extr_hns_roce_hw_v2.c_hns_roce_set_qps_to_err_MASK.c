
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ib_qp_attr {int qp_state; } ;
struct TYPE_10__ {scalar_t__ uobject; } ;
struct TYPE_9__ {scalar_t__ virt_addr; } ;
struct TYPE_8__ {int head; } ;
struct TYPE_7__ {scalar_t__ virt_addr; } ;
struct TYPE_6__ {int head; } ;
struct hns_roce_qp {int sdb_en; int rdb_en; int state; TYPE_5__ ibqp; TYPE_4__ rdb; TYPE_3__ rq; TYPE_2__ sdb; TYPE_1__ sq; } ;
struct hns_roce_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hns_roce_qp* FUNC_0 (struct hns_roce_dev*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_5__*,struct ib_qp_attr*,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hns_roce_dev *VAR_2, u32 VAR_3)
{
 struct hns_roce_qp *VAR_4;
 struct ib_qp_attr VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_2(VAR_2->dev, "no hr_qp can be found!\n");
  return;
 }

 if (VAR_4->ibqp.uobject) {
  if (VAR_4->sdb_en == 1) {
   VAR_4->sq.head = *(int *)(VAR_4->sdb.virt_addr);
   if (VAR_4->rdb_en == 1)
    VAR_4->rq.head = *(int *)(VAR_4->rdb.virt_addr);
  } else {
   FUNC_2(VAR_2->dev, "flush cqe is unsupported in userspace!\n");
   return;
  }
 }

 VAR_6 = VAR_1;
 VAR_5.qp_state = VAR_0;
 VAR_7 = FUNC_3(&VAR_4->ibqp, &VAR_5, VAR_6,
        VAR_4->state, VAR_0);
 if (VAR_7)
  FUNC_1(VAR_2->dev, "failed to modify qp %d to err state.\n",
   VAR_3);
}
