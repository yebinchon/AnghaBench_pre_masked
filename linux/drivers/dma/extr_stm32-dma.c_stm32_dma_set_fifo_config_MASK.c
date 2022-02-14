
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dma_sfcr; int dma_scr; } ;
struct stm32_dma_chan {TYPE_1__ chan_reg; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct stm32_dma_chan *VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 VAR_2->chan_reg.dma_sfcr &= ~VAR_1;
 VAR_2->chan_reg.dma_scr &= ~VAR_0;

 if (!VAR_3 && !VAR_4) {

  VAR_2->chan_reg.dma_scr |= VAR_0;
 } else {

  VAR_2->chan_reg.dma_sfcr |= VAR_1;
 }
}
