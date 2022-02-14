
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {int bo_lock; TYPE_1__* bo_labels; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_4__ {struct drm_gem_object base; } ;
struct vc4_bo {size_t label; TYPE_2__ base; int madv_lock; int usecnt; int madv; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {size_t size_allocated; int num_allocated; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct vc4_bo* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;

struct drm_gem_object *FUNC_7(struct drm_device *VAR_4, size_t VAR_5)
{
 struct vc4_dev *VAR_6 = FUNC_6(VAR_4);
 struct vc4_bo *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->madv = VAR_3;
 FUNC_5(&VAR_7->usecnt, 0);
 FUNC_2(&VAR_7->madv_lock);
 FUNC_3(&VAR_6->bo_lock);
 VAR_7->label = VAR_2;
 VAR_6->bo_labels[VAR_2].num_allocated++;
 VAR_6->bo_labels[VAR_2].size_allocated += VAR_5;
 FUNC_4(&VAR_6->bo_lock);

 return &VAR_7->base.base;
}
