
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct arm_dma_alloc_args {int size; } ;


 void* FUNC_0 (int ,struct page**) ;

__attribute__((used)) static void *FUNC_1(struct arm_dma_alloc_args *VAR_0,
      struct page **VAR_1)
{
 return FUNC_0(VAR_0->size, VAR_1);
}
