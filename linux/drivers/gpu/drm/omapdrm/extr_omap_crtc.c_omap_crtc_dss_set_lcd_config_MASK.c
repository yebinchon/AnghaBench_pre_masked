
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_2__* dispc_ops; TYPE_1__** channels; } ;
struct omap_crtc {int channel; int name; } ;
struct dss_lcd_mgr_config {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_4__ {int (* mgr_set_lcd_config ) (int ,int ,struct dss_lcd_mgr_config const*) ;} ;
struct TYPE_3__ {struct drm_crtc* crtc; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,struct dss_lcd_mgr_config const*) ;
 struct omap_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct omap_drm_private *VAR_0,
  enum omap_channel VAR_1,
  const struct dss_lcd_mgr_config *VAR_2)
{
 struct drm_crtc *VAR_3 = VAR_0->channels[VAR_1]->crtc;
 struct omap_crtc *VAR_4 = FUNC_2(VAR_3);

 FUNC_0("%s", VAR_4->name);
 VAR_0->dispc_ops->mgr_set_lcd_config(VAR_0->dispc, VAR_4->channel,
         VAR_2);
}
