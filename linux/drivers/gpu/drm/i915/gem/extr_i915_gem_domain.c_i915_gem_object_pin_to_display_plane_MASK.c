
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_vma {int display_alignment; } ;
struct i915_ggtt_view {scalar_t__ type; } ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_gem_object {int pin_global; int read_domains; TYPE_1__ base; } ;


 int VAR_0 ;
 struct i915_vma* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 struct i915_vma* FUNC_5 (struct drm_i915_gem_object*,struct i915_ggtt_view const*,int ,int ,unsigned int) ;
 int FUNC_6 (struct drm_i915_gem_object*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;

struct i915_vma *
FUNC_9(struct drm_i915_gem_object *VAR_8,
         u32 VAR_9,
         const struct i915_ggtt_view *VAR_10,
         unsigned int VAR_11)
{
 struct i915_vma *VAR_12;
 int VAR_13;

 FUNC_4(VAR_8);




 VAR_8->pin_global++;
 VAR_13 = FUNC_6(VAR_8,
           FUNC_1(FUNC_8(VAR_8->base.dev)) ?
           VAR_2 : VAR_1);
 if (VAR_13) {
  VAR_12 = FUNC_0(VAR_13);
  goto err_unpin_global;
 }
 VAR_12 = FUNC_0(-VAR_0);
 if ((VAR_11 & VAR_5) == 0 &&
     (!VAR_10 || VAR_10->type == VAR_4))
  VAR_12 = FUNC_5(VAR_8, VAR_10, 0, VAR_9,
            VAR_11 |
            VAR_5 |
            VAR_6);
 if (FUNC_2(VAR_12))
  VAR_12 = FUNC_5(VAR_8, VAR_10, 0, VAR_9, VAR_11);
 if (FUNC_2(VAR_12))
  goto err_unpin_global;

 VAR_12->display_alignment = FUNC_7(VAR_7, VAR_12->display_alignment, VAR_9);

 FUNC_3(VAR_8);




 VAR_8->read_domains |= VAR_3;

 return VAR_12;

err_unpin_global:
 VAR_8->pin_global--;
 return VAR_12;
}
