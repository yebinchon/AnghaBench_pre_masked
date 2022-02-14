
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_lvds_pps {int t4; scalar_t__ divider; scalar_t__ tx; scalar_t__ t3; scalar_t__ t5; scalar_t__ t1_t2; scalar_t__ port; scalar_t__ powerdown_on_reset; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_10,
       struct intel_lvds_pps *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_1(FUNC_3(0));
 FUNC_8((VAR_12 & VAR_7) != VAR_8);
 if (VAR_11->powerdown_on_reset)
  VAR_12 |= VAR_5;
 FUNC_2(FUNC_3(0), VAR_12);

 FUNC_2(FUNC_6(0),
     FUNC_7(VAR_2, VAR_11->port) |
     FUNC_7(VAR_6, VAR_11->t1_t2) |
     FUNC_7(VAR_1, VAR_11->t5));

 FUNC_2(FUNC_5(0),
     FUNC_7(VAR_4, VAR_11->t3) |
     FUNC_7(VAR_0, VAR_11->tx));

 FUNC_2(FUNC_4(0),
     FUNC_7(VAR_9, VAR_11->divider) |
     FUNC_7(VAR_3,
      FUNC_0(VAR_11->t4, 1000) + 1));
}
