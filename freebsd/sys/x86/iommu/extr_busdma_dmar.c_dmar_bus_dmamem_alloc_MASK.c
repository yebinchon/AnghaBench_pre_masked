
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_memattr_t ;
struct bus_dmamap_dmar {int flags; } ;
struct TYPE_2__ {scalar_t__ maxsize; scalar_t__ alignment; int domain; } ;
struct bus_dma_tag_dmar {TYPE_1__ common; } ;
typedef int * bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (scalar_t__,int,int **) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int,unsigned long,int ,scalar_t__) ;
 void* FUNC_4 (scalar_t__,int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(bus_dma_tag_t VAR_14, void** VAR_15, int VAR_16,
    bus_dmamap_t *VAR_17)
{
 struct bus_dma_tag_dmar *VAR_18;
 struct bus_dmamap_dmar *VAR_19;
 int VAR_20, VAR_21;
 vm_memattr_t VAR_22;

 VAR_20 = FUNC_1(VAR_14, VAR_16, VAR_17);
 if (VAR_20 != 0)
  return (VAR_20);

 VAR_21 = (VAR_16 & VAR_3) != 0 ? VAR_8 : VAR_9;
 VAR_21 |= (VAR_16 & VAR_4) != 0 ? VAR_10 : 0;
 VAR_22 = (VAR_16 & VAR_2) != 0 ? VAR_13 :
     VAR_12;

 VAR_18 = (struct bus_dma_tag_dmar *)VAR_14;
 VAR_19 = (struct bus_dmamap_dmar *)*VAR_17;

 if (VAR_18->common.maxsize < VAR_11 &&
     VAR_18->common.alignment <= VAR_18->common.maxsize &&
     VAR_22 == VAR_12) {
  *VAR_15 = FUNC_4(VAR_18->common.maxsize, VAR_7,
      FUNC_0(VAR_18->common.domain), VAR_21);
  VAR_19->flags |= VAR_1;
 } else {
  *VAR_15 = (void *)FUNC_3(
      FUNC_0(VAR_18->common.domain), VAR_18->common.maxsize,
      VAR_21, 0ul, VAR_5, VAR_22);
  VAR_19->flags |= VAR_0;
 }
 if (*VAR_15 == ((void*)0)) {
  FUNC_2(VAR_14, *VAR_17);
  *VAR_17 = ((void*)0);
  return (VAR_6);
 }
 return (0);
}
