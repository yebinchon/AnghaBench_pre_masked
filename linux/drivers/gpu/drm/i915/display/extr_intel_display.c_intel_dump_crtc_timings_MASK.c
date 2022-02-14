
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; int type; int crtc_vtotal; int crtc_vsync_end; int crtc_vsync_start; int crtc_vdisplay; int crtc_htotal; int crtc_hsync_end; int crtc_hsync_start; int crtc_hdisplay; int crtc_clock; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct drm_display_mode *VAR_0)
{
 FUNC_0("crtc timings: %d %d %d %d %d %d %d %d %d, "
        "type: 0x%x flags: 0x%x\n",
        VAR_0->crtc_clock,
        VAR_0->crtc_hdisplay, VAR_0->crtc_hsync_start,
        VAR_0->crtc_hsync_end, VAR_0->crtc_htotal,
        VAR_0->crtc_vdisplay, VAR_0->crtc_vsync_start,
        VAR_0->crtc_vsync_end, VAR_0->crtc_vtotal,
        VAR_0->type, VAR_0->flags);
}
