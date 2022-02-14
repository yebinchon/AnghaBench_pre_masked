
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct k3_dma_desc_sw {int desc_num; TYPE_1__* desc_hw; scalar_t__ desc_hw_lli; } ;
struct k3_desc_hw {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {size_t count; int config; void* daddr; void* saddr; scalar_t__ lli; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct k3_dma_desc_sw *VAR_1, dma_addr_t VAR_2,
   dma_addr_t VAR_3, size_t VAR_4, u32 VAR_5, u32 VAR_6)
{
 if (VAR_5 != VAR_1->desc_num - 1)
  VAR_1->desc_hw[VAR_5].lli = VAR_1->desc_hw_lli + (VAR_5 + 1) *
   sizeof(struct k3_desc_hw);

 VAR_1->desc_hw[VAR_5].lli |= VAR_0;
 VAR_1->desc_hw[VAR_5].count = VAR_4;
 VAR_1->desc_hw[VAR_5].saddr = VAR_3;
 VAR_1->desc_hw[VAR_5].daddr = VAR_2;
 VAR_1->desc_hw[VAR_5].config = VAR_6;
}
