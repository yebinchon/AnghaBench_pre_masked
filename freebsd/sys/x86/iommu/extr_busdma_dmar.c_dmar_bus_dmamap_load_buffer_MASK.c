
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
struct vm_page {int dummy; } ;
struct bus_dmamap_dmar {scalar_t__ cansleep; } ;
struct bus_dma_tag_dmar {int dummy; } ;
typedef scalar_t__ pmap_t ;
typedef int bus_size_t ;
typedef scalar_t__ bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct bus_dma_tag_dmar*,struct bus_dmamap_dmar*,int **,int,int,int,int *,int*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_8 ;
 void* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_11(bus_dma_tag_t VAR_9, bus_dmamap_t VAR_10, void *VAR_11,
    bus_size_t VAR_12, pmap_t VAR_13, int VAR_14, bus_dma_segment_t *VAR_15,
    int *VAR_16)
{
 struct bus_dma_tag_dmar *VAR_17;
 struct bus_dmamap_dmar *VAR_18;
 vm_page_t *VAR_19, VAR_20;
 vm_paddr_t VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_17 = (struct bus_dma_tag_dmar *)VAR_9;
 VAR_18 = (struct bus_dmamap_dmar *)VAR_10;
 VAR_21 = FUNC_9((vm_offset_t)VAR_11);
 VAR_22 = FUNC_8((vm_offset_t)VAR_11 + VAR_12);
 VAR_28 = (vm_offset_t)VAR_11 & VAR_5;
 VAR_26 = FUNC_0(VAR_22 - VAR_21);
 VAR_27 = VAR_18->cansleep ? VAR_3 : VAR_2;
 VAR_19 = FUNC_5(sizeof(vm_page_t) * VAR_26, VAR_1, VAR_27);
 if (VAR_19 == ((void*)0))
  return (VAR_0);
 VAR_20 = ((void*)0);
 for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++, VAR_21 += VAR_6) {
  if (VAR_13 == VAR_8)
   VAR_23 = FUNC_7(VAR_21);
  else
   VAR_23 = FUNC_6(VAR_13, VAR_21);
  VAR_19[VAR_25] = FUNC_1(VAR_23);
  if (VAR_19[VAR_25] == ((void*)0) || FUNC_2(VAR_19[VAR_25]) != VAR_23) {





   if (VAR_20 == ((void*)0)) {
    VAR_20 = FUNC_5(sizeof(struct vm_page) * VAR_26,
        VAR_1, VAR_4 | VAR_27);
    if (VAR_20 == ((void*)0)) {
     FUNC_4(*VAR_19, VAR_1);
     return (VAR_0);
    }
   }
   FUNC_10(&VAR_20[VAR_25], VAR_23, VAR_7);
   VAR_19[VAR_25] = &VAR_20[VAR_25];
  }
 }
 VAR_24 = FUNC_3(VAR_17, VAR_18, VAR_19, VAR_28, VAR_12,
     VAR_14, VAR_15, VAR_16);
 FUNC_4(*VAR_19, VAR_1);
 FUNC_4(VAR_20, VAR_1);
 return (VAR_24);
}
