
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mv_cesa_tdma_desc {scalar_t__ flags; int cur_dma; struct mv_cesa_tdma_desc* next; int src; struct mv_cesa_tdma_desc* op; } ;
struct TYPE_5__ {int * last; struct mv_cesa_tdma_desc* first; } ;
struct mv_cesa_req {TYPE_2__ chain; } ;
struct TYPE_6__ {TYPE_1__* dma; } ;
struct TYPE_4__ {int tdma_desc_pool; int op_pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,struct mv_cesa_tdma_desc*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mv_cesa_req *VAR_3)
{
 struct mv_cesa_tdma_desc *VAR_4;

 for (VAR_4 = VAR_3->chain.first; VAR_4;) {
  struct mv_cesa_tdma_desc *VAR_5 = VAR_4;
  u32 VAR_6 = VAR_4->flags & VAR_1;

  if (VAR_6 == VAR_0)
   FUNC_0(VAR_2->dma->op_pool, VAR_4->op,
          FUNC_1(VAR_4->src));

  VAR_4 = VAR_4->next;
  FUNC_0(VAR_2->dma->tdma_desc_pool, VAR_5,
         VAR_5->cur_dma);
 }

 VAR_3->chain.first = ((void*)0);
 VAR_3->chain.last = ((void*)0);
}
