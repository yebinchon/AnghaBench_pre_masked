
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_long ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ bus_size_t ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_4__ {scalar_t__ dt_maxsegsz; int * dt_segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,scalar_t__,scalar_t__,int *,int*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(bus_dma_tag_t VAR_4, bus_dmamap_t VAR_5, void *VAR_6,
    bus_size_t VAR_7, pmap_t VAR_8, int VAR_9, bus_dma_segment_t *VAR_10,
    int *VAR_11)
{
 bus_size_t VAR_12;
 bus_addr_t VAR_13;
 vm_offset_t VAR_14 = (vm_offset_t)VAR_6;

 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_4->dt_segments;

 while (VAR_7 > 0) {



  if (VAR_8 == VAR_3)
   VAR_13 = FUNC_2(VAR_14);
  else
   VAR_13 = FUNC_1(VAR_8, VAR_14);




  VAR_12 = VAR_2 - ((u_long)VAR_13 & VAR_1);
  if (VAR_12 > VAR_4->dt_maxsegsz)
   VAR_12 = VAR_4->dt_maxsegsz;
  if (VAR_7 < VAR_12)
   VAR_12 = VAR_7;

  VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_13, VAR_12, VAR_10,
      VAR_11);
  if (VAR_12 == 0)
   break;

  VAR_14 += VAR_12;
  VAR_7 -= VAR_12;
 }




 return (VAR_7 != 0 ? VAR_0 : 0);
}
