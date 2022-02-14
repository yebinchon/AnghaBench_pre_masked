
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int refcount; struct drm_device* dev; } ;
struct drm_device {int struct_mutex; TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ gem_free_object; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct drm_gem_object *VAR_1)
{
 struct drm_device *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->dev;

 if (VAR_2->driver->gem_free_object) {
  FUNC_2(&VAR_2->struct_mutex);
  if (FUNC_1(&VAR_1->refcount, VAR_0,
    &VAR_2->struct_mutex))
   FUNC_3(&VAR_2->struct_mutex);
 } else {
  FUNC_0(&VAR_1->refcount, VAR_0);
 }
}
