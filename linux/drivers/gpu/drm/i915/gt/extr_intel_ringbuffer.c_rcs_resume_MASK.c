
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_engine_cs*) ;

__attribute__((used)) static int FUNC_6(struct intel_engine_cs *VAR_13)
{
 struct drm_i915_private *VAR_14 = VAR_13->i915;
 if (FUNC_1(VAR_14, 4))
  FUNC_0(VAR_3,
      FUNC_4(VAR_4));


 if (FUNC_2(VAR_14, 4, 6))
  FUNC_0(VAR_11, FUNC_4(VAR_12));







 if (FUNC_2(VAR_14, 6, 7))
  FUNC_0(VAR_11, FUNC_4(VAR_0));



 if (FUNC_1(VAR_14, 6))
  FUNC_0(VAR_5,
      FUNC_4(VAR_8));


 if (FUNC_1(VAR_14, 7))
  FUNC_0(VAR_6,
      FUNC_4(VAR_8) |
      FUNC_4(VAR_7));

 if (FUNC_1(VAR_14, 6)) {





  FUNC_0(VAR_1,
      FUNC_3(VAR_2));
 }

 if (FUNC_2(VAR_14, 6, 7))
  FUNC_0(VAR_9, FUNC_4(VAR_10));

 return FUNC_5(VAR_13);
}
