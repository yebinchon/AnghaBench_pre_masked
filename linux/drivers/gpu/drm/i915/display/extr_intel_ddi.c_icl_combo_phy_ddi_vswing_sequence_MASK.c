
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; int port; } ;
struct intel_dp {int lane_count; int link_rate; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct intel_dp* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct drm_i915_private*,int ,int,int,int) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_5,
           u32 VAR_6,
           enum intel_output_type VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_11(VAR_5->base.dev);
 enum phy VAR_9 = FUNC_10(VAR_8, VAR_5->port);
 int VAR_10 = 0;
 int VAR_11 = 0;
 u32 VAR_12;
 int VAR_13 = 0;

 if (VAR_7 == VAR_1) {
  VAR_10 = 4;

 } else {
  struct intel_dp *VAR_14 = FUNC_8(&VAR_5->base);

  VAR_10 = VAR_14->lane_count;
  VAR_11 = VAR_14->link_rate;
 }






 VAR_12 = FUNC_0(FUNC_4(VAR_9));
 if (VAR_7 == VAR_1)
  VAR_12 &= ~VAR_0;
 else
  VAR_12 |= VAR_0;
 FUNC_1(FUNC_3(VAR_9), VAR_12);
 for (VAR_13 = 0; VAR_13 <= 3; VAR_13++) {
  VAR_12 = FUNC_0(FUNC_5(VAR_13, VAR_9));
  VAR_12 &= ~VAR_2;

  if ((VAR_11 <= 600000 && VAR_10 == 4 && VAR_13 >= 1) ||
      (VAR_11 <= 600000 && VAR_10 < 4 && (VAR_13 == 1 || VAR_13 == 2))) {
   VAR_12 |= VAR_2;
  }
  FUNC_1(FUNC_5(VAR_13, VAR_9), VAR_12);
 }


 VAR_12 = FUNC_0(FUNC_2(VAR_9));
 VAR_12 |= VAR_3;
 FUNC_1(FUNC_2(VAR_9), VAR_12);


 VAR_12 = FUNC_0(FUNC_7(VAR_9));
 VAR_12 &= ~VAR_4;
 FUNC_1(FUNC_6(VAR_9), VAR_12);


 FUNC_9(VAR_8, VAR_6, VAR_9, VAR_7, VAR_11);


 VAR_12 = FUNC_0(FUNC_7(VAR_9));
 VAR_12 |= VAR_4;
 FUNC_1(FUNC_6(VAR_9), VAR_12);
}
