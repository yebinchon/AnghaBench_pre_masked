
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct ib_udata {int outlen; } ;
struct TYPE_13__ {int cq; } ;
struct TYPE_10__ {scalar_t__ max_wr; scalar_t__ max_sge; } ;
struct ib_srq_init_attr {TYPE_5__ ext; int srq_type; TYPE_2__ attr; } ;
struct ib_srq {int pd; int device; } ;
struct TYPE_16__ {int mtt_type; } ;
struct TYPE_11__ {int mtt_type; } ;
struct TYPE_12__ {int entry_sz; int buf_size; TYPE_3__ mtt; } ;
struct hns_roce_srq {int max; int max_gs; int srqn; int event; TYPE_8__ mtt; scalar_t__ db_reg_l; TYPE_4__ idx_que; int wqe_shift; int lock; int mutex; } ;
struct hns_roce_ib_create_srq_resp {int srqn; } ;
struct TYPE_9__ {scalar_t__ max_srq_wrs; scalar_t__ max_srq_sges; } ;
struct hns_roce_dev {scalar_t__ reg_base; int dev; TYPE_1__ caps; } ;
typedef int resp ;
struct TYPE_15__ {int cqn; } ;
struct TYPE_14__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct hns_roce_srq*,int) ;
 int FUNC_1 (struct hns_roce_srq*,struct ib_udata*,int) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_srq*,int) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_srq*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_6 ;
 int FUNC_5 (struct hns_roce_dev*,int ,int ,int ,TYPE_8__*,int ,struct hns_roce_srq*) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_srq*) ;
 scalar_t__ FUNC_7 (struct ib_udata*,struct hns_roce_ib_create_srq_resp*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *) ;
 TYPE_7__* FUNC_15 (int ) ;
 struct hns_roce_dev* FUNC_16 (int ) ;
 TYPE_6__* FUNC_17 (int ) ;
 struct hns_roce_srq* FUNC_18 (struct ib_srq*) ;

int FUNC_19(struct ib_srq *VAR_7,
   struct ib_srq_init_attr *VAR_8,
   struct ib_udata *VAR_9)
{
 struct hns_roce_dev *VAR_10 = FUNC_16(VAR_7->device);
 struct hns_roce_ib_create_srq_resp VAR_11 = {};
 struct hns_roce_srq *VAR_12 = FUNC_18(VAR_7);
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 u32 VAR_16;


 if (VAR_8->attr.max_wr >= VAR_10->caps.max_srq_wrs ||
     VAR_8->attr.max_sge > VAR_10->caps.max_srq_sges)
  return -VAR_1;

 FUNC_12(&VAR_12->mutex);
 FUNC_14(&VAR_12->lock);

 VAR_12->max = FUNC_13(VAR_8->attr.max_wr + 1);
 VAR_12->max_gs = VAR_8->attr.max_sge;

 VAR_13 = FUNC_10(16, 16 * VAR_12->max_gs);

 VAR_12->wqe_shift = FUNC_9(VAR_13);

 VAR_14 = VAR_12->max * VAR_13;

 VAR_12->idx_que.entry_sz = VAR_2;
 VAR_12->idx_que.buf_size = VAR_12->max * VAR_12->idx_que.entry_sz;
 VAR_12->mtt.mtt_type = VAR_4;
 VAR_12->idx_que.mtt.mtt_type = VAR_3;

 if (VAR_9) {
  VAR_15 = FUNC_1(VAR_12, VAR_9, VAR_14);
  if (VAR_15) {
   FUNC_4(VAR_10->dev, "Create user srq failed\n");
   goto err_srq;
  }
 } else {
  VAR_15 = FUNC_0(VAR_12, VAR_14);
  if (VAR_15) {
   FUNC_4(VAR_10->dev, "Create kernel srq failed\n");
   goto err_srq;
  }
 }

 VAR_16 = FUNC_8(VAR_8->srq_type) ?
       FUNC_15(VAR_8->ext.cq)->cqn : 0;

 VAR_12->db_reg_l = VAR_10->reg_base + VAR_5;

 VAR_15 = FUNC_5(VAR_10, FUNC_17(VAR_7->pd)->pdn, VAR_16, 0,
     &VAR_12->mtt, 0, VAR_12);
 if (VAR_15)
  goto err_wrid;

 VAR_12->event = VAR_6;
 VAR_11.srqn = VAR_12->srqn;

 if (VAR_9) {
  if (FUNC_7(VAR_9, &VAR_11,
         FUNC_11(VAR_9->outlen, sizeof(VAR_11)))) {
   VAR_15 = -VAR_0;
   goto err_srqc_alloc;
  }
 }

 return 0;

err_srqc_alloc:
 FUNC_6(VAR_10, VAR_12);

err_wrid:
 if (VAR_9)
  FUNC_3(VAR_10, VAR_12);
 else
  FUNC_2(VAR_10, VAR_12, VAR_14);

err_srq:
 return VAR_15;
}
