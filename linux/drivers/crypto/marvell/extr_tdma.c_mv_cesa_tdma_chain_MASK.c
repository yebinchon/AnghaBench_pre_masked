
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mv_cesa_tdma_desc {int flags; int next_dma; TYPE_2__* next; } ;
struct TYPE_6__ {TYPE_2__* first; struct mv_cesa_tdma_desc* last; } ;
struct mv_cesa_req {TYPE_3__ chain; } ;
struct TYPE_4__ {struct mv_cesa_tdma_desc* last; TYPE_2__* first; } ;
struct mv_cesa_engine {TYPE_1__ chain; } ;
struct TYPE_5__ {int flags; int cur_dma; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct mv_cesa_engine *VAR_2,
   struct mv_cesa_req *VAR_3)
{
 if (VAR_2->chain.first == ((void*)0) && VAR_2->chain.last == ((void*)0)) {
  VAR_2->chain.first = VAR_3->chain.first;
  VAR_2->chain.last = VAR_3->chain.last;
 } else {
  struct mv_cesa_tdma_desc *VAR_4;

  VAR_4 = VAR_2->chain.last;
  VAR_4->next = VAR_3->chain.first;
  VAR_2->chain.last = VAR_3->chain.last;







  if (!(VAR_4->flags & VAR_0) &&
      !(VAR_3->chain.first->flags & VAR_1))
   VAR_4->next_dma = VAR_3->chain.first->cur_dma;
 }
}
