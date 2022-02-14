
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {TYPE_1__* import_attach; struct drm_device* dev; } ;
struct msm_gem_object {int lock; int sgt; scalar_t__ pages; scalar_t__ vaddr; int mm_list; struct drm_gem_object base; } ;
struct drm_device {int struct_mutex; } ;
struct TYPE_2__ {int dmabuf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*,int ) ;
 int FUNC_4 (struct msm_gem_object*) ;
 int FUNC_5 (struct msm_gem_object*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_gem_object*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct drm_gem_object*) ;
 int FUNC_13 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_14(struct msm_gem_object *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->base;
 struct drm_device *VAR_2 = VAR_1->dev;

 FUNC_0(!FUNC_9(&VAR_2->struct_mutex));


 FUNC_0(FUNC_4(VAR_0));

 FUNC_7(&VAR_0->mm_list);

 FUNC_10(&VAR_0->lock);

 FUNC_12(VAR_1);

 if (VAR_1->import_attach) {
  if (VAR_0->vaddr)
   FUNC_1(VAR_1->import_attach->dmabuf, VAR_0->vaddr);




  if (VAR_0->pages)
   FUNC_6(VAR_0->pages);

  FUNC_3(VAR_1, VAR_0->sgt);
 } else {
  FUNC_8(VAR_1);
  FUNC_13(VAR_1);
 }

 FUNC_2(VAR_1);

 FUNC_11(&VAR_0->lock);
 FUNC_5(VAR_0);
}
