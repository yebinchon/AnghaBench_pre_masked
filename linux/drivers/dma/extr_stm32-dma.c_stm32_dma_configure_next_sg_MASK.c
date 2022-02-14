
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dma_sm0ar; int dma_sm1ar; } ;
struct stm32_dma_sg_req {TYPE_2__ chan_reg; } ;
struct stm32_dma_device {int dummy; } ;
struct stm32_dma_chan {int id; size_t next_sg; TYPE_1__* desc; } ;
struct TYPE_3__ {size_t num_sgs; struct stm32_dma_sg_req* sg_req; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct stm32_dma_chan*) ;
 int FUNC_4 (int ,char*,int) ;
 struct stm32_dma_device* FUNC_5 (struct stm32_dma_chan*) ;
 int FUNC_6 (struct stm32_dma_device*,int ) ;
 int FUNC_7 (struct stm32_dma_device*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct stm32_dma_chan *VAR_2)
{
 struct stm32_dma_device *VAR_3 = FUNC_5(VAR_2);
 struct stm32_dma_sg_req *VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_2->id;
 VAR_5 = FUNC_6(VAR_3, FUNC_0(VAR_8));

 if (VAR_5 & VAR_1) {
  if (VAR_2->next_sg == VAR_2->desc->num_sgs)
   VAR_2->next_sg = 0;

  VAR_4 = &VAR_2->desc->sg_req[VAR_2->next_sg];

  if (VAR_5 & VAR_0) {
   VAR_6 = VAR_4->chan_reg.dma_sm0ar;
   FUNC_7(VAR_3, FUNC_1(VAR_8), VAR_6);
   FUNC_4(FUNC_3(VAR_2), "CT=1 <=> SM0AR: 0x%08x\n",
    FUNC_6(VAR_3, FUNC_1(VAR_8)));
  } else {
   VAR_7 = VAR_4->chan_reg.dma_sm1ar;
   FUNC_7(VAR_3, FUNC_2(VAR_8), VAR_7);
   FUNC_4(FUNC_3(VAR_2), "CT=0 <=> SM1AR: 0x%08x\n",
    FUNC_6(VAR_3, FUNC_2(VAR_8)));
  }
 }
}
