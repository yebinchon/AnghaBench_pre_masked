
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct qxl_release {int dummy; } ;
struct qxl_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct qxl_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct qxl_release*,struct qxl_bo*) ;

__attribute__((used)) static int FUNC_4(struct drm_file *VAR_1, uint64_t VAR_2,
         struct qxl_release *VAR_3, struct qxl_bo **VAR_4)
{
 struct drm_gem_object *VAR_5;
 struct qxl_bo *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5);

 VAR_7 = FUNC_3(VAR_3, VAR_6);
 FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;

 *VAR_4 = VAR_6;
 return 0;
}
