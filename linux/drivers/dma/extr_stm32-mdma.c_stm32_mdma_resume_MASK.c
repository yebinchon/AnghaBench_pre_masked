
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stm32_mdma_hwdesc {int ctcr; } ;
struct stm32_mdma_device {int dummy; } ;
struct TYPE_6__ {int lock; } ;
struct stm32_mdma_chan {size_t curr_hwdesc; TYPE_3__ vchan; int id; TYPE_2__* desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_5__ {int ccr; TYPE_1__* node; } ;
struct TYPE_4__ {struct stm32_mdma_hwdesc* hwdesc; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct stm32_mdma_chan*) ;
 int FUNC_4 (int ,char*,TYPE_3__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct stm32_mdma_chan*) ;
 struct stm32_mdma_device* FUNC_8 (struct stm32_mdma_chan*) ;
 scalar_t__ FUNC_9 (struct stm32_mdma_device*,int ) ;
 int FUNC_10 (struct stm32_mdma_device*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct stm32_mdma_device*,scalar_t__,int ) ;
 struct stm32_mdma_chan* FUNC_12 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_13(struct dma_chan *VAR_3)
{
 struct stm32_mdma_chan *VAR_4 = FUNC_12(VAR_3);
 struct stm32_mdma_device *VAR_5 = FUNC_8(VAR_4);
 struct stm32_mdma_hwdesc *VAR_6;
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;

 VAR_6 = VAR_4->desc->node[VAR_4->curr_hwdesc].hwdesc;

 FUNC_5(&VAR_4->vchan.lock, VAR_7);


 FUNC_11(VAR_5, FUNC_0(VAR_4->id), VAR_4->desc->ccr);


 VAR_8 = FUNC_9(VAR_5, FUNC_2(VAR_4->id));
 if (VAR_8)
  FUNC_10(VAR_5, FUNC_1(VAR_4->id), VAR_8);

 FUNC_7(VAR_4);


 VAR_9 = FUNC_0(VAR_4->id);
 FUNC_10(VAR_5, VAR_9, VAR_0);


 if (VAR_6->ctcr & VAR_2)
  FUNC_10(VAR_5, VAR_9, VAR_1);

 FUNC_6(&VAR_4->vchan.lock, VAR_7);

 FUNC_4(FUNC_3(VAR_4), "vchan %pK: resume\n", &VAR_4->vchan);

 return 0;
}
