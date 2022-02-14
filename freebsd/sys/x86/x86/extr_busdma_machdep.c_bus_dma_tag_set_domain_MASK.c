
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_dma_tag_common {int domain; TYPE_1__* impl; int lowaddr; } ;
typedef scalar_t__ bus_dma_tag_t ;
struct TYPE_2__ {int (* tag_set_domain ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,unsigned long,int ) ;

int
FUNC_2(bus_dma_tag_t VAR_0, int VAR_1)
{
 struct bus_dma_tag_common *VAR_2;

 VAR_2 = (struct bus_dma_tag_common *)VAR_0;
 VAR_1 = FUNC_1(VAR_1, 0ul, VAR_2->lowaddr);

 if (VAR_1 == VAR_2->domain)
  return (0);
 VAR_2->domain = VAR_1;
 return (VAR_2->impl->tag_set_domain(VAR_0));
}
