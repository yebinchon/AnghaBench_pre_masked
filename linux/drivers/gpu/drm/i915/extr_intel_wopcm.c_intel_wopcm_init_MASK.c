
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_10__ {int base; int size; } ;
struct intel_wopcm {scalar_t__ size; TYPE_5__ guc; } ;
struct TYPE_7__ {int fw; } ;
struct TYPE_6__ {int fw; } ;
struct TYPE_8__ {TYPE_2__ huc; TYPE_1__ guc; } ;
struct intel_gt {int uncore; TYPE_3__ uc; } ;
struct TYPE_9__ {int dev; } ;
struct drm_i915_private {TYPE_4__ drm; struct intel_gt gt; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 struct drm_i915_private* FUNC_9 (struct intel_wopcm*) ;

void FUNC_10(struct intel_wopcm *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_9(VAR_4);
 struct intel_gt *VAR_6 = &VAR_5->gt;
 u32 VAR_7 = FUNC_7(&VAR_6->uc.guc.fw);
 u32 VAR_8 = FUNC_7(&VAR_6->uc.huc.fw);
 u32 VAR_9 = FUNC_5(VAR_5);
 u32 VAR_10;
 u32 VAR_11;

 if (!VAR_7)
  return;

 FUNC_2(!VAR_4->size);
 FUNC_2(VAR_4->guc.base);
 FUNC_2(VAR_4->guc.size);
 FUNC_2(VAR_7 >= VAR_4->size);
 FUNC_2(VAR_8 >= VAR_4->size);
 FUNC_2(VAR_9 + VAR_3 >= VAR_4->size);

 if (FUNC_6(VAR_5))
  return;

 if (FUNC_4(VAR_6->uncore, &VAR_10, &VAR_11)) {
  FUNC_1(VAR_5->drm.dev,
         "GuC WOPCM is already locked [%uK, %uK)\n",
         VAR_10 / VAR_2,
         VAR_11 / VAR_2);
  goto check;
 }





 VAR_10 = VAR_8 + VAR_3;
 VAR_10 = FUNC_0(VAR_10, VAR_0);





 VAR_10 = FUNC_8(VAR_10, VAR_4->size - VAR_9);


 VAR_11 = VAR_4->size - VAR_9 - VAR_10;
 VAR_11 &= VAR_1;

 FUNC_1(VAR_5->drm.dev, "Calculated GuC WOPCM [%uK, %uK)\n",
        VAR_10 / VAR_2, VAR_11 / VAR_2);

check:
 if (FUNC_3(VAR_5, VAR_4->size, VAR_10, VAR_11,
      VAR_7, VAR_8)) {
  VAR_4->guc.base = VAR_10;
  VAR_4->guc.size = VAR_11;
  FUNC_2(!VAR_4->guc.base);
  FUNC_2(!VAR_4->guc.size);
 }
}
