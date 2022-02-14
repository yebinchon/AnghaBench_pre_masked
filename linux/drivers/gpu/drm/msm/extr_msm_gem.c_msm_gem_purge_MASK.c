
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_gem_object {int lock; int madv; } ;
struct drm_gem_object {int import_attach; int filp; int vma_node; struct drm_device* dev; } ;
struct drm_device {TYPE_1__* anon_inode; int struct_mutex; } ;
typedef int loff_t ;
typedef enum msm_gem_lock { ____Placeholder_msm_gem_lock } msm_gem_lock ;
struct TYPE_5__ {int i_mapping; } ;
struct TYPE_4__ {int i_mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (int *,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct msm_gem_object*) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct drm_gem_object*) ;
 int FUNC_11 (struct drm_gem_object*) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 struct msm_gem_object* FUNC_13 (struct drm_gem_object*) ;

void FUNC_14(struct drm_gem_object *VAR_1, enum msm_gem_lock VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct msm_gem_object *VAR_4 = FUNC_13(VAR_1);

 FUNC_0(!FUNC_7(&VAR_3->struct_mutex));
 FUNC_0(!FUNC_5(VAR_4));
 FUNC_0(VAR_1->import_attach);

 FUNC_8(&VAR_4->lock, VAR_2);

 FUNC_10(VAR_1);

 FUNC_6(VAR_1);

 FUNC_11(VAR_1);

 VAR_4->madv = VAR_0;

 FUNC_2(&VAR_1->vma_node, VAR_3->anon_inode->i_mapping);
 FUNC_1(VAR_1);






 FUNC_12(FUNC_3(VAR_1->filp), 0, (loff_t)-1);

 FUNC_4(FUNC_3(VAR_1->filp)->i_mapping,
   0, (loff_t)-1);

 FUNC_9(&VAR_4->lock);
}
