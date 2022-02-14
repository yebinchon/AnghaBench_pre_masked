
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ core_pwr_cnt; } ;
struct omap_hdmi {int core_enabled; int vdda_reg; TYPE_1__ core; } ;


 int FUNC_0 (struct omap_hdmi*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct omap_hdmi *VAR_0)
{
 if (--VAR_0->core.core_pwr_cnt)
  return;

 VAR_0->core_enabled = 0;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0->vdda_reg);
}
