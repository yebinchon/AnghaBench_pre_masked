
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_etnaviv_gem_cpu_fini {int handle; scalar_t__ flags; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2, void *VAR_3,
  struct drm_file *VAR_4)
{
 struct drm_etnaviv_gem_cpu_fini *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6;
 int VAR_7;

 if (VAR_5->flags)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_5->handle);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6);

 FUNC_1(VAR_6);

 return VAR_7;
}
