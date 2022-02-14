
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int vma_node; struct drm_device* dev; } ;
struct drm_device {int vma_offset_manager; } ;


 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_1->vma_offset_manager, &VAR_0->vma_node);
}
