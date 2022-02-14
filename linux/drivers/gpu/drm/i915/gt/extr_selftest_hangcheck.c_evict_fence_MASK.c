
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct evict_vma {TYPE_3__* vma; int completion; } ;
struct TYPE_8__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_9__ {int obj; TYPE_1__* vm; } ;
struct TYPE_7__ {struct drm_i915_private* i915; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_3)
{
 struct evict_vma *VAR_4 = VAR_3;
 struct drm_i915_private *VAR_5 = VAR_4->vma->vm->i915;
 int VAR_6;

 FUNC_0(&VAR_4->completion);

 FUNC_6(&VAR_5->drm.struct_mutex);


 VAR_6 = FUNC_1(VAR_4->vma->obj, VAR_0, 512);
 if (VAR_6) {
  FUNC_8("Invalid Y-tiling settings; err:%d\n", VAR_6);
  goto out_unlock;
 }

 VAR_6 = FUNC_2(VAR_4->vma, 0, 0, VAR_1 | VAR_2);
 if (VAR_6) {
  FUNC_8("Unable to pin vma for Y-tiled fence; err:%d\n", VAR_6);
  goto out_unlock;
 }

 VAR_6 = FUNC_3(VAR_4->vma);
 FUNC_4(VAR_4->vma);
 if (VAR_6) {
  FUNC_8("Unable to pin Y-tiled fence; err:%d\n", VAR_6);
  goto out_unlock;
 }

 FUNC_5(VAR_4->vma);

out_unlock:
 FUNC_7(&VAR_5->drm.struct_mutex);

 return VAR_6;
}
