
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_3__ {scalar_t__ (* filter ) (int ,int) ;int lowaddr; int highaddr; int alignment; struct TYPE_3__* parent; int filterarg; int * iommu; } ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static __inline int
FUNC_1(bus_dma_tag_t VAR_0, bus_addr_t VAR_1)
{
 int VAR_2;

 VAR_2 = 0;

 do {
  if (VAR_0->filter == ((void*)0) && VAR_0->iommu == ((void*)0) &&
      VAR_1 > VAR_0->lowaddr && VAR_1 <= VAR_0->highaddr)
   VAR_2 = 1;
  if (VAR_0->filter == ((void*)0) &&
      (VAR_1 & (VAR_0->alignment - 1)) != 0)
   VAR_2 = 1;
  if (VAR_0->filter != ((void*)0) &&
      (*VAR_0->filter)(VAR_0->filterarg, VAR_1) != 0)
   VAR_2 = 1;

  VAR_0 = VAR_0->parent;
 } while (VAR_2 == 0 && VAR_0 != ((void*)0));
 return (VAR_2);
}
