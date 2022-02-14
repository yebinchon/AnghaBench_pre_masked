
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* driver; } ;
struct drm_crtc {TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* enable_vblank ) (struct drm_device*,unsigned int) ;} ;
struct TYPE_3__ {int (* enable_vblank ) (struct drm_crtc*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 struct drm_crtc* FUNC_2 (struct drm_device*,unsigned int) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_device*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_1, unsigned int VAR_2)
{
 if (FUNC_1(VAR_1, VAR_0)) {
  struct drm_crtc *VAR_3 = FUNC_2(VAR_1, VAR_2);

  if (FUNC_0(!VAR_3))
   return 0;

  if (VAR_3->funcs->enable_vblank)
   return VAR_3->funcs->enable_vblank(VAR_3);
 }

 return VAR_1->driver->enable_vblank(VAR_1, VAR_2);
}
