
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int len; scalar_t__ pa; } ;
struct ocrdma_srq {int rqe_wr_id_tbl; int idx_bit_fields; TYPE_2__ rq; TYPE_1__* pd; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_srq {int device; } ;
struct TYPE_3__ {scalar_t__ uctx; } ;


 int FUNC_0 (int ) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 struct ocrdma_srq* FUNC_2 (struct ib_srq*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct ocrdma_dev*,struct ocrdma_srq*) ;

void FUNC_6(struct ib_srq *VAR_0, struct ib_udata *VAR_1)
{
 struct ocrdma_srq *VAR_2;
 struct ocrdma_dev *VAR_3 = FUNC_1(VAR_0->device);

 VAR_2 = FUNC_2(VAR_0);

 FUNC_5(VAR_3, VAR_2);

 if (VAR_2->pd->uctx)
  FUNC_4(VAR_2->pd->uctx, (u64) VAR_2->rq.pa,
    FUNC_0(VAR_2->rq.len));

 FUNC_3(VAR_2->idx_bit_fields);
 FUNC_3(VAR_2->rqe_wr_id_tbl);
}
