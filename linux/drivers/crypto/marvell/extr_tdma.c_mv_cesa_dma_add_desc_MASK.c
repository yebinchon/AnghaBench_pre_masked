
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv_cesa_tdma_desc {struct mv_cesa_tdma_desc* next; int next_dma; int cur_dma; } ;
struct mv_cesa_tdma_chain {struct mv_cesa_tdma_desc* last; struct mv_cesa_tdma_desc* first; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* dma; } ;
struct TYPE_3__ {int tdma_desc_pool; } ;


 int VAR_0 ;
 struct mv_cesa_tdma_desc* FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ) ;
 struct mv_cesa_tdma_desc* FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static struct mv_cesa_tdma_desc *
FUNC_3(struct mv_cesa_tdma_chain *VAR_2, gfp_t VAR_3)
{
 struct mv_cesa_tdma_desc *VAR_4 = ((void*)0);
 dma_addr_t VAR_5;

 VAR_4 = FUNC_2(VAR_1->dma->tdma_desc_pool, VAR_3,
       &VAR_5);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->cur_dma = VAR_5;
 if (VAR_2->last) {
  VAR_2->last->next_dma = FUNC_1(VAR_5);
  VAR_2->last->next = VAR_4;
 } else {
  VAR_2->first = VAR_4;
 }

 VAR_2->last = VAR_4;

 return VAR_4;
}
