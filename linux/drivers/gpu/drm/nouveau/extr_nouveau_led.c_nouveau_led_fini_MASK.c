
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {TYPE_1__* led; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int led; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

void
FUNC_3(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->led) {
  FUNC_1(&VAR_1->led->led);
  FUNC_0(VAR_1->led);
  VAR_1->led = ((void*)0);
 }
}
