
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kwq; } ;
struct rvt_srq {TYPE_1__ rq; TYPE_2__* ip; } ;
struct rvt_dev_info {int n_srqs_lock; int n_srqs_allocated; } ;
struct ib_udata {int dummy; } ;
struct ib_srq {int device; } ;
struct TYPE_4__ {int ref; } ;


 struct rvt_dev_info* FUNC_0 (int ) ;
 struct rvt_srq* FUNC_1 (struct ib_srq*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ib_srq *VAR_1, struct ib_udata *VAR_2)
{
 struct rvt_srq *VAR_3 = FUNC_1(VAR_1);
 struct rvt_dev_info *VAR_4 = FUNC_0(VAR_1->device);

 FUNC_4(&VAR_4->n_srqs_lock);
 VAR_4->n_srqs_allocated--;
 FUNC_5(&VAR_4->n_srqs_lock);
 if (VAR_3->ip)
  FUNC_2(&VAR_3->ip->ref, VAR_0);
 FUNC_3(VAR_3->rq.kwq);
}
