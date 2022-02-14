
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {int uncore; } ;
struct TYPE_3__ {int has_modular_fia; } ;
struct TYPE_4__ {TYPE_1__ display; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_2)
{
 if (!FUNC_0(VAR_2)->display.has_modular_fia)
  return 0;

 return FUNC_2(&VAR_2->uncore,
     FUNC_1(VAR_0)) & VAR_1;
}
