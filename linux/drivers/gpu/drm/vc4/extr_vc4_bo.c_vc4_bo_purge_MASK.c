
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * vaddr; int paddr; } ;
struct vc4_bo {scalar_t__ madv; TYPE_2__ base; int madv_lock; } ;
struct drm_gem_object {int size; int vma_node; struct drm_device* dev; } ;
struct drm_device {int dev; TYPE_1__* anon_inode; } ;
struct TYPE_3__ {int i_mapping; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct vc4_bo* FUNC_4 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_5(struct drm_gem_object *VAR_2)
{
 struct vc4_bo *VAR_3 = FUNC_4(VAR_2);
 struct drm_device *VAR_4 = VAR_2->dev;

 FUNC_0(!FUNC_3(&VAR_3->madv_lock));
 FUNC_0(VAR_3->madv != VAR_0);

 FUNC_2(&VAR_2->vma_node, VAR_4->anon_inode->i_mapping);

 FUNC_1(VAR_4->dev, VAR_2->size, VAR_3->base.vaddr, VAR_3->base.paddr);
 VAR_3->base.vaddr = ((void*)0);
 VAR_3->madv = VAR_1;
}
