
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (struct drm_device*) ;

void FUNC_9(struct intel_encoder *VAR_6, enum port VAR_7)
{
 u32 VAR_8;
 struct drm_device *VAR_9 = VAR_6->base.dev;
 struct drm_i915_private *VAR_10 = FUNC_8(VAR_9);


 if (FUNC_6(VAR_10)) {
  VAR_8 = FUNC_4(VAR_0);
  VAR_8 &= ~(FUNC_3(VAR_7));
  VAR_8 &= ~(FUNC_2(VAR_7));
  VAR_8 &= ~(FUNC_0(VAR_7));
  VAR_8 &= ~(FUNC_1(VAR_7));
  FUNC_5(VAR_0, VAR_8);
 } else {
  VAR_8 = FUNC_4(VAR_4);
  VAR_8 &= ~VAR_2;
  FUNC_5(VAR_4, VAR_8);

  VAR_8 = FUNC_4(VAR_5);
  VAR_8 &= ~VAR_3;
  FUNC_5(VAR_5, VAR_8);
 }
 FUNC_5(FUNC_7(VAR_7), VAR_1);
}
