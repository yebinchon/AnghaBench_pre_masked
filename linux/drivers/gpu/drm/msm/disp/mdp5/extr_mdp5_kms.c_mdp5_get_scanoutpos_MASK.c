
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {struct drm_crtc** crtcs; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int crtc_vsync_end; int crtc_vsync_start; int crtc_vtotal; int crtc_vdisplay; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 (char*,unsigned int) ;
 struct drm_encoder* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_4(struct drm_device *VAR_0, unsigned int VAR_1,
    bool VAR_2, int *VAR_3, int *VAR_4,
    ktime_t *VAR_5, ktime_t *VAR_6,
    const struct drm_display_mode *VAR_7)
{
 struct msm_drm_private *VAR_8 = VAR_0->dev_private;
 struct drm_crtc *VAR_9;
 struct drm_encoder *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_9 = VAR_8->crtcs[VAR_1];
 if (!VAR_9) {
  FUNC_0("Invalid crtc %d\n", VAR_1);
  return 0;
 }

 VAR_10 = FUNC_1(VAR_9);
 if (!VAR_10) {
  FUNC_0("no encoder found for crtc %d\n", VAR_1);
  return 0;
 }

 VAR_12 = VAR_7->crtc_vsync_end - VAR_7->crtc_vsync_start;
 VAR_13 = VAR_7->crtc_vtotal - VAR_7->crtc_vsync_end;







 VAR_14 = VAR_12 + VAR_13 + 1;

 VAR_15 = VAR_14 + VAR_7->crtc_vdisplay;


 VAR_16 = VAR_7->crtc_vtotal;

 if (VAR_5)
  *VAR_5 = FUNC_2();

 VAR_11 = FUNC_3(VAR_10);

 if (VAR_11 < VAR_14) {
  VAR_11 -= VAR_14;
 } else if (VAR_11 > VAR_15) {
  VAR_11 = VAR_11 - VAR_16 - VAR_14;
 } else {
  VAR_11 -= VAR_14;
 }

 *VAR_3 = VAR_11;
 *VAR_4 = 0;

 if (VAR_6)
  *VAR_6 = FUNC_2();

 return 1;
}
