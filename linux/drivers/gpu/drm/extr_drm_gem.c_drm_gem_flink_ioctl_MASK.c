
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct drm_gem_object {scalar_t__ handle_count; int name; } ;
struct drm_gem_flink {scalar_t__ name; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int object_name_lock; int object_name_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *,struct drm_gem_object*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct drm_device *VAR_4, void *VAR_5,
      struct drm_file *VAR_6)
{
 struct drm_gem_flink *VAR_7 = VAR_5;
 struct drm_gem_object *VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_4, VAR_0))
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6, VAR_7->handle);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_4(&VAR_4->object_name_lock);

 if (VAR_8->handle_count == 0) {
  VAR_9 = -VAR_1;
  goto err;
 }

 if (!VAR_8->name) {
  VAR_9 = FUNC_3(&VAR_4->object_name_idr, VAR_8, 1, 0, VAR_3);
  if (VAR_9 < 0)
   goto err;

  VAR_8->name = VAR_9;
 }

 VAR_7->name = (uint64_t) VAR_8->name;
 VAR_9 = 0;

err:
 FUNC_5(&VAR_4->object_name_lock);
 FUNC_2(VAR_8);
 return VAR_9;
}
