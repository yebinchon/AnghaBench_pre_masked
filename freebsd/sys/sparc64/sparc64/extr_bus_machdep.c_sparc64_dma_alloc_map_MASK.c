
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
struct TYPE_7__ {int dt_nsegments; int dt_map_count; int * dt_segments; } ;
struct TYPE_6__ {int dm_reslist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int ,int) ;

int
FUNC_2(bus_dma_tag_t VAR_4, bus_dmamap_t *VAR_5)
{

 if (VAR_4->dt_segments == ((void*)0)) {
  VAR_4->dt_segments = (bus_dma_segment_t *)FUNC_1(
      sizeof(bus_dma_segment_t) * VAR_4->dt_nsegments, VAR_1,
      VAR_2);
  if (VAR_4->dt_segments == ((void*)0))
   return (VAR_0);
 }
 *VAR_5 = FUNC_1(sizeof(**VAR_5), VAR_1, VAR_2 | VAR_3);
 if (*VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_0(&(*VAR_5)->dm_reslist);
 VAR_4->dt_map_count++;
 return (0);
}
