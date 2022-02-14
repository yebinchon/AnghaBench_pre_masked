
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_msm_gem_madvise {int madv; int retained; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, void *VAR_3,
  struct drm_file *VAR_4)
{
 struct drm_msm_gem_madvise *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6;
 int VAR_7;

 switch (VAR_5->madv) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = FUNC_3(&VAR_2->struct_mutex);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_5->handle);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto unlock;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_5->madv);
 if (VAR_7 >= 0) {
  VAR_5->retained = VAR_7;
  VAR_7 = 0;
 }

 FUNC_1(VAR_6);

unlock:
 FUNC_4(&VAR_2->struct_mutex);
 return VAR_7;
}
