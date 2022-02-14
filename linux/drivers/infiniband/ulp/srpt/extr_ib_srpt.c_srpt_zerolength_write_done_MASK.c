
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srpt_rdma_ch {TYPE_1__* qp; int sess_name; int release_work; } ;
struct ib_wc {int status; } ;
struct ib_cq {struct srpt_rdma_ch* cq_context; } ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct srpt_rdma_ch*) ;
 scalar_t__ FUNC_3 (struct srpt_rdma_ch*,int ) ;

__attribute__((used)) static void FUNC_4(struct ib_cq *VAR_2, struct ib_wc *VAR_3)
{
 struct srpt_rdma_ch *VAR_4 = VAR_2->cq_context;

 FUNC_0("%s-%d wc->status %d\n", VAR_4->sess_name, VAR_4->qp->qp_num,
   VAR_3->status);

 if (VAR_3->status == VAR_1) {
  FUNC_2(VAR_4);
 } else {
  if (FUNC_3(VAR_4, VAR_0))
   FUNC_1(&VAR_4->release_work);
  else
   FUNC_0("%s-%d: already disconnected.\n",
     VAR_4->sess_name, VAR_4->qp->qp_num);
 }
}
