
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_overlay_manager_info {int default_color; int trans_enabled; int partial_alpha_enabled; int cpr_enable; } ;
struct omap_drm_private {int dispc; TYPE_1__* dispc_ops; } ;
struct omap_crtc {int channel; } ;
struct drm_crtc {TYPE_2__* dev; } ;
typedef int info ;
struct TYPE_4__ {struct omap_drm_private* dev_private; } ;
struct TYPE_3__ {int (* mgr_setup ) (int ,int ,struct omap_overlay_manager_info*) ;} ;


 int FUNC_0 (struct omap_overlay_manager_info*,int ,int) ;
 int FUNC_1 (int ,int ,struct omap_overlay_manager_info*) ;
 struct omap_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0)
{
 struct omap_drm_private *VAR_1 = VAR_0->dev->dev_private;
 struct omap_crtc *VAR_2 = FUNC_2(VAR_0);
 struct omap_overlay_manager_info VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.default_color = 0x000000;
 VAR_3.trans_enabled = 0;
 VAR_3.partial_alpha_enabled = 0;
 VAR_3.cpr_enable = 0;

 VAR_1->dispc_ops->mgr_setup(VAR_1->dispc, VAR_2->channel, &VAR_3);
}
