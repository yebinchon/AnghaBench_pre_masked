
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int retire_work; } ;
struct drm_i915_private {TYPE_1__ gem; } ;
struct TYPE_4__ {int dev; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_i915_gem_object *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_2->base.dev);
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->base);
 if (FUNC_4(!VAR_4))
  return 0;


 do {
  VAR_4 = FUNC_3(VAR_3,
          VAR_0,
          VAR_1);
  if (VAR_4)
   break;

  FUNC_2(VAR_3);
  VAR_4 = FUNC_0(&VAR_2->base);
  if (!VAR_4)
   break;

 } while (FUNC_1(&VAR_3->gem.retire_work));

 return VAR_4;
}
