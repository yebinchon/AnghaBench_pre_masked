
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vm; } ;
struct omap_hdmi {int lock; TYPE_2__* dss; TYPE_1__ cfg; } ;
struct omap_dss_device {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_4__ {int dispc; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_display_mode const*,int *) ;
 struct omap_hdmi* FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct omap_dss_device *VAR_0,
         const struct drm_display_mode *VAR_1)
{
 struct omap_hdmi *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(&VAR_2->lock);

 FUNC_1(VAR_1, &VAR_2->cfg.vm);

 FUNC_0(VAR_2->dss->dispc, VAR_1->clock * 1000);

 FUNC_4(&VAR_2->lock);
}
