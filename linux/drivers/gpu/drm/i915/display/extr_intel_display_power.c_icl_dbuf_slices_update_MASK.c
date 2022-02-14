
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ enabled_slices; } ;
struct TYPE_5__ {TYPE_1__ ddb; } ;
struct TYPE_6__ {TYPE_2__ skl_hw; } ;
struct drm_i915_private {TYPE_3__ wm; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*,int ,int) ;

void FUNC_3(struct drm_i915_private *VAR_1,
       u8 VAR_2)
{
 const u8 VAR_3 = VAR_1->wm.skl_hw.ddb.enabled_slices;
 bool VAR_4;

 if (VAR_2 > FUNC_1(VAR_1)) {
  FUNC_0("Invalid number of dbuf slices requested\n");
  return;
 }

 if (VAR_2 == VAR_3 || VAR_2 == 0)
  return;

 if (VAR_2 > VAR_3)
  VAR_4 = FUNC_2(VAR_1, VAR_0, 1);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_0, 0);

 if (VAR_4)
  VAR_1->wm.skl_hw.ddb.enabled_slices = VAR_2;
}
