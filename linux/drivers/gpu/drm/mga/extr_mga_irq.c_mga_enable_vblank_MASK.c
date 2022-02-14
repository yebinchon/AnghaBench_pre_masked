
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_mga_private_t ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct drm_device *VAR_3, unsigned int VAR_4)
{
 drm_mga_private_t *VAR_5 = (drm_mga_private_t *) VAR_3->dev_private;

 if (VAR_4 != 0) {
  FUNC_0("tried to enable vblank on non-existent crtc %u\n",
     VAR_4);
  return 0;
 }

 FUNC_1(VAR_0, VAR_2 | VAR_1);
 return 0;
}
