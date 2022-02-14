
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_dma_chan {int cookie; int ch_num; } ;
struct TYPE_2__ {int (* request_threaded_irq ) (int ,int ,int ,char*,struct mic_dma_chan*,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*,struct mic_dma_chan*,int ) ;
 int FUNC_2 (struct mic_dma_chan*) ;
 TYPE_1__* FUNC_3 (struct mic_dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct mic_dma_chan *VAR_2)
{
 VAR_2->cookie =
  FUNC_3(VAR_2)->request_threaded_irq(FUNC_2(VAR_2),
   VAR_0, VAR_1,
   "mic dma_channel", VAR_2, VAR_2->ch_num);
 return FUNC_0(VAR_2->cookie);
}
