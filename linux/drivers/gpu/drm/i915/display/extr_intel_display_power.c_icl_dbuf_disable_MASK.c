
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enabled_slices; } ;
struct TYPE_5__ {TYPE_1__ ddb; } ;
struct TYPE_6__ {TYPE_2__ skl_hw; } ;
struct drm_i915_private {TYPE_3__ wm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_4)
{
 FUNC_2(VAR_0, FUNC_1(VAR_0) & ~VAR_2);
 FUNC_2(VAR_1, FUNC_1(VAR_1) & ~VAR_2);
 FUNC_3(VAR_1);

 FUNC_4(10);

 if ((FUNC_1(VAR_0) & VAR_3) ||
     (FUNC_1(VAR_1) & VAR_3))
  FUNC_0("DBuf power disable timeout!\n");
 else




  VAR_4->wm.skl_hw.ddb.enabled_slices = 1;
}
