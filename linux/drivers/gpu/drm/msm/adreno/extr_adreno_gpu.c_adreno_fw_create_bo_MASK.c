
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct msm_gpu {int aspace; int dev; } ;
struct firmware {scalar_t__ size; int * data; } ;
struct drm_gem_object {int dummy; } ;


 struct drm_gem_object* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*,int *,scalar_t__) ;
 void* FUNC_3 (int ,scalar_t__,int,int ,struct drm_gem_object**,int *) ;
 int FUNC_4 (struct drm_gem_object*) ;

struct drm_gem_object *FUNC_5(struct msm_gpu *VAR_2,
  const struct firmware *VAR_3, u64 *VAR_4)
{
 struct drm_gem_object *VAR_5;
 void *VAR_6;

 VAR_6 = FUNC_3(VAR_2->dev, VAR_3->size - 4,
  VAR_1 | VAR_0, VAR_2->aspace, &VAR_5, VAR_4);

 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);

 FUNC_2(VAR_6, &VAR_3->data[4], VAR_3->size - 4);

 FUNC_4(VAR_5);

 return VAR_5;
}
