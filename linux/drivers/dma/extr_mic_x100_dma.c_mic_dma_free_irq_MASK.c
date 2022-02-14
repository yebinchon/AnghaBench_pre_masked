
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_dma_chan {int cookie; } ;
struct TYPE_2__ {int (* free_irq ) (int ,int ,struct mic_dma_chan*) ;} ;


 int FUNC_0 (int ,int ,struct mic_dma_chan*) ;
 int FUNC_1 (struct mic_dma_chan*) ;
 TYPE_1__* FUNC_2 (struct mic_dma_chan*) ;

__attribute__((used)) static inline void FUNC_3(struct mic_dma_chan *VAR_0)
{
 FUNC_2(VAR_0)->free_irq(FUNC_1(VAR_0), VAR_0->cookie, VAR_0);
}
