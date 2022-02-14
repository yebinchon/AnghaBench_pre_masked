
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct bus_dma_tag_common {int lowaddr; int highaddr; int alignment; scalar_t__ (* filter ) (int ,int) ;struct bus_dma_tag_common* parent; int filterarg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

int
FUNC_1(struct bus_dma_tag_common *VAR_1, vm_paddr_t VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 do {
  if ((VAR_2 >= VAR_0 ||
      (VAR_2 > VAR_1->lowaddr && VAR_2 <= VAR_1->highaddr) ||
      (VAR_2 & (VAR_1->alignment - 1)) != 0) &&
      (VAR_1->filter == ((void*)0) ||
      (*VAR_1->filter)(VAR_1->filterarg, VAR_2) != 0))
   VAR_3 = 1;

  VAR_1 = VAR_1->parent;
 } while (VAR_3 == 0 && VAR_1 != ((void*)0));
 return (VAR_3);
}
