
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_3__ {int dm_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2)
{

 VAR_2->dm_flags &= ~VAR_0;
}
