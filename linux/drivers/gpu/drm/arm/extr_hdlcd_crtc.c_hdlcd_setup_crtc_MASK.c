
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlcd_drm_private {int crtc; } ;
struct drm_plane {int dummy; } ;
struct drm_device {struct hdlcd_drm_private* dev_private; } ;


 scalar_t__ FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct drm_device*,int *,struct drm_plane*,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_plane* FUNC_4 (struct drm_device*) ;

int FUNC_5(struct drm_device *VAR_2)
{
 struct hdlcd_drm_private *VAR_3 = VAR_2->dev_private;
 struct drm_plane *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_3(VAR_2, &VAR_3->crtc, VAR_4, ((void*)0),
     &VAR_0, ((void*)0));
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_3->crtc, &VAR_1);
 return 0;
}
