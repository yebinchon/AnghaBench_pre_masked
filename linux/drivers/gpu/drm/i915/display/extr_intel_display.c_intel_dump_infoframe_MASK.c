
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union hdmi_infoframe {int dummy; } hdmi_infoframe ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,union hdmi_infoframe const*) ;

__attribute__((used)) static void
FUNC_1(struct drm_i915_private *VAR_3,
       const union hdmi_infoframe *VAR_4)
{
 if ((VAR_2 & VAR_0) == 0)
  return;

 FUNC_0(VAR_1, VAR_3->drm.dev, VAR_4);
}
