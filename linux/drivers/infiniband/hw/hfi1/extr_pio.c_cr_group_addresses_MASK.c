
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct send_context {int hw_context; size_t node; TYPE_3__* dd; int * hw_free; int group; } ;
struct credit_return {int dummy; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_6__ {TYPE_2__* cr_base; } ;
struct TYPE_5__ {scalar_t__ dma; TYPE_1__* va; } ;
struct TYPE_4__ {int * cr; } ;


 size_t FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct send_context *VAR_0, dma_addr_t *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0->hw_context, VAR_0->group);
 u32 VAR_3 = VAR_0->hw_context & 0x7;

 VAR_0->hw_free = &VAR_0->dd->cr_base[VAR_0->node].va[VAR_2].cr[VAR_3];
 *VAR_1 = (unsigned long)
        &((struct credit_return *)VAR_0->dd->cr_base[VAR_0->node].dma)[VAR_2];
}
