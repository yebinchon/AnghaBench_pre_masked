
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_4__ {scalar_t__ dt_map_count; scalar_t__ dt_ref_count; struct TYPE_4__* dt_segments; struct TYPE_4__* dt_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(bus_dma_tag_t VAR_2)
{
 bus_dma_tag_t VAR_3;

 if (VAR_2 != ((void*)0)) {
  if (VAR_2->dt_map_count != 0)
   return (VAR_0);
  while (VAR_2 != ((void*)0)) {
   VAR_3 = VAR_2->dt_parent;
   FUNC_0(&VAR_2->dt_ref_count, 1);
   if (VAR_2->dt_ref_count == 0) {
    if (VAR_2->dt_segments != ((void*)0))
     FUNC_1(VAR_2->dt_segments, VAR_1);
    FUNC_1(VAR_2, VAR_1);





    VAR_2 = VAR_3;
   } else
    VAR_2 = ((void*)0);
  }
 }
 return (0);
}
