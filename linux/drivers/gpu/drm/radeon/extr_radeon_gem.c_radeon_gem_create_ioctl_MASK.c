
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int exclusive_lock; } ;
struct drm_radeon_gem_create {int handle; int flags; int initial_domain; int alignment; int size; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int ,int ,int ,int ,int,struct drm_gem_object**) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_device *VAR_1, void *VAR_2,
       struct drm_file *VAR_3)
{
 struct radeon_device *VAR_4 = VAR_1->dev_private;
 struct drm_radeon_gem_create *VAR_5 = VAR_2;
 struct drm_gem_object *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 FUNC_0(&VAR_4->exclusive_lock);

 VAR_5->size = FUNC_5(VAR_5->size, VAR_0);
 VAR_8 = FUNC_4(VAR_4, VAR_5->size, VAR_5->alignment,
         VAR_5->initial_domain, VAR_5->flags,
         0, &VAR_6);
 if (VAR_8) {
  FUNC_6(&VAR_4->exclusive_lock);
  VAR_8 = FUNC_3(VAR_4, VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_1(VAR_3, VAR_6, &VAR_7);

 FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_6(&VAR_4->exclusive_lock);
  VAR_8 = FUNC_3(VAR_4, VAR_8);
  return VAR_8;
 }
 VAR_5->handle = VAR_7;
 FUNC_6(&VAR_4->exclusive_lock);
 return 0;
}
