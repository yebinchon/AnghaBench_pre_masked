
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iop3xx_desc {TYPE_1__* dma; int ptr; } ;
typedef int u32 ;
struct iop_adma_desc_slot {int hw_desc; } ;
struct TYPE_2__ {int next_desc; } ;



__attribute__((used)) static inline u32 FUNC_0(struct iop_adma_desc_slot *VAR_0)
{

 union iop3xx_desc VAR_1 = { .ptr = VAR_0->hw_desc, };
 return VAR_1.dma->next_desc;
}
