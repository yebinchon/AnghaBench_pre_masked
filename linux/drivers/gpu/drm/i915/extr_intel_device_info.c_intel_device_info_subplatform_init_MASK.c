
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct intel_runtime_info {int* platform_mask; } ;
struct intel_device_info {int platform; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 struct intel_device_info* FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 struct intel_runtime_info* FUNC_7 (struct drm_i915_private*) ;
 unsigned int FUNC_8 (struct intel_runtime_info const*,int ) ;
 unsigned int FUNC_9 (struct intel_runtime_info const*,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_11(struct drm_i915_private *VAR_7)
{
 const struct intel_device_info *VAR_8 = FUNC_4(VAR_7);
 const struct intel_runtime_info *VAR_9 = FUNC_7(VAR_7);
 const unsigned int VAR_10 = FUNC_9(VAR_9, VAR_8->platform);
 const unsigned int VAR_11 = FUNC_8(VAR_9, VAR_8->platform);
 u16 VAR_12 = FUNC_3(VAR_7);
 u32 VAR_13 = 0;


 FUNC_7(VAR_7)->platform_mask[VAR_10] = FUNC_1(VAR_11);


 if (FUNC_10(VAR_12, VAR_5,
         FUNC_0(VAR_5))) {
  VAR_13 = FUNC_1(VAR_2);
 } else if (FUNC_10(VAR_12, VAR_6,
         FUNC_0(VAR_6))) {
  VAR_13 = FUNC_1(VAR_3);
  if (FUNC_6(VAR_7) || FUNC_5(VAR_7)) {

   VAR_13 |= FUNC_1(VAR_2);
  }
 } else if (FUNC_10(VAR_12, VAR_4,
         FUNC_0(VAR_4))) {
  VAR_13 = FUNC_1(VAR_1);
 }

 FUNC_2(VAR_13 & ~VAR_0);

 FUNC_7(VAR_7)->platform_mask[VAR_10] |= VAR_13;
}
