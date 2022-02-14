
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {struct drm_device* dev; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dev; } ;
typedef enum mode_set_atomic { ____Placeholder_mode_set_atomic } mode_set_atomic ;


 int VAR_0 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_framebuffer*,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct drm_crtc *VAR_1,
          struct drm_framebuffer *VAR_2,
          int VAR_3, int VAR_4, enum mode_set_atomic VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_0(VAR_1->dev);
 struct drm_device *VAR_7 = VAR_6->dev;

 if (VAR_5 == VAR_0)
  FUNC_2(VAR_7);
 else
  FUNC_1(VAR_7);

 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, 1);
}
