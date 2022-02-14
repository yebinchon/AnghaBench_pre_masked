
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {scalar_t__ tc_mode; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static u32 FUNC_6(struct intel_dp *VAR_9,
    int VAR_10,
    u32 VAR_11)
{
 struct intel_digital_port *VAR_12 = FUNC_2(VAR_9);
 struct drm_i915_private *VAR_13 =
   FUNC_5(VAR_12->base.base.dev);
 enum phy VAR_14 = FUNC_4(VAR_13, VAR_12->base.port);
 u32 VAR_15;

 VAR_15 = VAR_4 |
       VAR_0 |
       VAR_1 |
       VAR_6 |
       VAR_7 |
       VAR_3 |
       (VAR_10 << VAR_2) |
       FUNC_0(32) |
       FUNC_1(32);

 if (FUNC_3(VAR_13, VAR_14) &&
     VAR_12->tc_mode == VAR_8)
  VAR_15 |= VAR_5;

 return VAR_15;
}
