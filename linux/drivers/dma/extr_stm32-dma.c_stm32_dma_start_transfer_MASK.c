
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct virt_dma_desc {int dummy; } ;
struct stm32_dma_chan_reg {int dma_scr; int dma_sndtr; int dma_sm1ar; int dma_sfcr; int dma_sm0ar; int dma_spar; } ;
struct stm32_dma_sg_req {struct stm32_dma_chan_reg chan_reg; } ;
struct stm32_dma_device {int dummy; } ;
struct stm32_dma_chan {size_t next_sg; int busy; int vchan; int id; TYPE_1__* desc; } ;
struct TYPE_2__ {size_t num_sgs; scalar_t__ cyclic; struct stm32_dma_sg_req* sg_req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct stm32_dma_chan*) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (struct stm32_dma_chan*) ;
 int FUNC_9 (struct stm32_dma_chan*) ;
 int FUNC_10 (struct stm32_dma_chan*) ;
 struct stm32_dma_device* FUNC_11 (struct stm32_dma_chan*) ;
 int FUNC_12 (struct stm32_dma_chan*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct stm32_dma_chan*) ;
 int FUNC_14 (struct stm32_dma_device*,int ,int ) ;
 TYPE_1__* FUNC_15 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct stm32_dma_chan *VAR_1)
{
 struct stm32_dma_device *VAR_2 = FUNC_11(VAR_1);
 struct virt_dma_desc *VAR_3;
 struct stm32_dma_sg_req *VAR_4;
 struct stm32_dma_chan_reg *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_9(VAR_1);
 if (VAR_7 < 0)
  return;

 if (!VAR_1->desc) {
  VAR_3 = FUNC_16(&VAR_1->vchan);
  if (!VAR_3)
   return;

  VAR_1->desc = FUNC_15(VAR_3);
  VAR_1->next_sg = 0;
 }

 if (VAR_1->next_sg == VAR_1->desc->num_sgs)
  VAR_1->next_sg = 0;

 VAR_4 = &VAR_1->desc->sg_req[VAR_1->next_sg];
 VAR_5 = &VAR_4->chan_reg;

 FUNC_14(VAR_2, FUNC_0(VAR_1->id), VAR_5->dma_scr);
 FUNC_14(VAR_2, FUNC_5(VAR_1->id), VAR_5->dma_spar);
 FUNC_14(VAR_2, FUNC_2(VAR_1->id), VAR_5->dma_sm0ar);
 FUNC_14(VAR_2, FUNC_1(VAR_1->id), VAR_5->dma_sfcr);
 FUNC_14(VAR_2, FUNC_3(VAR_1->id), VAR_5->dma_sm1ar);
 FUNC_14(VAR_2, FUNC_4(VAR_1->id), VAR_5->dma_sndtr);

 VAR_1->next_sg++;


 VAR_6 = FUNC_13(VAR_1);
 if (VAR_6)
  FUNC_12(VAR_1, VAR_6);

 if (VAR_1->desc->cyclic)
  FUNC_8(VAR_1);

 FUNC_10(VAR_1);


 VAR_5->dma_scr |= VAR_0;
 FUNC_14(VAR_2, FUNC_0(VAR_1->id), VAR_5->dma_scr);

 VAR_1->busy = 1;

 FUNC_7(FUNC_6(VAR_1), "vchan %pK: started\n", &VAR_1->vchan);
}
