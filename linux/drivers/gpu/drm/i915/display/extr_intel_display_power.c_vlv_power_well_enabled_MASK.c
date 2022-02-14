
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int idx; } ;
struct TYPE_4__ {TYPE_1__ vlv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;

__attribute__((used)) static bool FUNC_7(struct drm_i915_private *VAR_2,
       struct i915_power_well *VAR_3)
{
 int VAR_4 = VAR_3->desc->vlv.idx;
 bool VAR_5 = 0;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_0(VAR_4);
 VAR_8 = FUNC_2(VAR_4);

 FUNC_4(VAR_2);

 VAR_7 = FUNC_6(VAR_2, VAR_1) & VAR_6;




 FUNC_3(VAR_7 != FUNC_2(VAR_4) &&
  VAR_7 != FUNC_1(VAR_4));
 if (VAR_7 == VAR_8)
  VAR_5 = 1;





 VAR_8 = FUNC_6(VAR_2, VAR_0) & VAR_6;
 FUNC_3(VAR_8 != VAR_7);

 FUNC_5(VAR_2);

 return VAR_5;
}
