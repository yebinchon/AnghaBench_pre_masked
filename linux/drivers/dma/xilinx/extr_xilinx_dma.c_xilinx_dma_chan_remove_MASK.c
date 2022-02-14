
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_node; } ;
struct xilinx_dma_chan {scalar_t__ irq; TYPE_1__ common; int tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xilinx_dma_chan*,int ,int ) ;
 int FUNC_1 (scalar_t__,struct xilinx_dma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct xilinx_dma_chan *VAR_2)
{

 FUNC_0(VAR_2, VAR_1,
        VAR_0);

 if (VAR_2->irq > 0)
  FUNC_1(VAR_2->irq, VAR_2);

 FUNC_3(&VAR_2->tasklet);

 FUNC_2(&VAR_2->common.device_node);
}
