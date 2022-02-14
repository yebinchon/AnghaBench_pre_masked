
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flags; int context_offs; int context_lost_counter; } ;
struct TYPE_10__ {TYPE_4__ omap4; } ;
struct omap_hwmod {TYPE_5__ prcm; TYPE_3__* clkdm; } ;
struct TYPE_7__ {TYPE_1__* ptr; } ;
struct TYPE_8__ {TYPE_2__ pwrdm; } ;
struct TYPE_6__ {int prcm_offs; int prcm_partition; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct omap_hwmod *VAR_1)
{
 if (VAR_1->prcm.omap4.flags & VAR_0)
  return;

 if (!FUNC_1(VAR_1->clkdm->pwrdm.ptr->prcm_partition,
       VAR_1->clkdm->pwrdm.ptr->prcm_offs,
       VAR_1->prcm.omap4.context_offs))
  return;

 VAR_1->prcm.omap4.context_lost_counter++;
 FUNC_0(VAR_1->clkdm->pwrdm.ptr->prcm_partition,
      VAR_1->clkdm->pwrdm.ptr->prcm_offs,
      VAR_1->prcm.omap4.context_offs);
}
