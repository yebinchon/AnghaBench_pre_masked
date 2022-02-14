
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_node; } ;
struct fsldma_chan {int regs; TYPE_1__ common; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fsldma_chan*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fsldma_chan *VAR_0)
{
 FUNC_1(VAR_0->irq);
 FUNC_3(&VAR_0->common.device_node);
 FUNC_0(VAR_0->regs);
 FUNC_2(VAR_0);
}
