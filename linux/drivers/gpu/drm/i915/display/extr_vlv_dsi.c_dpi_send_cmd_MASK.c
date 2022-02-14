
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_encoder {struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct intel_dsi {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int ,int ,int) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static int FUNC_8(struct intel_dsi *VAR_2, u32 VAR_3, bool VAR_4,
   enum port VAR_5)
{
 struct drm_encoder *VAR_6 = &VAR_2->base.base;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_i915_private *VAR_8 = FUNC_7(VAR_7);
 u32 VAR_9;


 if (VAR_4)
  VAR_3 &= ~VAR_0;
 else
  VAR_3 |= VAR_0;


 FUNC_3(FUNC_5(VAR_5), VAR_1);


 if (VAR_3 == FUNC_2(FUNC_4(VAR_5)))
  FUNC_0("Same special packet %02x twice in a row.\n", VAR_3);

 FUNC_3(FUNC_4(VAR_5), VAR_3);

 VAR_9 = VAR_1;
 if (FUNC_6(VAR_8, FUNC_5(VAR_5), VAR_9, 100))
  FUNC_1("Video mode command 0x%08x send failed.\n", VAR_3);

 return 0;
}
