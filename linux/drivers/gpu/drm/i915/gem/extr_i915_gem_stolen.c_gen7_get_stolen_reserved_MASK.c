
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int resource_size_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_4,
         resource_size_t *VAR_5,
         resource_size_t *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_0);

 FUNC_0("GEN6_STOLEN_RESERVED = %08x\n", VAR_7);

 if (!(VAR_7 & VAR_1))
  return;

 *VAR_5 = VAR_7 & VAR_2;

 switch (VAR_7 & VAR_3) {
 case 129:
  *VAR_6 = 1024 * 1024;
  break;
 case 128:
  *VAR_6 = 256 * 1024;
  break;
 default:
  *VAR_6 = 1024 * 1024;
  FUNC_2(VAR_7 & VAR_3);
 }
}
