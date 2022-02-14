
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_uc {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_6__ {int enable_guc; } ;
struct TYPE_5__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int ,char*,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,char*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (struct intel_uc*) ;
 int FUNC_4 (struct intel_uc*) ;
 int FUNC_5 (struct intel_uc*) ;
 int FUNC_6 (struct intel_uc*) ;
 int FUNC_7 (struct intel_uc*) ;
 int FUNC_8 (struct intel_uc*) ;
 TYPE_2__* FUNC_9 (struct intel_uc*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct intel_uc *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_9(VAR_3)->i915;

 FUNC_0(VAR_4->drm.dev,
        "enable_guc=%d (guc:%s submission:%s huc:%s)\n",
        VAR_2.enable_guc,
        FUNC_10(FUNC_6(VAR_3)),
        FUNC_10(FUNC_7(VAR_3)),
        FUNC_10(FUNC_8(VAR_3)));

 if (VAR_2.enable_guc == -1)
  return;

 if (VAR_2.enable_guc == 0) {
  FUNC_1(FUNC_6(VAR_3));
  FUNC_1(FUNC_7(VAR_3));
  FUNC_1(FUNC_8(VAR_3));
  return;
 }

 if (!FUNC_3(VAR_3))
  FUNC_2(VAR_4->drm.dev,
    "Incompatible option enable_guc=%d - %s\n",
    VAR_2.enable_guc, "GuC is not supported!");

 if (VAR_2.enable_guc & VAR_0 &&
     !FUNC_5(VAR_3))
  FUNC_2(VAR_4->drm.dev,
    "Incompatible option enable_guc=%d - %s\n",
    VAR_2.enable_guc, "HuC is not supported!");

 if (VAR_2.enable_guc & VAR_1 &&
     !FUNC_4(VAR_3))
  FUNC_2(VAR_4->drm.dev,
    "Incompatible option enable_guc=%d - %s\n",
    VAR_2.enable_guc, "GuC submission is N/A");

 if (VAR_2.enable_guc & ~(VAR_1 |
       VAR_0))
  FUNC_2(VAR_4->drm.dev,
    "Incompatible option enable_guc=%d - %s\n",
    VAR_2.enable_guc, "undocumented flag");
}
