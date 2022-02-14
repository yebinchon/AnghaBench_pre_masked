
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct nouveau_fbdev {int surf2d; int clip; int rop; int patt; int gdi; int blit; int twod; TYPE_2__ helper; } ;
struct nouveau_drm {scalar_t__ channel; struct nouveau_fbdev* fbcon; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct drm_device *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_3(VAR_1);
 struct nouveau_fbdev *VAR_3 = VAR_2->fbcon;
 if (VAR_3 && VAR_2->channel) {
  FUNC_0();
  if (VAR_3->helper.fbdev)
   VAR_3->helper.fbdev->flags |= VAR_0;
  FUNC_1();
  FUNC_2(VAR_2->channel);
  FUNC_4(&VAR_3->twod);
  FUNC_4(&VAR_3->blit);
  FUNC_4(&VAR_3->gdi);
  FUNC_4(&VAR_3->patt);
  FUNC_4(&VAR_3->rop);
  FUNC_4(&VAR_3->clip);
  FUNC_4(&VAR_3->surf2d);
 }
}
