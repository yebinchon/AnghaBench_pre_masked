
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_uncore*,int ,int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_10)
{
 struct intel_uncore *VAR_11 = &VAR_10->uncore;

 FUNC_2(VAR_11, VAR_8, VAR_3);
 FUNC_2(VAR_11, VAR_9, 0);
 FUNC_2(VAR_11, VAR_2, 0);
 FUNC_2(VAR_11, VAR_6, 0);
 FUNC_3(VAR_11, VAR_1, 0);
 FUNC_2(VAR_11,
      VAR_5,
      FUNC_1(VAR_4));


 FUNC_2(VAR_11,
      VAR_0,
      FUNC_0(VAR_7));
}
