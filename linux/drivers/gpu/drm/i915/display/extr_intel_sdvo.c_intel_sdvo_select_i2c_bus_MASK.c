
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdvo_device_mapping {int i2c_pin; scalar_t__ initialized; } ;
struct intel_sdvo {scalar_t__ port; int i2c; } ;
struct TYPE_2__ {struct sdvo_device_mapping* sdvo_mappings; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_2,
     struct intel_sdvo *VAR_3)
{
 struct sdvo_device_mapping *VAR_4;
 u8 VAR_5;

 if (VAR_3->port == VAR_1)
  VAR_4 = &VAR_2->vbt.sdvo_mappings[0];
 else
  VAR_4 = &VAR_2->vbt.sdvo_mappings[1];

 if (VAR_4->initialized &&
     FUNC_2(VAR_2, VAR_4->i2c_pin))
  VAR_5 = VAR_4->i2c_pin;
 else
  VAR_5 = VAR_0;

 VAR_3->i2c = FUNC_1(VAR_2, VAR_5);






 FUNC_0(VAR_3->i2c, 1);
}
