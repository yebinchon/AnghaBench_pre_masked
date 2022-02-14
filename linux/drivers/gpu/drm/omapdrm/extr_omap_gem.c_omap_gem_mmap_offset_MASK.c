
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_gem_object {int vma_node; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_gem_object*,size_t) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct drm_gem_object*) ;

u64 FUNC_4(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 int VAR_2;
 size_t VAR_3;


 VAR_3 = FUNC_3(VAR_0);
 VAR_2 = FUNC_1(VAR_0, VAR_3);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "could not allocate mmap offset\n");
  return 0;
 }

 return FUNC_2(&VAR_0->vma_node);
}
