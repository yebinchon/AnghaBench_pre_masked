
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_qp_init_attr {TYPE_2__* xrcd; int qp_context; int event_handler; } ;
struct ib_qp {TYPE_1__* device; int open_list; TYPE_2__* xrcd; int * srq; int * recv_cq; int send_cq; int * pd; struct ib_qp* qp_context; int event_handler; } ;
struct TYPE_4__ {int usecnt; } ;
struct TYPE_3__ {int (* destroy_qp ) (struct ib_qp*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (TYPE_2__*,struct ib_qp*) ;
 struct ib_qp* FUNC_3 (struct ib_qp*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_qp*) ;

__attribute__((used)) static struct ib_qp *FUNC_6(struct ib_qp *VAR_1,
  struct ib_qp_init_attr *VAR_2)
{
 struct ib_qp *VAR_3 = VAR_1;

 VAR_1->event_handler = VAR_0;
 VAR_1->qp_context = VAR_1;
 VAR_1->pd = ((void*)0);
 VAR_1->send_cq = *(VAR_1->recv_cq = ((void*)0));
 VAR_1->srq = ((void*)0);
 VAR_1->xrcd = VAR_2->xrcd;
 FUNC_4(&VAR_2->xrcd->usecnt);
 FUNC_0(&VAR_1->open_list);

 VAR_1 = FUNC_3(VAR_3, VAR_2->event_handler,
     VAR_2->qp_context);
 if (!FUNC_1(VAR_1))
  FUNC_2(VAR_2->xrcd, VAR_3);
 else
  VAR_3->device->destroy_qp(VAR_3);
 return VAR_1;
}
