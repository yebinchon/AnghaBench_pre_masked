
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_dp {int lane_count; int link_rate; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct intel_encoder*,int,int) ;
 struct intel_dp* FUNC_8 (TYPE_1__*) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_6,
        int VAR_7, enum intel_output_type VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_9(VAR_6->base.dev);
 enum port VAR_10 = VAR_6->port;
 int VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 if (VAR_8 == VAR_2) {
  VAR_11 = 4;
  VAR_12 = 0;
 } else {
  struct intel_dp *VAR_15 = FUNC_8(&VAR_6->base);

  VAR_11 = VAR_15->lane_count;
  VAR_12 = VAR_15->link_rate;
 }






 VAR_14 = FUNC_5(FUNC_1(VAR_10));
 if (VAR_8 != VAR_2)
  VAR_14 |= VAR_1;
 else
  VAR_14 &= ~VAR_1;
 FUNC_6(FUNC_0(VAR_10), VAR_14);
 for (VAR_13 = 0; VAR_13 <= 3; VAR_13++) {
  VAR_14 = FUNC_5(FUNC_2(VAR_13, VAR_10));
  VAR_14 &= ~VAR_3;

  if ((VAR_12 <= 600000 && VAR_11 == 4 && VAR_13 >= 1) ||
      (VAR_12 <= 600000 && VAR_11 < 4 && (VAR_13 == 1 || VAR_13 == 2))) {
   VAR_14 |= VAR_3;
  }
  FUNC_6(FUNC_2(VAR_13, VAR_10), VAR_14);
 }


 VAR_14 = FUNC_5(VAR_0);
 VAR_14 |= VAR_4;
 FUNC_6(VAR_0, VAR_14);


 VAR_14 = FUNC_5(FUNC_4(VAR_10));
 VAR_14 &= ~VAR_5;
 FUNC_6(FUNC_3(VAR_10), VAR_14);


 FUNC_7(VAR_6, VAR_7, VAR_8);


 VAR_14 = FUNC_5(FUNC_4(VAR_10));
 VAR_14 |= VAR_5;
 FUNC_6(FUNC_3(VAR_10), VAR_14);
}
