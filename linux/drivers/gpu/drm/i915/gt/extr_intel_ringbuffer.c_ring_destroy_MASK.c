
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeline; int ring; } ;
struct intel_engine_cs {TYPE_1__ legacy; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct intel_engine_cs*,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_engine_cs*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct intel_engine_cs*) ;

__attribute__((used)) static void FUNC_9(struct intel_engine_cs *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->i915;

 FUNC_2(FUNC_1(VAR_3) > 2 &&
  (FUNC_0(VAR_2, VAR_1) & VAR_0) == 0);

 FUNC_3(VAR_2);

 FUNC_5(VAR_2->legacy.ring);
 FUNC_4(VAR_2->legacy.ring);

 FUNC_7(VAR_2->legacy.timeline);
 FUNC_6(VAR_2->legacy.timeline);

 FUNC_8(VAR_2);
}
