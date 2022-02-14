
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int vma_node; struct drm_device* dev; } ;
struct drm_device {int vma_offset_manager; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *,size_t) ;

int
FUNC_1(struct drm_gem_object *VAR_1, size_t VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;

 return FUNC_0(VAR_3->vma_offset_manager, &VAR_1->vma_node,
      VAR_2 / VAR_0);
}
