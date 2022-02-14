
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
struct TYPE_17__ {scalar_t__ maxsegsz; int alignment; } ;
struct TYPE_16__ {int bounce_flags; TYPE_4__ common; int * segments; } ;
struct TYPE_15__ {scalar_t__ pagesneeded; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int *,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,scalar_t__,void*,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,scalar_t__,int,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_9(bus_dma_tag_t VAR_6, bus_dmamap_t VAR_7, void *VAR_8,
    bus_size_t VAR_9, pmap_t VAR_10, int VAR_11, bus_dma_segment_t *VAR_12,
    int *VAR_13)
{
 bus_size_t VAR_14, VAR_15;
 vm_paddr_t VAR_16;
 vm_offset_t VAR_17, VAR_18;
 int VAR_19;

 if (VAR_7 == ((void*)0))
  VAR_7 = &VAR_5;

 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_6->segments;

 if ((VAR_6->bounce_flags & VAR_0) != 0) {
  FUNC_2(VAR_6, VAR_7, VAR_10, VAR_8, VAR_9, VAR_11);
  if (VAR_7->pagesneeded != 0) {
   VAR_19 = FUNC_3(VAR_6, VAR_7, VAR_11);
   if (VAR_19)
    return (VAR_19);
  }
 }

 VAR_18 = (vm_offset_t)VAR_8;
 while (VAR_9 > 0) {



  if (VAR_10 == VAR_4) {
   VAR_16 = FUNC_7(VAR_18);
   VAR_17 = VAR_18;
  } else {
   VAR_16 = FUNC_6(VAR_10, VAR_18);
   VAR_17 = 0;
  }




  VAR_15 = FUNC_0(VAR_9, VAR_6->common.maxsegsz);
  VAR_14 = VAR_3 - (VAR_16 & VAR_2);
  if ((VAR_6->bounce_flags & VAR_0) != 0 &&
      VAR_7->pagesneeded != 0 &&
      FUNC_5(&VAR_6->common, VAR_16)) {
   VAR_14 = FUNC_8(VAR_14, VAR_6->common.alignment);
   VAR_14 = FUNC_0(VAR_14, VAR_15);
   VAR_16 = FUNC_4(VAR_6, VAR_7, VAR_17, VAR_16, 0,
       VAR_14);
  } else {
   VAR_14 = FUNC_0(VAR_14, VAR_15);
  }
  VAR_14 = FUNC_1(VAR_6, VAR_7, VAR_16, VAR_14, VAR_12,
      VAR_13);
  if (VAR_14 == 0)
   break;
  VAR_18 += VAR_14;
  VAR_9 -= VAR_14;
 }




 return (VAR_9 != 0 ? VAR_1 : 0);
}
