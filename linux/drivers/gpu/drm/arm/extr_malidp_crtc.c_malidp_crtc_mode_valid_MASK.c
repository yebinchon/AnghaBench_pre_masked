
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_hw_device {int pxlclk; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_display_mode {int crtc_clock; } ;
struct drm_crtc {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (char*,long) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (int ,long) ;
 struct malidp_drm* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status FUNC_3(struct drm_crtc *VAR_2,
         const struct drm_display_mode *VAR_3)
{
 struct malidp_drm *VAR_4 = FUNC_2(VAR_2);
 struct malidp_hw_device *VAR_5 = VAR_4->dev;





 long VAR_6, VAR_7 = VAR_3->crtc_clock * 1000;

 if (VAR_7) {
  VAR_6 = FUNC_1(VAR_5->pxlclk, VAR_7);
  if (VAR_6 != VAR_7) {
   FUNC_0("pxlclk doesn't support %ld Hz\n",
      VAR_7);
   return VAR_0;
  }
 }

 return VAR_1;
}
