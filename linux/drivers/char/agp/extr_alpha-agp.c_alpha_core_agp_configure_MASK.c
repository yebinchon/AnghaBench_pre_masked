
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bus_base; } ;
struct TYPE_5__ {TYPE_1__ aperture; } ;
typedef TYPE_2__ alpha_agp_info ;
struct TYPE_6__ {int gart_bus_addr; TYPE_2__* dev_private_data; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 alpha_agp_info *VAR_1 = VAR_0->dev_private_data;
 VAR_0->gart_bus_addr = VAR_1->aperture.bus_base;
 return 0;
}
