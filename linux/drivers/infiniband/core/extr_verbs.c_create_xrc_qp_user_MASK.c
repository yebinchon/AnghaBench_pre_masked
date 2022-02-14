
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_qp_init_attr {TYPE_1__* xrcd; int qp_context; int event_handler; } ;
struct ib_qp {int open_list; TYPE_1__* xrcd; int * srq; int * recv_cq; int send_cq; int * pd; struct ib_qp* qp_context; int event_handler; } ;
struct TYPE_2__ {int usecnt; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (TYPE_1__*,struct ib_qp*) ;
 struct ib_qp* FUNC_3 (struct ib_qp*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct ib_qp *FUNC_5(struct ib_qp *VAR_1,
     struct ib_qp_init_attr *VAR_2,
     struct ib_udata *VAR_3)
{
 struct ib_qp *VAR_4 = VAR_1;

 VAR_1->event_handler = VAR_0;
 VAR_1->qp_context = VAR_1;
 VAR_1->pd = ((void*)0);
 VAR_1->send_cq = *(VAR_1->recv_cq = ((void*)0));
 VAR_1->srq = ((void*)0);
 VAR_1->xrcd = VAR_2->xrcd;
 FUNC_4(&VAR_2->xrcd->usecnt);
 FUNC_0(&VAR_1->open_list);

 VAR_1 = FUNC_3(VAR_4, VAR_2->event_handler,
     VAR_2->qp_context);
 if (FUNC_1(VAR_1))
  return VAR_1;

 FUNC_2(VAR_2->xrcd, VAR_4);
 return VAR_1;
}
