
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_mdma_hwdesc {int ctcr; int cbndtr; int ctbr; scalar_t__ clar; int cmdr; int cmar; scalar_t__ cbrur; void* cdar; void* csar; } ;
struct stm32_mdma_desc {TYPE_1__* node; } ;
struct stm32_mdma_chan_config {int mask_data; int mask_addr; } ;
struct stm32_mdma_chan {struct stm32_mdma_chan_config chan_config; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;
struct TYPE_2__ {scalar_t__ hwdesc_phys; struct stm32_mdma_hwdesc* hwdesc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct stm32_mdma_chan*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct stm32_mdma_chan *VAR_4,
        struct stm32_mdma_desc *VAR_5,
        enum dma_transfer_direction VAR_6, u32 VAR_7,
        dma_addr_t VAR_8, dma_addr_t VAR_9,
        u32 VAR_10, u32 VAR_11, u32 VAR_12, bool VAR_13,
        bool VAR_14, bool VAR_15)
{
 struct stm32_mdma_chan_config *VAR_16 = &VAR_4->chan_config;
 struct stm32_mdma_hwdesc *VAR_17;
 u32 VAR_18 = VAR_7 + 1;

 VAR_17 = VAR_5->node[VAR_7].hwdesc;
 VAR_17->ctcr = VAR_11;
 VAR_17->cbndtr &= ~(VAR_1 |
   VAR_2 |
   VAR_3 |
   VAR_0);
 VAR_17->cbndtr |= FUNC_0(VAR_10);
 VAR_17->csar = VAR_8;
 VAR_17->cdar = VAR_9;
 VAR_17->cbrur = 0;
 VAR_17->ctbr = VAR_12;
 VAR_17->cmar = VAR_16->mask_addr;
 VAR_17->cmdr = VAR_16->mask_data;

 if (VAR_13) {
  if (VAR_15)
   VAR_17->clar = VAR_5->node[0].hwdesc_phys;
  else
   VAR_17->clar = 0;
 } else {
  VAR_17->clar = VAR_5->node[VAR_18].hwdesc_phys;
 }

 FUNC_1(VAR_4, &VAR_5->node[VAR_7]);
}
