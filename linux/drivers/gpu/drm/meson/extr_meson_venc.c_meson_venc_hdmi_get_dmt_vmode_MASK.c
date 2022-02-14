
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dvi_settings; int video_mode; int video_mode_adv; int vso_begin; int vso_end; int vso_eline_present; scalar_t__ max_lncnt; scalar_t__ vso_eline; scalar_t__ vso_bline; scalar_t__ hso_end; scalar_t__ hso_begin; scalar_t__ vavon_bline; scalar_t__ vavon_eline; scalar_t__ havon_begin; scalar_t__ havon_end; scalar_t__ max_pxcnt; } ;
union meson_hdmi_venc_mode {TYPE_1__ encp; } ;
struct drm_display_mode {scalar_t__ vtotal; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ vdisplay; scalar_t__ hdisplay; scalar_t__ htotal; } ;


 int FUNC_0 (union meson_hdmi_venc_mode*,int ,int) ;

void FUNC_1(const struct drm_display_mode *VAR_0,
       union meson_hdmi_venc_mode *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->encp.dvi_settings = 0x21;
 VAR_1->encp.video_mode = 0x4040;
 VAR_1->encp.video_mode_adv = 0x18;
 VAR_1->encp.max_pxcnt = VAR_0->htotal - 1;
 VAR_1->encp.havon_begin = VAR_0->htotal - VAR_0->hsync_start;
 VAR_1->encp.havon_end = VAR_1->encp.havon_begin +
       VAR_0->hdisplay - 1;
 VAR_1->encp.vavon_bline = VAR_0->vtotal - VAR_0->vsync_start;
 VAR_1->encp.vavon_eline = VAR_1->encp.vavon_bline +
         VAR_0->vdisplay - 1;
 VAR_1->encp.hso_begin = 0;
 VAR_1->encp.hso_end = VAR_0->hsync_end - VAR_0->hsync_start;
 VAR_1->encp.vso_begin = 30;
 VAR_1->encp.vso_end = 50;
 VAR_1->encp.vso_bline = 0;
 VAR_1->encp.vso_eline = VAR_0->vsync_end - VAR_0->vsync_start;
 VAR_1->encp.vso_eline_present = 1;
 VAR_1->encp.max_lncnt = VAR_0->vtotal - 1;
}
