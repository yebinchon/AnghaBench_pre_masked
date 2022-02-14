
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_chan {int lock; int (* start_transfer ) (struct xilinx_dma_chan*) ;} ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct xilinx_dma_chan*) ;
 struct xilinx_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct xilinx_dma_chan *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_1->start_transfer(VAR_1);
 FUNC_1(&VAR_1->lock, VAR_2);
}
