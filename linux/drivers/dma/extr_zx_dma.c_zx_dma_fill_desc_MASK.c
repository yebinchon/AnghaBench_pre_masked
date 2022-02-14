
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zx_dma_desc_sw {int desc_num; TYPE_1__* desc_hw; scalar_t__ desc_hw_lli; } ;
struct zx_desc_hw {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {size_t src_x; int ctr; void* daddr; void* saddr; scalar_t__ lli; } ;



__attribute__((used)) static void FUNC_0(struct zx_dma_desc_sw *VAR_0, dma_addr_t VAR_1,
        dma_addr_t VAR_2, size_t VAR_3, u32 VAR_4, u32 VAR_5)
{
 if ((VAR_4 + 1) < VAR_0->desc_num)
  VAR_0->desc_hw[VAR_4].lli = VAR_0->desc_hw_lli + (VAR_4 + 1) *
   sizeof(struct zx_desc_hw);
 VAR_0->desc_hw[VAR_4].saddr = VAR_2;
 VAR_0->desc_hw[VAR_4].daddr = VAR_1;
 VAR_0->desc_hw[VAR_4].src_x = VAR_3;
 VAR_0->desc_hw[VAR_4].ctr = VAR_5;
}
