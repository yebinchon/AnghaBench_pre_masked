
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_scr; } ;
struct stm32_dma_chan {int threshold; TYPE_1__ chan_reg; } ;
struct stm32_dma_cfg {int stream_config; int features; int request_line; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct stm32_dma_chan *VAR_3,
     struct stm32_dma_cfg *VAR_4)
{
 FUNC_2(&VAR_3->chan_reg);

 VAR_3->chan_reg.dma_scr = VAR_4->stream_config & VAR_0;
 VAR_3->chan_reg.dma_scr |= FUNC_0(VAR_4->request_line);


 VAR_3->chan_reg.dma_scr |= VAR_2 | VAR_1;

 VAR_3->threshold = FUNC_1(VAR_4->features);
}
