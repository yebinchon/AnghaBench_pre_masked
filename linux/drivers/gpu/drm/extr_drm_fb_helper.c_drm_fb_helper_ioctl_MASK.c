
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_info {struct drm_fb_helper* par; } ;
struct TYPE_4__ {TYPE_1__* modesets; } ;
struct drm_fb_helper {int lock; TYPE_2__ client; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct fb_info *VAR_2, unsigned int VAR_3,
   unsigned long VAR_4)
{
 struct drm_fb_helper *VAR_5 = VAR_2->par;
 struct drm_device *VAR_6 = VAR_5->dev;
 struct drm_crtc *VAR_7;
 int VAR_8 = 0;

 FUNC_5(&VAR_5->lock);
 if (!FUNC_3(VAR_6)) {
  VAR_8 = -VAR_0;
  goto unlock;
 }

 switch (VAR_3) {
 case 128:
  VAR_7 = VAR_5->client.modesets[0].crtc;






  VAR_8 = FUNC_0(VAR_7);
  if (!VAR_8) {
   FUNC_2(VAR_7);
   FUNC_1(VAR_7);
  }

  VAR_8 = 0;
  break;
 default:
  VAR_8 = -VAR_1;
 }

 FUNC_4(VAR_6);
unlock:
 FUNC_6(&VAR_5->lock);
 return VAR_8;
}
