
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 void* FUNC_0 (int) ;
 struct qxl_bo* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct qxl_bo*,void**) ;

void *FUNC_3(struct drm_gem_object *VAR_0)
{
 struct qxl_bo *VAR_1 = FUNC_1(VAR_0);
 void *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, &VAR_2);
 if (VAR_3 < 0)
  return FUNC_0(VAR_3);

 return VAR_2;
}
