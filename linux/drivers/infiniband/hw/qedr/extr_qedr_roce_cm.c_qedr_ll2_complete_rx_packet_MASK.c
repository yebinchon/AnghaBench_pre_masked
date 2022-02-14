
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


typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {size_t gsi_cons; } ;
struct qedr_qp {int q_lock; TYPE_6__ rq; TYPE_4__* rqe_wr_id; } ;
struct qedr_dev {struct qedr_qp* gsi_qp; struct qedr_cq* gsi_rqcq; } ;
struct TYPE_11__ {int cq_context; int (* comp_handler ) (TYPE_5__*,int ) ;} ;
struct qedr_cq {TYPE_5__ ibcq; } ;
struct TYPE_9__ {int data_length; } ;
struct TYPE_7__ {scalar_t__ data_length_error; } ;
struct qed_ll2_comp_rx_data {scalar_t__ opaque_data_1; int opaque_data_0; TYPE_3__ length; int vlan; TYPE_1__ u; } ;
struct TYPE_10__ {int * smac; TYPE_2__* sg_list; int vlan; int rc; } ;
struct TYPE_8__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_1,
     struct qed_ll2_comp_rx_data *VAR_2)
{
 struct qedr_dev *VAR_3 = (struct qedr_dev *)VAR_1;
 struct qedr_cq *VAR_4 = VAR_3->gsi_rqcq;
 struct qedr_qp *VAR_5 = VAR_3->gsi_qp;
 unsigned long VAR_6;

 FUNC_3(&VAR_5->q_lock, VAR_6);

 VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].rc = VAR_2->u.data_length_error ?
  -VAR_0 : 0;
 VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].vlan = VAR_2->vlan;

 VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].sg_list[0].length =
  VAR_2->length.data_length;
 *((u32 *)&VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].smac[0]) =
  FUNC_0(VAR_2->opaque_data_0);
 *((u16 *)&VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].smac[4]) =
  FUNC_1((u16)VAR_2->opaque_data_1);

 FUNC_2(&VAR_5->rq);

 FUNC_4(&VAR_5->q_lock, VAR_6);

 if (VAR_4->ibcq.comp_handler)
  (*VAR_4->ibcq.comp_handler) (&VAR_4->ibcq, VAR_4->ibcq.cq_context);
}
