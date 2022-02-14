
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; } ;
struct ib_qp {int qp_type; scalar_t__ uobject; int device; } ;
struct TYPE_10__ {scalar_t__ virt_addr; } ;
struct TYPE_9__ {int head; } ;
struct TYPE_8__ {scalar_t__ virt_addr; } ;
struct TYPE_7__ {int head; } ;
struct hns_roce_qp {int sdb_en; int rdb_en; int mutex; TYPE_4__ rdb; TYPE_3__ rq; TYPE_2__ sdb; TYPE_1__ sq; scalar_t__ state; } ;
struct TYPE_11__ {scalar_t__ min_wqes; } ;
struct hns_roce_dev {TYPE_6__* hw; int ib_dev; TYPE_5__ caps; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_12__ {int (* modify_qp ) (struct ib_qp*,struct ib_qp_attr*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ib_qp*,struct ib_qp_attr*,int,int,int) ;
 struct hns_roce_dev* FUNC_7 (int ) ;
 struct hns_roce_qp* FUNC_8 (struct ib_qp*) ;

int FUNC_9(struct ib_qp *VAR_6, struct ib_qp_attr *VAR_7,
         int VAR_8, struct ib_udata *VAR_9)
{
 struct hns_roce_dev *VAR_10 = FUNC_7(VAR_6->device);
 struct hns_roce_qp *VAR_11 = FUNC_8(VAR_6);
 enum ib_qp_state VAR_12, VAR_13;
 int VAR_14 = -VAR_0;

 FUNC_4(&VAR_11->mutex);

 VAR_12 = VAR_8 & VAR_4 ?
      VAR_7->cur_qp_state : (enum ib_qp_state)VAR_11->state;
 VAR_13 = VAR_8 & VAR_5 ? VAR_7->qp_state : VAR_12;

 if (VAR_6->uobject &&
     (VAR_8 & VAR_5) && VAR_13 == VAR_2) {
  if (VAR_11->sdb_en == 1) {
   VAR_11->sq.head = *(int *)(VAR_11->sdb.virt_addr);

   if (VAR_11->rdb_en == 1)
    VAR_11->rq.head = *(int *)(VAR_11->rdb.virt_addr);
  } else {
   FUNC_3(&VAR_10->ib_dev,
      "flush cqe is not supported in userspace!\n");
   goto out;
  }
 }

 if (!FUNC_1(VAR_12, VAR_13, VAR_6->qp_type,
    VAR_8)) {
  FUNC_2(&VAR_10->ib_dev, "ib_modify_qp_is_ok failed\n");
  goto out;
 }

 VAR_14 = FUNC_0(VAR_6, VAR_7, VAR_8);
 if (VAR_14)
  goto out;

 if (VAR_12 == VAR_13 && VAR_12 == VAR_3) {
  if (VAR_10->caps.min_wqes) {
   VAR_14 = -VAR_1;
   FUNC_2(&VAR_10->ib_dev,
    "cur_state=%d new_state=%d\n", VAR_12,
    VAR_13);
  } else {
   VAR_14 = 0;
  }

  goto out;
 }

 VAR_14 = VAR_10->hw->modify_qp(VAR_6, VAR_7, VAR_8, VAR_12,
        VAR_13);

out:
 FUNC_5(&VAR_11->mutex);

 return VAR_14;
}
