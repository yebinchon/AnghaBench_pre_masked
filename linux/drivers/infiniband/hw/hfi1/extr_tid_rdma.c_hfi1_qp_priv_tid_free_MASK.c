
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct rvt_swqe {struct hfi1_ack_priv* priv; } ;
struct TYPE_4__ {scalar_t__ qp_type; } ;
struct rvt_qp {size_t s_size; TYPE_2__* s_ack_queue; TYPE_1__ ibqp; struct hfi1_qp_priv* priv; } ;
struct rvt_dev_info {int dummy; } ;
struct TYPE_6__ {int opfn_work; } ;
struct hfi1_qp_priv {struct hfi1_ack_priv* pages; TYPE_3__ opfn; } ;
struct hfi1_ack_priv {int tid_req; } ;
struct TYPE_5__ {struct hfi1_ack_priv* priv; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_ack_priv*) ;
 struct rvt_swqe* FUNC_4 (struct rvt_qp*,size_t) ;
 size_t FUNC_5 (struct rvt_dev_info*) ;

void FUNC_6(struct rvt_dev_info *VAR_2, struct rvt_qp *VAR_3)
{
 struct hfi1_qp_priv *VAR_4 = VAR_3->priv;
 struct rvt_swqe *VAR_5;
 u32 VAR_6;

 if (VAR_3->ibqp.qp_type == VAR_0 && FUNC_0(VAR_1)) {
  for (VAR_6 = 0; VAR_6 < VAR_3->s_size; VAR_6++) {
   VAR_5 = FUNC_4(VAR_3, VAR_6);
   FUNC_3(VAR_5->priv);
   VAR_5->priv = ((void*)0);
  }
  for (VAR_6 = 0; VAR_6 < FUNC_5(VAR_2); VAR_6++) {
   struct hfi1_ack_priv *VAR_7 = VAR_3->s_ack_queue[VAR_6].priv;

   if (VAR_7)
    FUNC_2(&VAR_7->tid_req);
   FUNC_3(VAR_7);
   VAR_3->s_ack_queue[VAR_6].priv = ((void*)0);
  }
  FUNC_1(&VAR_4->opfn.opfn_work);
  FUNC_3(VAR_4->pages);
  VAR_4->pages = ((void*)0);
 }
}
