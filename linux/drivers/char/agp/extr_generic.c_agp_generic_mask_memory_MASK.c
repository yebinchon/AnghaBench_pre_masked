
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_bridge_data {TYPE_2__* driver; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_4__ {TYPE_1__* masks; } ;
struct TYPE_3__ {unsigned long mask; } ;



unsigned long FUNC_0(struct agp_bridge_data *VAR_0,
          dma_addr_t VAR_1, int VAR_2)
{

 if (VAR_0->driver->masks)
  return VAR_1 | VAR_0->driver->masks[0].mask;
 else
  return VAR_1;
}
