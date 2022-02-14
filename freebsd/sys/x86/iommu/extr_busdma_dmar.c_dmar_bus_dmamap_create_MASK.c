
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_dmamap_dmar {int locked; int cansleep; struct bus_dma_tag_dmar* tag; int map_entries; } ;
struct TYPE_2__ {int nsegments; int domain; } ;
struct bus_dma_tag_dmar {int map_count; int * segments; TYPE_1__ common; } ;
typedef int * bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bus_dmamap_dmar*,int ) ;
 void* FUNC_3 (int,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(bus_dma_tag_t VAR_4, int VAR_5, bus_dmamap_t *VAR_6)
{
 struct bus_dma_tag_dmar *VAR_7;
 struct bus_dmamap_dmar *VAR_8;

 VAR_7 = (struct bus_dma_tag_dmar *)VAR_4;
 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1,
     FUNC_0(VAR_7->common.domain), VAR_2 | VAR_3);
 if (VAR_8 == ((void*)0)) {
  *VAR_6 = ((void*)0);
  return (VAR_0);
 }
 if (VAR_7->segments == ((void*)0)) {
  VAR_7->segments = FUNC_3(sizeof(bus_dma_segment_t) *
      VAR_7->common.nsegments, VAR_1,
      FUNC_0(VAR_7->common.domain), VAR_2);
  if (VAR_7->segments == ((void*)0)) {
   FUNC_2(VAR_8, VAR_1);
   *VAR_6 = ((void*)0);
   return (VAR_0);
  }
 }
 FUNC_1(&VAR_8->map_entries);
 VAR_8->tag = VAR_7;
 VAR_8->locked = 1;
 VAR_8->cansleep = 0;
 VAR_7->map_count++;
 *VAR_6 = (bus_dmamap_t)VAR_8;

 return (0);
}
