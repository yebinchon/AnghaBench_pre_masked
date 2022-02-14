
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_private {int edram_size_mb; TYPE_1__ drm; int uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_2)
{
 u32 VAR_3 = 0;

 if (!(FUNC_2(VAR_2) ||
       FUNC_1(VAR_2) ||
       FUNC_0(VAR_2) >= 9))
  return;

 VAR_3 = FUNC_3(&VAR_2->uncore, VAR_1);



 if (!(VAR_3 & VAR_0))
  return;





 if (FUNC_0(VAR_2) < 9)
  VAR_2->edram_size_mb = 128;
 else
  VAR_2->edram_size_mb =
   FUNC_5(VAR_2, VAR_3);

 FUNC_4(VAR_2->drm.dev,
   "Found %uMB of eDRAM\n", VAR_2->edram_size_mb);
}
