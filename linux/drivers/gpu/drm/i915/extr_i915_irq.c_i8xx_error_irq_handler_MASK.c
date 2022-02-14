
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0,
       u16 VAR_1, u16 VAR_2)
{
 FUNC_0("Master Error: EIR 0x%04x\n", VAR_1);

 if (VAR_2)
  FUNC_1("EIR stuck: 0x%04x, masked\n", VAR_2);
}
