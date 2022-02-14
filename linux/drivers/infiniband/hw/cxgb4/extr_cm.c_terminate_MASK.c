
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cpl_rdma_terminate {int dummy; } ;
struct c4iw_qp_attributes {int next_state; } ;
struct TYPE_7__ {TYPE_4__* qp; } ;
struct c4iw_ep {TYPE_3__ com; } ;
struct c4iw_dev {int dummy; } ;
struct TYPE_5__ {int qid; } ;
struct TYPE_6__ {TYPE_1__ sq; } ;
struct TYPE_8__ {int rhp; TYPE_2__ wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_rdma_terminate*) ;
 int FUNC_1 (int ,TYPE_4__*,int ,struct c4iw_qp_attributes*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 struct cpl_rdma_terminate* FUNC_3 (struct sk_buff*) ;
 struct c4iw_ep* FUNC_4 (struct c4iw_dev*,unsigned int) ;
 int FUNC_5 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_6(struct c4iw_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct cpl_rdma_terminate *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5 = FUNC_0(VAR_4);
 struct c4iw_ep *VAR_6;
 struct c4iw_qp_attributes VAR_7;

 VAR_6 = FUNC_4(VAR_2, VAR_5);

 if (VAR_6) {
  if (VAR_6->com.qp) {
   FUNC_5("TERM received tid %u qpid %u\n", VAR_5,
    VAR_6->com.qp->wq.sq.qid);
   VAR_7.next_state = VAR_1;
   FUNC_1(VAR_6->com.qp->rhp, VAR_6->com.qp,
           VAR_0, &VAR_7, 1);
  }

  FUNC_2(&VAR_6->com);
 } else
  FUNC_5("TERM received tid %u no ep/qp\n", VAR_5);

 return 0;
}
