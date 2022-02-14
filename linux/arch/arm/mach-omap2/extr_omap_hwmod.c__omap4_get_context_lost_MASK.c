
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context_lost_counter; } ;
struct TYPE_4__ {TYPE_1__ omap4; } ;
struct omap_hwmod {TYPE_2__ prcm; } ;



__attribute__((used)) static int FUNC_0(struct omap_hwmod *VAR_0)
{
 return VAR_0->prcm.omap4.context_lost_counter;
}
