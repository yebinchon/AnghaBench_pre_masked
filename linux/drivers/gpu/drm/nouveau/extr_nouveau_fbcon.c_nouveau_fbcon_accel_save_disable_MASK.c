
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_drm {TYPE_2__* fbcon; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {TYPE_3__* fbdev; } ;
struct TYPE_5__ {TYPE_1__ helper; int saved_flags; } ;


 int VAR_0 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;

void
FUNC_1(struct drm_device *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->fbcon && VAR_2->fbcon->helper.fbdev) {
  VAR_2->fbcon->saved_flags = VAR_2->fbcon->helper.fbdev->flags;
  VAR_2->fbcon->helper.fbdev->flags |= VAR_0;
 }
}
