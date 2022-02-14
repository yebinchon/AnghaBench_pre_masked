
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmips_dma_range {scalar_t__ size; scalar_t__ parent_addr; scalar_t__ child_addr; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 struct bmips_dma_range* VAR_0 ;

phys_addr_t FUNC_0(struct device *VAR_1, dma_addr_t VAR_2)
{
 struct bmips_dma_range *VAR_3;

 for (VAR_3 = VAR_0; VAR_3 && VAR_3->size; VAR_3++) {
  if (VAR_2 >= VAR_3->parent_addr &&
      VAR_2 < (VAR_3->parent_addr + VAR_3->size))
   return VAR_2 - VAR_3->parent_addr + VAR_3->child_addr;
 }
 return VAR_2;
}
