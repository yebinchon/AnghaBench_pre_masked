
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int start; } ;
struct TYPE_6__ {int color_adjust; } ;
struct TYPE_9__ {int is_ggtt; int (* cleanup ) (TYPE_4__*) ;TYPE_1__ mm; int has_read_only; struct drm_i915_private* i915; } ;
struct i915_ggtt {int mappable_end; TYPE_2__ gmadr; int mtrr; TYPE_4__ vm; int iomap; } ;
struct TYPE_8__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_3__ drm; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct i915_ggtt*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(struct i915_ggtt *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->vm.i915;
 int VAR_5 = 0;

 FUNC_7(&VAR_4->drm.struct_mutex);

 FUNC_4(&VAR_3->vm, VAR_1);

 VAR_3->vm.is_ggtt = 1;


 VAR_3->vm.has_read_only = FUNC_2(VAR_4);

 if (!FUNC_0(VAR_4) && !FUNC_1(VAR_4))
  VAR_3->vm.mm.color_adjust = VAR_2;

 if (!FUNC_6(&VAR_3->iomap,
    VAR_3->gmadr.start,
    VAR_3->mappable_end)) {
  VAR_3->vm.cleanup(&VAR_3->vm);
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_3->mtrr = FUNC_3(VAR_3->gmadr.start, VAR_3->mappable_end);

 FUNC_5(VAR_3);

out:
 FUNC_8(&VAR_4->drm.struct_mutex);

 return VAR_5;
}
