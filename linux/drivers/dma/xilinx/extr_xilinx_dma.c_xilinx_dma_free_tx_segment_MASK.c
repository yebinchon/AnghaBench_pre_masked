
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_chan {int free_seg_list; } ;
struct xilinx_axidma_tx_segment {int node; int hw; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct xilinx_dma_chan *VAR_0,
    struct xilinx_axidma_tx_segment *VAR_1)
{
 FUNC_1(&VAR_1->hw);

 FUNC_0(&VAR_1->node, &VAR_0->free_seg_list);
}
