
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_adma_desc_slot {struct iop3xx_desc_dma* hw_desc; } ;
struct iop3xx_desc_dma {int src_addr; } ;
typedef int dma_addr_t ;



__attribute__((used)) static inline void FUNC_0(struct iop_adma_desc_slot *VAR_0,
     dma_addr_t VAR_1)
{
 struct iop3xx_desc_dma *VAR_2 = VAR_0->hw_desc;
 VAR_2->src_addr = VAR_1;
}
