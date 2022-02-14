
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_qp_security {int shared_qp_list; TYPE_1__* qp; } ;
struct ib_qp {TYPE_2__* qp_sec; } ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_3__ {struct ib_qp* real_qp; } ;


 int FUNC_0 (struct ib_qp_security*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ib_qp_security *VAR_0)
{
 struct ib_qp *VAR_1 = VAR_0->qp->real_qp;

 FUNC_2(&VAR_1->qp_sec->mutex);
 FUNC_1(&VAR_0->shared_qp_list);
 FUNC_3(&VAR_1->qp_sec->mutex);

 FUNC_0(VAR_0);
}
