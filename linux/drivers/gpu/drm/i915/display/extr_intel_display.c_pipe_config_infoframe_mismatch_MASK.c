
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
 int FUNC_0 (int,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,union hdmi_infoframe const*) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_4,
          bool VAR_5, const char *VAR_6,
          const union hdmi_infoframe *VAR_7,
          const union hdmi_infoframe *VAR_8)
{
 if (VAR_5) {
  if ((VAR_3 & VAR_0) == 0)
   return;

  FUNC_0(VAR_0, "fastset mismatch in %s infoframe", VAR_6);
  FUNC_0(VAR_0, "expected:");
  FUNC_2(VAR_1, VAR_4->drm.dev, VAR_7);
  FUNC_0(VAR_0, "found");
  FUNC_2(VAR_1, VAR_4->drm.dev, VAR_8);
 } else {
  FUNC_1("mismatch in %s infoframe", VAR_6);
  FUNC_1("expected:");
  FUNC_2(VAR_2, VAR_4->drm.dev, VAR_7);
  FUNC_1("found");
  FUNC_2(VAR_2, VAR_4->drm.dev, VAR_8);
 }
}
