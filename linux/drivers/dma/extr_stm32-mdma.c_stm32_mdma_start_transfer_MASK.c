
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct virt_dma_desc {int dummy; } ;
struct stm32_mdma_hwdesc {int ctcr; int cbndtr; int csar; int cdar; int cbrur; int clar; int ctbr; int cmar; int cmdr; } ;
struct stm32_mdma_device {int dummy; } ;
struct stm32_mdma_chan {int busy; int vchan; TYPE_2__* desc; scalar_t__ curr_hwdesc; scalar_t__ id; } ;
struct TYPE_4__ {int ccr; TYPE_1__* node; } ;
struct TYPE_3__ {struct stm32_mdma_hwdesc* hwdesc; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_12 (struct stm32_mdma_chan*) ;
 int FUNC_13 (int ,char*,int *) ;
 int FUNC_14 (struct stm32_mdma_chan*) ;
 struct stm32_mdma_device* FUNC_15 (struct stm32_mdma_chan*) ;
 scalar_t__ FUNC_16 (struct stm32_mdma_device*,int ) ;
 int FUNC_17 (struct stm32_mdma_device*,scalar_t__,scalar_t__) ;
 int FUNC_18 (struct stm32_mdma_device*,scalar_t__,int) ;
 TYPE_2__* FUNC_19 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_20 (int *) ;

__attribute__((used)) static void FUNC_21(struct stm32_mdma_chan *VAR_3)
{
 struct stm32_mdma_device *VAR_4 = FUNC_15(VAR_3);
 struct virt_dma_desc *VAR_5;
 struct stm32_mdma_hwdesc *VAR_6;
 u32 VAR_7 = VAR_3->id;
 u32 VAR_8, VAR_9;

 VAR_5 = FUNC_20(&VAR_3->vchan);
 if (!VAR_5) {
  VAR_3->desc = ((void*)0);
  return;
 }

 VAR_3->desc = FUNC_19(VAR_5);
 VAR_6 = VAR_3->desc->node[0].hwdesc;
 VAR_3->curr_hwdesc = 0;

 FUNC_18(VAR_4, FUNC_2(VAR_7), VAR_3->desc->ccr);
 FUNC_18(VAR_4, FUNC_11(VAR_7), VAR_6->ctcr);
 FUNC_18(VAR_4, FUNC_0(VAR_7), VAR_6->cbndtr);
 FUNC_18(VAR_4, FUNC_9(VAR_7), VAR_6->csar);
 FUNC_18(VAR_4, FUNC_3(VAR_7), VAR_6->cdar);
 FUNC_18(VAR_4, FUNC_1(VAR_7), VAR_6->cbrur);
 FUNC_18(VAR_4, FUNC_6(VAR_7), VAR_6->clar);
 FUNC_18(VAR_4, FUNC_10(VAR_7), VAR_6->ctbr);
 FUNC_18(VAR_4, FUNC_7(VAR_7), VAR_6->cmar);
 FUNC_18(VAR_4, FUNC_8(VAR_7), VAR_6->cmdr);


 VAR_8 = FUNC_16(VAR_4, FUNC_5(VAR_7));
 if (VAR_8)
  FUNC_17(VAR_4, FUNC_4(VAR_7), VAR_8);

 FUNC_14(VAR_3);


 FUNC_17(VAR_4, FUNC_2(VAR_7), VAR_0);


 if (VAR_6->ctcr & VAR_2) {
  VAR_9 = FUNC_2(VAR_7);
  FUNC_17(VAR_4, VAR_9, VAR_1);
 }

 VAR_3->busy = 1;

 FUNC_13(FUNC_12(VAR_3), "vchan %pK: started\n", &VAR_3->vchan);
}
