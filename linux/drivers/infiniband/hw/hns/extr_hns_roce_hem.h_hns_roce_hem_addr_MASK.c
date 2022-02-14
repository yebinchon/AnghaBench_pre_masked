
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_hem_iter {size_t page_idx; TYPE_1__* chunk; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * mem; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct hns_roce_hem_iter *VAR_0)
{
 return FUNC_0(&VAR_0->chunk->mem[VAR_0->page_idx]);
}
