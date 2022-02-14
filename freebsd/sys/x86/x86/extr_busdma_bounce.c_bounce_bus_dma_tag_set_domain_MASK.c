
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_4__ {scalar_t__ map_count; int bounce_flags; int * bounce_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(bus_dma_tag_t VAR_2)
{

 FUNC_0(VAR_2->map_count == 0,
     ("bounce_bus_dma_tag_set_domain:  Domain set after use.\n"));
 if ((VAR_2->bounce_flags & VAR_0) == 0 ||
     VAR_2->bounce_zone == ((void*)0))
  return (0);
 VAR_2->bounce_flags &= ~VAR_1;
 return (FUNC_1(VAR_2));
}
