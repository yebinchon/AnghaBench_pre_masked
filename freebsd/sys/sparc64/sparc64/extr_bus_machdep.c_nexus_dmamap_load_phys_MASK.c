
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_4__ {int dt_maxsegsz; int * dt_segments; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,scalar_t__,int *,int*) ;

__attribute__((used)) static int
FUNC_2(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2, vm_paddr_t VAR_3,
    bus_size_t VAR_4, int VAR_5, bus_dma_segment_t *VAR_6, int *VAR_7)
{
 bus_addr_t VAR_8;
 bus_size_t VAR_9;

 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_1->dt_segments;

 VAR_8 = VAR_3;
 while (VAR_4 > 0) {
  VAR_9 = FUNC_0(VAR_4, VAR_1->dt_maxsegsz);
  VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_8, VAR_9, VAR_6,
      VAR_7);
  if (VAR_9 == 0)
   break;
  VAR_8 += VAR_9;
  VAR_4 -= VAR_9;
 }




 return (VAR_4 != 0 ? VAR_0 : 0);
}
