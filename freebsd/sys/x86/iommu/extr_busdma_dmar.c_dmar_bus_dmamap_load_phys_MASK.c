
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ***** vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
struct vm_page {int dummy; } ;
struct bus_dmamap_dmar {scalar_t__ cansleep; } ;
struct bus_dma_tag_dmar {int dummy; } ;
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
 scalar_t__ VAR_5 ;
 int ******* FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *****) ;
 int FUNC_3 (struct bus_dma_tag_dmar*,struct bus_dmamap_dmar*,int ******,int,int ,int,int *,int*) ;
 int FUNC_4 (int ******,int ) ;
 void* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *****,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_10(bus_dma_tag_t VAR_7, bus_dmamap_t VAR_8,
    vm_paddr_t VAR_9, bus_size_t VAR_10, int VAR_11, bus_dma_segment_t *VAR_12,
    int *VAR_13)
{
 struct bus_dma_tag_dmar *VAR_14;
 struct bus_dmamap_dmar *VAR_15;
 vm_page_t *VAR_16, VAR_17;
 vm_paddr_t VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_14 = (struct bus_dma_tag_dmar *)VAR_7;
 VAR_15 = (struct bus_dmamap_dmar *)VAR_8;
 VAR_18 = FUNC_8(VAR_9);
 VAR_19 = FUNC_7(VAR_9 + VAR_10);
 VAR_25 = VAR_9 & VAR_5;
 VAR_23 = FUNC_0(VAR_19 - VAR_18);
 VAR_24 = VAR_15->cansleep ? VAR_3 : VAR_2;
 VAR_16 = FUNC_5(sizeof(vm_page_t) * VAR_23, VAR_1, VAR_24);
 if (VAR_16 == ((void*)0))
  return (VAR_0);
 VAR_17 = ((void*)0);
 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
  VAR_20 = VAR_18 + FUNC_6(VAR_22);
  VAR_16[VAR_22] = FUNC_1(VAR_20);
  if (VAR_16[VAR_22] == ((void*)0) || FUNC_2(VAR_16[VAR_22]) != VAR_20) {





   if (VAR_17 == ((void*)0)) {
    VAR_17 = FUNC_5(sizeof(struct vm_page) * VAR_23,
        VAR_1, VAR_4 | VAR_24);
    if (VAR_17 == ((void*)0)) {
     FUNC_4(VAR_16, VAR_1);
     return (VAR_0);
    }
   }
   FUNC_9(&VAR_17[VAR_22], VAR_18 + FUNC_6(VAR_22),
       VAR_6);
   VAR_16[VAR_22] = &VAR_17[VAR_22];
  }
 }
 VAR_21 = FUNC_3(VAR_14, VAR_15, VAR_16, VAR_25, VAR_10,
     VAR_11, VAR_12, VAR_13);
 FUNC_4(&VAR_17, VAR_1);
 FUNC_4(VAR_16, VAR_1);
 return (VAR_21);
}
