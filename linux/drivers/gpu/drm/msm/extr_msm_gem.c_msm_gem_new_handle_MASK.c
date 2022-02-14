
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_4 (struct drm_device*,int ,int ) ;
 int FUNC_5 (struct drm_gem_object*,char*,char*) ;

int FUNC_6(struct drm_device *VAR_0, struct drm_file *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3, uint32_t *VAR_4,
  char *VAR_5)
{
 struct drm_gem_object *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_0, VAR_2, VAR_3);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if (VAR_5)
  FUNC_5(VAR_6, "%s", VAR_5);

 VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_4);


 FUNC_3(VAR_6);

 return VAR_7;
}
