
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int id; int mmio_base; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (int ) ;

 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

 int VAR_3 ;


__attribute__((used)) static void FUNC_6(struct intel_engine_cs *VAR_4, u32 VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->i915;
 i915_reg_t VAR_7;





 if (FUNC_2(VAR_6, 7)) {
  switch (VAR_4->id) {




  default:
   FUNC_0(VAR_4->id);

  case 130:
   VAR_7 = VAR_2;
   break;
  case 131:
   VAR_7 = VAR_0;
   break;
  case 129:
   VAR_7 = VAR_1;
   break;
  case 128:
   VAR_7 = VAR_3;
   break;
  }
 } else if (FUNC_2(VAR_6, 6)) {
  VAR_7 = FUNC_5(VAR_4->mmio_base);
 } else {
  VAR_7 = FUNC_4(VAR_4->mmio_base);
 }

 FUNC_1(VAR_7, VAR_5);
 FUNC_3(VAR_7);
}
