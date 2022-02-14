
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned long max_depth; } ;
struct TYPE_6__ {int wait; } ;
struct iolatency_grp {TYPE_2__ rq_depth; TYPE_1__ rq_wait; TYPE_5__* blkiolat; } ;
struct TYPE_9__ {TYPE_3__* q; } ;
struct TYPE_10__ {TYPE_4__ rqos; } ;
struct TYPE_8__ {unsigned long nr_requests; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct iolatency_grp*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (unsigned long,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct iolatency_grp *VAR_0, bool VAR_1)
{
 unsigned long VAR_2 = VAR_0->blkiolat->rqos.q->nr_requests;
 unsigned long VAR_3 = FUNC_4(VAR_2, VAR_1);
 unsigned long VAR_4 = VAR_0->rq_depth.max_depth;

 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;

 if (VAR_1) {
  if (VAR_4 == 1 && FUNC_0(FUNC_1(VAR_0)))
   return;

  if (VAR_4 < VAR_2) {
   VAR_4 += VAR_3;
   VAR_4 = FUNC_3(VAR_4, VAR_2);
   VAR_0->rq_depth.max_depth = VAR_4;
   FUNC_5(&VAR_0->rq_wait.wait);
  }
 } else {
  VAR_4 >>= 1;
  VAR_0->rq_depth.max_depth = FUNC_2(VAR_4, 1UL);
 }
}
