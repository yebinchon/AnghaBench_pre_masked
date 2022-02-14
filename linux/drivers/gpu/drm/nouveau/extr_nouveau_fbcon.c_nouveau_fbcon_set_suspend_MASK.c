
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {int fbcon_new_state; int fbcon_work; int fbcon; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct drm_device *VAR_0, int VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->fbcon)
  return;

 VAR_2->fbcon_new_state = VAR_1;




 FUNC_1(&VAR_2->fbcon_work);
}
