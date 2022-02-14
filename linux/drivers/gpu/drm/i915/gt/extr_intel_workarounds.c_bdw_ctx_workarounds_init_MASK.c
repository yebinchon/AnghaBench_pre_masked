
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {struct drm_i915_private* i915; } ;
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
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct intel_engine_cs*,struct i915_wa_list*) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_9,
         struct i915_wa_list *VAR_10)
{
 struct drm_i915_private *VAR_11 = VAR_9->i915;

 FUNC_2(VAR_9, VAR_10);


 FUNC_1(VAR_2, VAR_8);






 FUNC_1(VAR_1,
     VAR_0);

 FUNC_1(VAR_4,
     VAR_3);

 FUNC_1(VAR_5,

     VAR_7 |

     (FUNC_0(VAR_11) ? VAR_6 : 0));
}
