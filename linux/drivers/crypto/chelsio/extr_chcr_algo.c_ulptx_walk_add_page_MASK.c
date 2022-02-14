
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ulptx_walk {scalar_t__ nents; size_t pair_idx; TYPE_2__* pair; TYPE_1__* sgl; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {void** len; void** addr; } ;
struct TYPE_3__ {void* addr0; void* len0; } ;


 void* FUNC_0 (size_t) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct ulptx_walk *VAR_0,
     size_t VAR_1,
     dma_addr_t VAR_2)
{
 if (!VAR_1)
  return;

 if (VAR_0->nents == 0) {
  VAR_0->sgl->len0 = FUNC_0(VAR_1);
  VAR_0->sgl->addr0 = FUNC_1(VAR_2);
 } else {
  VAR_0->pair->addr[VAR_0->pair_idx] = FUNC_1(VAR_2);
  VAR_0->pair->len[VAR_0->pair_idx] = FUNC_0(VAR_1);
  VAR_0->pair_idx = !VAR_0->pair_idx;
  if (!VAR_0->pair_idx)
   VAR_0->pair++;
 }
 VAR_0->nents++;
}
