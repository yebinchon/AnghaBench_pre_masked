
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_dmac_chan {int address_align_mask; } ;
typedef int dma_addr_t ;



__attribute__((used)) static bool FUNC_0(struct axi_dmac_chan *VAR_0, dma_addr_t VAR_1)
{
 if ((VAR_1 & VAR_0->address_align_mask) != 0)
  return 0;
 return 1;
}
