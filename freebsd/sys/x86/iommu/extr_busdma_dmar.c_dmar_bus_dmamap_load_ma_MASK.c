
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_page {int dummy; } ;
struct bus_dmamap_dmar {int dummy; } ;
struct bus_dma_tag_dmar {int dummy; } ;
typedef int bus_size_t ;
typedef scalar_t__ bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int FUNC_0 (struct bus_dma_tag_dmar*,struct bus_dmamap_dmar*,struct vm_page**,int,int ,int,int *,int*) ;

__attribute__((used)) static int
FUNC_1(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1,
    struct vm_page **VAR_2, bus_size_t VAR_3, int VAR_4, int VAR_5,
    bus_dma_segment_t *VAR_6, int *VAR_7)
{
 struct bus_dma_tag_dmar *VAR_8;
 struct bus_dmamap_dmar *VAR_9;

 VAR_8 = (struct bus_dma_tag_dmar *)VAR_0;
 VAR_9 = (struct bus_dmamap_dmar *)VAR_1;
 return (FUNC_0(VAR_8, VAR_9, VAR_2, VAR_4, VAR_3,
     VAR_5, VAR_6, VAR_7));
}
