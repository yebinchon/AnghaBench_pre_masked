
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_chan {int desc_pool; } ;
struct xilinx_cdma_tx_segment {int phys; } ;


 int FUNC_0 (int ,struct xilinx_cdma_tx_segment*,int ) ;

__attribute__((used)) static void FUNC_1(struct xilinx_dma_chan *VAR_0,
    struct xilinx_cdma_tx_segment *VAR_1)
{
 FUNC_0(VAR_0->desc_pool, VAR_1, VAR_1->phys);
}
