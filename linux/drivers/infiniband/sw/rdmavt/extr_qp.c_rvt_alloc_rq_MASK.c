
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rvt_rwq {int dummy; } ;
struct rvt_rq {TYPE_1__* kwq; TYPE_2__* wq; } ;
struct rvt_krwq {int dummy; } ;
struct ib_udata {int dummy; } ;
struct TYPE_5__ {int wq; } ;
struct TYPE_4__ {int c_lock; int p_lock; int wq; int curr_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct rvt_rq*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (scalar_t__,int) ;

int FUNC_5(struct rvt_rq *VAR_2, u32 VAR_3, int VAR_4,
   struct ib_udata *VAR_5)
{
 if (VAR_5) {
  VAR_2->wq = FUNC_3(sizeof(struct rvt_rwq) + VAR_3);
  if (!VAR_2->wq)
   goto bail;

  VAR_2->kwq = FUNC_0(sizeof(*VAR_2->kwq), VAR_1, VAR_4);
  if (!VAR_2->kwq)
   goto bail;
  VAR_2->kwq->curr_wq = VAR_2->wq->wq;
 } else {

  VAR_2->kwq =
   FUNC_4(sizeof(struct rvt_krwq) + VAR_3, VAR_4);
  if (!VAR_2->kwq)
   goto bail;
  VAR_2->kwq->curr_wq = VAR_2->kwq->wq;
 }

 FUNC_2(&VAR_2->kwq->p_lock);
 FUNC_2(&VAR_2->kwq->c_lock);
 return 0;
bail:
 FUNC_1(VAR_2);
 return -VAR_0;
}
