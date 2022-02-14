
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {scalar_t__ handle_count; struct drm_device* dev; } ;
struct drm_device {int object_name_lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 bool VAR_2 = 0;

 if (FUNC_0(VAR_0->handle_count == 0))
  return;







 FUNC_4(&VAR_1->object_name_lock);
 if (--VAR_0->handle_count == 0) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0);
  VAR_2 = 1;
 }
 FUNC_5(&VAR_1->object_name_lock);

 if (VAR_2)
  FUNC_3(VAR_0);
}
