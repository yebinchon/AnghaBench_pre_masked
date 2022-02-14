
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int max_wqe_idx; } ;
struct ocrdma_srq {TYPE_3__ rq; int q_lock; int * rqe_wr_id_tbl; } ;
struct TYPE_5__ {int srq; } ;
struct ocrdma_qp {TYPE_2__ ibqp; } ;
struct TYPE_4__ {int buftag_qpn; } ;
struct ocrdma_cqe {TYPE_1__ rq; } ;
struct ib_wc {int wr_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ocrdma_srq* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct ocrdma_srq*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ib_wc *VAR_1,
           struct ocrdma_cqe *VAR_2,
           struct ocrdma_qp *VAR_3)
{
 unsigned long VAR_4;
 struct ocrdma_srq *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_3->ibqp.srq);
 VAR_6 = (FUNC_2(VAR_2->rq.buftag_qpn) >>
  VAR_0) & VAR_5->rq.max_wqe_idx;
 FUNC_0(VAR_6 < 1);

 VAR_1->wr_id = VAR_5->rqe_wr_id_tbl[VAR_6];
 FUNC_5(&VAR_5->q_lock, VAR_4);
 FUNC_4(VAR_5, VAR_6 - 1);
 FUNC_6(&VAR_5->q_lock, VAR_4);
 FUNC_3(&VAR_5->rq);
}
