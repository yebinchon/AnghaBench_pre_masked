
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_gem_object {int lock; } ;
struct drm_gem_object {int vma_node; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct msm_gem_object* FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static uint64_t FUNC_6(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct msm_gem_object *VAR_2 = FUNC_5(VAR_0);
 int VAR_3;

 FUNC_1(!FUNC_4(&VAR_2->lock));


 VAR_3 = FUNC_2(VAR_0);

 if (VAR_3) {
  FUNC_0(VAR_1->dev, "could not allocate mmap offset\n");
  return 0;
 }

 return FUNC_3(&VAR_0->vma_node);
}
