
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int name; int mmio_base; int uncore; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct intel_engine_cs*,int (*) (int )) ;
 int FUNC_2 (struct intel_engine_cs*,int (*) (int ),int) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_10(struct intel_engine_cs *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->i915;

 if (FUNC_3(VAR_4) > 2) {
  FUNC_2(VAR_3,
        FUNC_6, FUNC_8(VAR_2));
  if (FUNC_9(VAR_3->uncore,
         FUNC_6(VAR_3->mmio_base),
         VAR_1,
         VAR_1,
         1000)) {
   FUNC_0("%s : timed out trying to stop ring\n",
      VAR_3->name);






   if (FUNC_1(VAR_3, FUNC_5) !=
       FUNC_1(VAR_3, FUNC_7))
    return 0;
  }
 }

 FUNC_2(VAR_3, FUNC_5, FUNC_1(VAR_3, FUNC_7));

 FUNC_2(VAR_3, FUNC_5, 0);
 FUNC_2(VAR_3, FUNC_7, 0);


 FUNC_2(VAR_3, FUNC_4, 0);

 return (FUNC_1(VAR_3, FUNC_5) & VAR_0) == 0;
}
