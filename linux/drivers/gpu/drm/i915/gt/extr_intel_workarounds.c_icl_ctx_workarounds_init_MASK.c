
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int uncore; struct drm_i915_private* i915; } ;
struct i915_wa_list {int dummy; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int ,int ) ;
 int VAR_17 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i915_wa_list*,int ,int) ;
 int FUNC_6 (struct i915_wa_list*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct intel_engine_cs *VAR_18,
         struct i915_wa_list *VAR_19)
{
 struct drm_i915_private *VAR_20 = VAR_18->i915;


 FUNC_5(VAR_19,
   VAR_10,
   FUNC_4(VAR_18->uncore, VAR_10) |
   VAR_9);




 if (FUNC_0(VAR_20, VAR_15, VAR_16))
  FUNC_1(VAR_7,
      VAR_17);
 FUNC_1(VAR_14, VAR_13);




 if (FUNC_0(VAR_20, VAR_15, VAR_15))
  FUNC_1(VAR_7,
      VAR_6);


 if (FUNC_0(VAR_20, VAR_15, VAR_15))
  FUNC_1(VAR_4,
      VAR_3);


 FUNC_6(VAR_19,
      VAR_1,
      0,
      FUNC_3(VAR_0));


 FUNC_2(VAR_8,
       VAR_11,
       VAR_12);


 FUNC_1(VAR_2,
     VAR_5);
}
