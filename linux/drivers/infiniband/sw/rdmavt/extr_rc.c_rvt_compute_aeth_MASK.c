
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ size; TYPE_3__* kwq; TYPE_2__* wq; } ;
struct TYPE_5__ {scalar_t__ srq; } ;
struct rvt_qp {scalar_t__ r_msn; TYPE_4__ r_rq; scalar_t__ ip; TYPE_1__ ibqp; } ;
typedef int __be32 ;
struct TYPE_7__ {int tail; int head; int count; } ;
struct TYPE_6__ {int tail; int head; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__* VAR_3 ;

__be32 FUNC_3(struct rvt_qp *VAR_4)
{
 u32 VAR_5 = VAR_4->r_msn & VAR_2;

 if (VAR_4->ibqp.srq) {




  VAR_5 |= VAR_0 << VAR_1;
 } else {
  u32 VAR_6, VAR_7, VAR_8;
  u32 VAR_9;
  u32 VAR_10;
  u32 VAR_11;

  VAR_9 = FUNC_1(VAR_4->r_rq.kwq->count);
  if (VAR_9 == 0) {

   if (VAR_4->ip) {
    VAR_10 = FUNC_0(VAR_4->r_rq.wq->head);
    VAR_11 = FUNC_0(VAR_4->r_rq.wq->tail);
   } else {
    VAR_10 = FUNC_1(VAR_4->r_rq.kwq->head);
    VAR_11 = FUNC_1(VAR_4->r_rq.kwq->tail);
   }
   if (VAR_10 >= VAR_4->r_rq.size)
    VAR_10 = 0;
   if (VAR_11 >= VAR_4->r_rq.size)
    VAR_11 = 0;






   VAR_9 = VAR_10 - VAR_11;
   if ((int)VAR_9 < 0)
    VAR_9 += VAR_4->r_rq.size;
  }




  VAR_6 = 0;
  VAR_7 = 31;
  for (;;) {
   VAR_8 = (VAR_6 + VAR_7) / 2;
   if (VAR_3[VAR_8] == VAR_9)
    break;
   if (VAR_3[VAR_8] > VAR_9) {
    VAR_7 = VAR_8;
   } else {
    if (VAR_6 == VAR_8)
     break;
    VAR_6 = VAR_8;
   }
  }
  VAR_5 |= VAR_8 << VAR_1;
 }
 return FUNC_2(VAR_5);
}
