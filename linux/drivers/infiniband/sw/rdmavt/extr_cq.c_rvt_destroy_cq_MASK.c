
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_dev_info {int n_cqs_lock; int n_cqs_allocated; } ;
struct rvt_cq {int queue; TYPE_1__* ip; int comptask; struct rvt_dev_info* rdi; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int dummy; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (int *) ;
 struct rvt_cq* FUNC_1 (struct ib_cq*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct ib_cq *VAR_1, struct ib_udata *VAR_2)
{
 struct rvt_cq *VAR_3 = FUNC_1(VAR_1);
 struct rvt_dev_info *VAR_4 = VAR_3->rdi;

 FUNC_0(&VAR_3->comptask);
 FUNC_3(&VAR_4->n_cqs_lock);
 VAR_4->n_cqs_allocated--;
 FUNC_4(&VAR_4->n_cqs_lock);
 if (VAR_3->ip)
  FUNC_2(&VAR_3->ip->ref, VAR_0);
 else
  FUNC_5(VAR_3->queue);
}
