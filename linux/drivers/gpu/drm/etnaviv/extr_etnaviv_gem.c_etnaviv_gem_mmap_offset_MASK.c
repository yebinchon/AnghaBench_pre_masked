
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct drm_gem_object {int vma_node; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_gem_object *VAR_0, u64 *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_0(VAR_0->dev->dev, "could not allocate mmap offset\n");
 else
  *VAR_1 = FUNC_2(&VAR_0->vma_node);

 return VAR_2;
}
