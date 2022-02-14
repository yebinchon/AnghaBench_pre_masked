
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_dma_ring {scalar_t__ cmd_base; scalar_t__ cmd; scalar_t__ num; TYPE_1__* pdma; } ;
struct TYPE_2__ {scalar_t__ csr_ring_cmd; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct xgene_dma_ring *VAR_2)
{
 VAR_2->cmd_base = VAR_2->pdma->csr_ring_cmd +
    FUNC_0((VAR_2->num -
         VAR_1));

 VAR_2->cmd = VAR_2->cmd_base + VAR_0;
}
