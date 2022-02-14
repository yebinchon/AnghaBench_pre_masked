
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int vma_node; } ;
struct udl_gem_object {TYPE_1__ base; } ;
struct udl_device {int gem_lock; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct udl_device* FUNC_6 (struct drm_device*) ;
 struct udl_gem_object* FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (struct udl_gem_object*) ;

int FUNC_9(struct drm_file *VAR_1, struct drm_device *VAR_2,
   uint32_t VAR_3, uint64_t *VAR_4)
{
 struct udl_gem_object *VAR_5;
 struct drm_gem_object *VAR_6;
 struct udl_device *VAR_7 = FUNC_6(VAR_2);
 int VAR_8 = 0;

 FUNC_4(&VAR_7->gem_lock);
 VAR_6 = FUNC_1(VAR_1, VAR_3);
 if (VAR_6 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto unlock;
 }
 VAR_5 = FUNC_7(VAR_6);

 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8)
  goto out;

 *VAR_4 = FUNC_3(&VAR_5->base.vma_node);

out:
 FUNC_2(&VAR_5->base);
unlock:
 FUNC_5(&VAR_7->gem_lock);
 return VAR_8;
}
