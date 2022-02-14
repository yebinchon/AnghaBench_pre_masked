
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {scalar_t__ dma_32bit_pfn; int * cached_node; int * cached32_node; } ;
struct iova {scalar_t__ pfn_hi; int node; } ;



__attribute__((used)) static void
FUNC_0(struct iova_domain *VAR_0, struct iova *VAR_1)
{
 if (VAR_1->pfn_hi < VAR_0->dma_32bit_pfn)
  VAR_0->cached32_node = &VAR_1->node;
 else
  VAR_0->cached_node = &VAR_1->node;
}
