
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iop3xx_desc {TYPE_1__* dma; int ptr; } ;
typedef int u32 ;
struct iop_adma_desc_slot {int hw_desc; } ;
struct TYPE_2__ {int next_desc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct iop_adma_desc_slot *VAR_0,
     u32 VAR_1)
{

 union iop3xx_desc VAR_2 = { .ptr = VAR_0->hw_desc, };

 FUNC_0(VAR_2.dma->next_desc);
 VAR_2.dma->next_desc = VAR_1;
}
