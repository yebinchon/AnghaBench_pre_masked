
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {int max_cnt; } ;
struct ocrdma_srq {int bit_fields_len; int idx_bit_fields; int rqe_wr_id_tbl; TYPE_3__ rq; scalar_t__ db; struct ocrdma_pd* pd; int q_lock; } ;
struct ocrdma_pd {int id; } ;
struct TYPE_6__ {int db_page_size; scalar_t__ db; } ;
struct TYPE_5__ {scalar_t__ max_recv_sge; scalar_t__ max_rqe; } ;
struct ocrdma_dev {TYPE_2__ nic_info; TYPE_1__ attr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_8__ {scalar_t__ max_sge; scalar_t__ max_wr; scalar_t__ srq_limit; } ;
struct ib_srq_init_attr {TYPE_4__ attr; } ;
struct ib_srq {int device; int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocrdma_dev* FUNC_0 (int ) ;
 struct ocrdma_pd* FUNC_1 (int ) ;
 struct ocrdma_srq* FUNC_2 (struct ib_srq*) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct ocrdma_dev*,struct ocrdma_srq*,struct ib_udata*) ;
 int FUNC_8 (struct ocrdma_dev*,struct ocrdma_srq*,struct ib_srq_init_attr*,struct ocrdma_pd*) ;
 int FUNC_9 (struct ocrdma_dev*,struct ocrdma_srq*) ;
 int FUNC_10 (struct ocrdma_srq*,TYPE_4__*) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct ib_srq *VAR_3, struct ib_srq_init_attr *VAR_4,
        struct ib_udata *VAR_5)
{
 int VAR_6;
 struct ocrdma_pd *VAR_7 = FUNC_1(VAR_3->pd);
 struct ocrdma_dev *VAR_8 = FUNC_0(VAR_3->device);
 struct ocrdma_srq *VAR_9 = FUNC_2(VAR_3);

 if (VAR_4->attr.max_sge > VAR_8->attr.max_recv_sge)
  return -VAR_0;
 if (VAR_4->attr.max_wr > VAR_8->attr.max_rqe)
  return -VAR_0;

 FUNC_11(&VAR_9->q_lock);
 VAR_9->pd = VAR_7;
 VAR_9->db = VAR_8->nic_info.db + (VAR_7->id * VAR_8->nic_info.db_page_size);
 VAR_6 = FUNC_8(VAR_8, VAR_9, VAR_4, VAR_7);
 if (VAR_6)
  return VAR_6;

 if (!VAR_5) {
  VAR_9->rqe_wr_id_tbl = FUNC_3(VAR_9->rq.max_cnt, sizeof(u64),
          VAR_2);
  if (!VAR_9->rqe_wr_id_tbl) {
   VAR_6 = -VAR_1;
   goto arm_err;
  }

  VAR_9->bit_fields_len = (VAR_9->rq.max_cnt / 32) +
      (VAR_9->rq.max_cnt % 32 ? 1 : 0);
  VAR_9->idx_bit_fields =
      FUNC_5(VAR_9->bit_fields_len, sizeof(u32),
      VAR_2);
  if (!VAR_9->idx_bit_fields) {
   VAR_6 = -VAR_1;
   goto arm_err;
  }
  FUNC_6(VAR_9->idx_bit_fields, 0xff,
         VAR_9->bit_fields_len * sizeof(u32));
 }

 if (VAR_4->attr.srq_limit) {
  VAR_6 = FUNC_10(VAR_9, &VAR_4->attr);
  if (VAR_6)
   goto arm_err;
 }

 if (VAR_5) {
  VAR_6 = FUNC_7(VAR_8, VAR_9, VAR_5);
  if (VAR_6)
   goto arm_err;
 }

 return 0;

arm_err:
 FUNC_9(VAR_8, VAR_9);
 FUNC_4(VAR_9->rqe_wr_id_tbl);
 FUNC_4(VAR_9->idx_bit_fields);
 return VAR_6;
}
