
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rp1_freq; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {int uncore; TYPE_2__ gt_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_5)
{
 FUNC_4(&VAR_5->uncore, VAR_0);


 if (FUNC_3(VAR_5, 9))
  FUNC_2(VAR_1,
   FUNC_0(VAR_5->gt_pm.rps.rp1_freq));


 FUNC_2(VAR_2,
  FUNC_1(VAR_5, 1000000));

 FUNC_2(VAR_3, 0xa);




 FUNC_6(VAR_5, VAR_4);

 FUNC_5(&VAR_5->uncore, VAR_0);
}
