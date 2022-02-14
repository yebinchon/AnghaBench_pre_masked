
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int name; int mmio_base; int uncore; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct intel_engine_cs*,int ) ;
 int FUNC_2 (struct intel_engine_cs*,int (*) (int ),int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct drm_i915_private*,int,int) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_8(struct intel_engine_cs *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->i915;

 if (!FUNC_3(VAR_5, 6, 7))
  return;


 FUNC_5((FUNC_1(VAR_4, VAR_3) & VAR_2) == 0);

 FUNC_2(VAR_4, FUNC_4,
       FUNC_6(VAR_1 |
     VAR_0));
 if (FUNC_7(VAR_4->uncore,
        FUNC_4(VAR_4->mmio_base),
        VAR_0, 0,
        1000))
  FUNC_0("%s: wait for SyncFlush to complete for TLB invalidation timed out\n",
     VAR_4->name);
}
