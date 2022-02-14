
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_vdma_tx_segment {int phys; } ;
struct xilinx_dma_chan {int desc_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct xilinx_vdma_tx_segment* FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static struct xilinx_vdma_tx_segment *
FUNC_1(struct xilinx_dma_chan *VAR_1)
{
 struct xilinx_vdma_tx_segment *VAR_2;
 dma_addr_t VAR_3;

 VAR_2 = FUNC_0(VAR_1->desc_pool, VAR_0, &VAR_3);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->phys = VAR_3;

 return VAR_2;
}
