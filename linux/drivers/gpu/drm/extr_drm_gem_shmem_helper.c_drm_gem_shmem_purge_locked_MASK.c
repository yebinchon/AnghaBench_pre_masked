
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_gem_shmem_object {int madv; TYPE_3__* sgt; } ;
struct drm_gem_object {int filp; int vma_node; struct drm_device* dev; } ;
struct drm_device {TYPE_1__* anon_inode; int dev; } ;
typedef int loff_t ;
struct TYPE_8__ {int nents; int sgl; } ;
struct TYPE_7__ {int i_mapping; } ;
struct TYPE_6__ {int i_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_shmem_object*) ;
 int FUNC_4 (struct drm_gem_shmem_object*) ;
 int FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;
 struct drm_gem_shmem_object* FUNC_11 (struct drm_gem_object*) ;

void FUNC_12(struct drm_gem_object *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_gem_shmem_object *VAR_3 = FUNC_11(VAR_1);

 FUNC_0(!FUNC_3(VAR_3));

 FUNC_1(VAR_1->dev->dev, VAR_3->sgt->sgl,
       VAR_3->sgt->nents, VAR_0);
 FUNC_9(VAR_3->sgt);
 FUNC_8(VAR_3->sgt);
 VAR_3->sgt = ((void*)0);

 FUNC_4(VAR_3);

 VAR_3->madv = -1;

 FUNC_5(&VAR_1->vma_node, VAR_2->anon_inode->i_mapping);
 FUNC_2(VAR_1);






 FUNC_10(FUNC_6(VAR_1->filp), 0, (loff_t)-1);

 FUNC_7(FUNC_6(VAR_1->filp)->i_mapping,
   0, (loff_t)-1);
}
