
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_user_sdma_pkt_q {int comps; int txreq_cache; struct hfi1_user_sdma_pkt_q* req_in_use; struct hfi1_user_sdma_pkt_q* reqs; int n_reqs; int wait; int busy; scalar_t__ handler; } ;
struct hfi1_filedata {struct hfi1_user_sdma_pkt_q* cq; struct hfi1_user_sdma_pkt_q* pq; int subctxt; } ;
struct hfi1_ctxtdata {int ctxt; int dd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_user_sdma_pkt_q*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

int FUNC_8(struct hfi1_filedata *VAR_0,
          struct hfi1_ctxtdata *VAR_1)
{
 struct hfi1_user_sdma_pkt_q *VAR_2;

 FUNC_5(VAR_1->dd, VAR_1->ctxt, VAR_0->subctxt);

 VAR_2 = VAR_0->pq;
 if (VAR_2) {
  if (VAR_2->handler)
   FUNC_1(VAR_2->handler);
  FUNC_2(&VAR_2->busy);

  FUNC_7(
   VAR_2->wait,
   !FUNC_0(&VAR_2->n_reqs));
  FUNC_3(VAR_2->reqs);
  FUNC_3(VAR_2->req_in_use);
  FUNC_4(VAR_2->txreq_cache);
  FUNC_3(VAR_2);
  VAR_0->pq = ((void*)0);
 }
 if (VAR_0->cq) {
  FUNC_6(VAR_0->cq->comps);
  FUNC_3(VAR_0->cq);
  VAR_0->cq = ((void*)0);
 }
 return 0;
}
