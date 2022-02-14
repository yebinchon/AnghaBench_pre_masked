
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct qxl_surface {int dummy; } ;
struct qxl_device {int dummy; } ;
struct qxl_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct qxl_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct qxl_device*,size_t,int ,int ,int,int,struct qxl_surface*,struct drm_gem_object**) ;

int FUNC_5(struct qxl_device *VAR_1,
          struct drm_file *VAR_2,
          u32 VAR_3,
          size_t VAR_4,
          struct qxl_surface *VAR_5,
          struct qxl_bo **VAR_6,
          uint32_t *VAR_7)
{
 struct drm_gem_object *VAR_8;
 int VAR_9;

 FUNC_0(!VAR_6);
 FUNC_0(!VAR_7);

 VAR_9 = FUNC_4(VAR_1, VAR_4, 0,
      VAR_3,
      0, 0, VAR_5,
      &VAR_8);
 if (VAR_9)
  return -VAR_0;
 VAR_9 = FUNC_1(VAR_2, VAR_8, VAR_7);
 if (VAR_9)
  return VAR_9;

 *VAR_6 = FUNC_3(VAR_8);
 FUNC_2(VAR_8);
 return 0;
}
