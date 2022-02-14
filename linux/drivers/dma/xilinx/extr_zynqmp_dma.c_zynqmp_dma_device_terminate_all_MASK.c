
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_dma_chan {int lock; scalar_t__ regs; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct zynqmp_dma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct zynqmp_dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_2)
{
 struct zynqmp_dma_chan *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);
 FUNC_3(VAR_1, VAR_3->regs + VAR_0);
 FUNC_4(VAR_3);
 FUNC_1(&VAR_3->lock, VAR_4);

 return 0;
}
