
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int rev; TYPE_3__* core; } ;
struct bcma_drv_cc {int capabilities_ext; TYPE_2__ pmu; TYPE_3__* core; } ;
struct bcma_bus {int dummy; } ;
struct TYPE_4__ {int rev; } ;
struct TYPE_6__ {TYPE_1__ id; struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcma_bus*,char*,int,int) ;
 TYPE_3__* FUNC_1 (struct bcma_bus*,int ) ;
 int FUNC_2 (struct bcma_drv_cc*,int ) ;
 int FUNC_3 (struct bcma_bus*,char*) ;

void FUNC_4(struct bcma_drv_cc *VAR_4)
{
 struct bcma_bus *VAR_5 = VAR_4->core->bus;
 u32 VAR_6;

 if (VAR_4->core->id.rev >= 35 &&
     VAR_4->capabilities_ext & VAR_0) {
  VAR_4->pmu.core = FUNC_1(VAR_5, VAR_3);
  if (!VAR_4->pmu.core)
   FUNC_3(VAR_5, "Couldn't find expected PMU core");
 }
 if (!VAR_4->pmu.core)
  VAR_4->pmu.core = VAR_4->core;

 VAR_6 = FUNC_2(VAR_4, VAR_1);
 VAR_4->pmu.rev = (VAR_6 & VAR_2);

 FUNC_0(VAR_5, "Found rev %u PMU (capabilities 0x%08X)\n", VAR_4->pmu.rev,
     VAR_6);
}
