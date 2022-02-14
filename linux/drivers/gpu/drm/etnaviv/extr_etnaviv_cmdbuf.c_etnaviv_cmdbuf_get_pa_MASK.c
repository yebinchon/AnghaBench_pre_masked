
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_cmdbuf {scalar_t__ suballoc_offset; TYPE_1__* suballoc; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ paddr; } ;



dma_addr_t FUNC_0(struct etnaviv_cmdbuf *VAR_0)
{
 return VAR_0->suballoc->paddr + VAR_0->suballoc_offset;
}
