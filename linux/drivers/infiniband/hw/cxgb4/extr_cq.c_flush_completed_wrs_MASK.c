
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flush_cidx; int cidx; int pidx; int size; struct t4_swsqe* sw_sq; } ;
struct t4_wq {TYPE_2__ sq; } ;
struct TYPE_3__ {int header; } ;
struct t4_swsqe {int flushed; TYPE_1__ cqe; scalar_t__ complete; int signaled; } ;
struct t4_cq {size_t sw_pidx; TYPE_1__* sw_queue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,size_t) ;
 int FUNC_3 (struct t4_cq*) ;

__attribute__((used)) static void FUNC_4(struct t4_wq *VAR_0, struct t4_cq *VAR_1)
{
 struct t4_swsqe *VAR_2;
 int VAR_3;

 if (VAR_0->sq.flush_cidx == -1)
  VAR_0->sq.flush_cidx = VAR_0->sq.cidx;
 VAR_3 = VAR_0->sq.flush_cidx;

 while (VAR_3 != VAR_0->sq.pidx) {
  VAR_2 = &VAR_0->sq.sw_sq[VAR_3];
  if (!VAR_2->signaled) {
   if (++VAR_3 == VAR_0->sq.size)
    VAR_3 = 0;
  } else if (VAR_2->complete) {




   FUNC_2("moving cqe into swcq sq idx %u cq idx %u\n",
     VAR_3, VAR_1->sw_pidx);
   VAR_2->cqe.header |= FUNC_1(FUNC_0(1));
   VAR_1->sw_queue[VAR_1->sw_pidx] = VAR_2->cqe;
   FUNC_3(VAR_1);
   VAR_2->flushed = 1;
   if (++VAR_3 == VAR_0->sq.size)
    VAR_3 = 0;
   VAR_0->sq.flush_cidx = VAR_3;
  } else
   break;
 }
}
