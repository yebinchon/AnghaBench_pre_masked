
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct intel_dsi {TYPE_2__ base; } ;
struct TYPE_7__ {int seq_version; } ;
struct TYPE_8__ {TYPE_3__ dsi; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int,int,int) ;
 int FUNC_5 (struct drm_i915_private*,int,int,int) ;
 int FUNC_6 (struct drm_i915_private*,int,int,int) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_i915_private*,int,int,int) ;

__attribute__((used)) static const u8 *FUNC_9(struct intel_dsi *VAR_0, const u8 *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->base.base.dev;
 struct drm_i915_private *VAR_3 = FUNC_7(VAR_2);
 u8 VAR_4, VAR_5 = 0, VAR_6;
 bool VAR_7;

 FUNC_0("\n");

 if (VAR_3->vbt.dsi.seq_version >= 3)
  VAR_5 = *VAR_1++;

 VAR_6 = *VAR_1++;


 if (VAR_3->vbt.dsi.seq_version == 2)
  VAR_4 = (*VAR_1 >> 1) & 3;
 else
  VAR_4 = 0;


 VAR_7 = *VAR_1++ & 1;

 if (FUNC_1(VAR_3) >= 11)
  FUNC_6(VAR_3, VAR_4, VAR_5, VAR_7);
 else if (FUNC_3(VAR_3))
  FUNC_8(VAR_3, VAR_4, VAR_6, VAR_7);
 else if (FUNC_2(VAR_3))
  FUNC_5(VAR_3, VAR_4, VAR_6, VAR_7);
 else
  FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7);

 return VAR_1;
}
