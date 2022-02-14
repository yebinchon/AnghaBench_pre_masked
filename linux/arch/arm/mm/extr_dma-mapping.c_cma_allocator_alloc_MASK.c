
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct arm_dma_alloc_args {int gfp; int coherent_flag; int want_vaddr; int caller; int prot; int size; int dev; } ;


 void* FUNC_0 (int ,int ,int ,struct page**,int ,int ,int ,int ) ;

__attribute__((used)) static void *FUNC_1(struct arm_dma_alloc_args *VAR_0,
     struct page **VAR_1)
{
 return FUNC_0(VAR_0->dev, VAR_0->size, VAR_0->prot,
           VAR_1, VAR_0->caller,
           VAR_0->want_vaddr, VAR_0->coherent_flag,
           VAR_0->gfp);
}
