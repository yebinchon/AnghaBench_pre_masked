
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct iova_domain {unsigned long dma_32bit_pfn; struct rb_node* cached_node; struct rb_node* cached32_node; } ;



__attribute__((used)) static struct rb_node *
FUNC_0(struct iova_domain *VAR_0, unsigned long VAR_1)
{
 if (VAR_1 <= VAR_0->dma_32bit_pfn)
  return VAR_0->cached32_node;

 return VAR_0->cached_node;
}
