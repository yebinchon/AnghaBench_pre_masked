
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_15__ {int flags; scalar_t__ maxsegsz; int alignment; } ;
struct TYPE_14__ {scalar_t__ pagesneeded; int * segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int *,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,scalar_t__,void*,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;

int
FUNC_9(bus_dma_tag_t VAR_5,
       bus_dmamap_t VAR_6,
   void *VAR_7, bus_size_t VAR_8,
   pmap_t VAR_9,
   int VAR_10,
   bus_dma_segment_t *VAR_11,
   int *VAR_12)
{
 bus_size_t VAR_13;
 bus_addr_t VAR_14;
 vm_offset_t VAR_15, VAR_16;
 int VAR_17;

 if (VAR_11 == ((void*)0))
  VAR_11 = VAR_6->segments;

 if ((VAR_5->flags & VAR_0) != 0) {
  FUNC_2(VAR_5, VAR_6, VAR_9, VAR_7, VAR_8, VAR_10);
  if (VAR_6->pagesneeded != 0) {
   VAR_17 = FUNC_3(VAR_5, VAR_6, VAR_10);
   if (VAR_17)
    return (VAR_17);
  }
 }

 VAR_16 = (vm_offset_t)VAR_7;

 while (VAR_8 > 0) {
  bus_size_t VAR_18;




  if (VAR_9 == VAR_4) {
   VAR_14 = FUNC_6(VAR_16);
   VAR_15 = VAR_16;
  } else {
   VAR_14 = FUNC_5(VAR_9, VAR_16);
   VAR_15 = 0;
  }




  VAR_18 = FUNC_0(VAR_8, VAR_5->maxsegsz);
  VAR_13 = VAR_3 - (VAR_14 & VAR_2);
  if (VAR_6->pagesneeded != 0 && FUNC_8(VAR_5, VAR_14)) {
   VAR_13 = FUNC_7(VAR_13, VAR_5->alignment);
   VAR_13 = FUNC_0(VAR_13, VAR_18);
   VAR_14 = FUNC_4(VAR_5, VAR_6, VAR_15, VAR_14,
       VAR_13);
  } else {
   VAR_13 = FUNC_0(VAR_13, VAR_18);
  }

  VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_14, VAR_13, VAR_11,
      VAR_12);
  if (VAR_13 == 0)
   break;
  VAR_16 += VAR_13;
  VAR_8 -= VAR_13;
 }




 return (VAR_8 != 0 ? VAR_1 : 0);
}
