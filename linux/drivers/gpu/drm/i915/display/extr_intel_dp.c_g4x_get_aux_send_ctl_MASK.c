
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
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
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct intel_dp *VAR_10,
    int VAR_11,
    u32 VAR_12)
{
 struct intel_digital_port *VAR_13 = FUNC_2(VAR_10);
 struct drm_i915_private *VAR_14 =
   FUNC_3(VAR_13->base.base.dev);
 u32 VAR_15, VAR_16;

 if (FUNC_1(VAR_14, 6))
  VAR_15 = 3;
 else
  VAR_15 = 5;

 if (FUNC_0(VAR_14))
  VAR_16 = VAR_8;
 else
  VAR_16 = VAR_7;

 return VAR_6 |
        VAR_1 |
        VAR_2 |
        VAR_9 |
        VAR_16 |
        VAR_5 |
        (VAR_11 << VAR_3) |
        (VAR_15 << VAR_4) |
        (VAR_12 << VAR_0);
}
