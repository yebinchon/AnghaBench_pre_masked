
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int recv_cq; } ;
struct c4iw_qp {int lock; int wq; TYPE_1__ ibqp; } ;
struct c4iw_cq {int lock; int cq; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 struct c4iw_cq* FUNC_5 (int ) ;

void FUNC_6(struct c4iw_qp *VAR_0, u32 VAR_1)
{
 struct c4iw_cq *VAR_2 = FUNC_5(VAR_0->ibqp.recv_cq);
 unsigned long VAR_3;


 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_0->lock);


 FUNC_0(&VAR_0->wq, &VAR_2->cq, VAR_1);

 FUNC_3(&VAR_0->lock);
 FUNC_4(&VAR_2->lock, VAR_3);
}
