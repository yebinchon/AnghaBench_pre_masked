
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_dmamap_dmar {int locked; int cansleep; } ;
struct TYPE_2__ {int lockfuncarg; int (* lockfunc ) (int ,int ) ;} ;
struct bus_dma_tag_dmar {int * segments; TYPE_1__ common; } ;
typedef scalar_t__ bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bus_dma_segment_t *
FUNC_2(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2,
    bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
 struct bus_dma_tag_dmar *VAR_6;
 struct bus_dmamap_dmar *VAR_7;

 VAR_6 = (struct bus_dma_tag_dmar *)VAR_1;
 VAR_7 = (struct bus_dmamap_dmar *)VAR_2;

 if (!VAR_7->locked) {
  FUNC_0(VAR_7->cansleep,
      ("map not locked and not sleepable context %p", VAR_7));





  (VAR_6->common.lockfunc)(VAR_6->common.lockfuncarg, VAR_0);
  VAR_7->locked = 1;
 }

 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_6->segments;
 return (VAR_3);
}
