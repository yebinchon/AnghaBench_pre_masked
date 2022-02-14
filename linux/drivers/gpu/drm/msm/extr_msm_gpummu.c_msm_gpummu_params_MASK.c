
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_mmu {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ pt_base; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct msm_mmu*) ;

void FUNC_1(struct msm_mmu *VAR_1, dma_addr_t *VAR_2,
  dma_addr_t *VAR_3)
{
 dma_addr_t VAR_4 = FUNC_0(VAR_1)->pt_base;

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_4 + VAR_0;
}
