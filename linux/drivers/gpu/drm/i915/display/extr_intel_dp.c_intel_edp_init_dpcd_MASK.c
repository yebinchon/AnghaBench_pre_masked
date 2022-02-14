
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_dp {scalar_t__* dpcd; scalar_t__* edp_dpcd; int* sink_rates; int num_sink_rates; int use_rate_select; int aux; int desc; } ;
struct drm_i915_private {int dummy; } ;
typedef int sink_rates ;
typedef scalar_t__ __le16 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 int FUNC_0 (scalar_t__*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,scalar_t__*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (int *,int ,scalar_t__*,int) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (struct intel_dp*) ;
 int FUNC_13 (struct intel_dp*) ;
 int FUNC_14 (scalar_t__) ;
 struct drm_i915_private* FUNC_15 (int ) ;

__attribute__((used)) static bool
FUNC_16(struct intel_dp *VAR_5)
{
 struct drm_i915_private *VAR_6 =
  FUNC_15(FUNC_5(VAR_5)->base.base.dev);


 FUNC_4(VAR_5->dpcd[VAR_0] != 0);

 if (!FUNC_10(VAR_5))
  return 0;

 FUNC_8(&VAR_5->aux, &VAR_5->desc,
    FUNC_7(VAR_5->dpcd));
 if (FUNC_6(&VAR_5->aux, VAR_2,
        VAR_5->edp_dpcd, sizeof(VAR_5->edp_dpcd)) ==
        sizeof(VAR_5->edp_dpcd))
  FUNC_1("eDP DPCD: %*ph\n", (int) sizeof(VAR_5->edp_dpcd),
         VAR_5->edp_dpcd);





 FUNC_13(VAR_5);


 if (VAR_5->edp_dpcd[0] >= VAR_1) {
  __le16 VAR_7[VAR_3];
  int VAR_8;

  FUNC_6(&VAR_5->aux, VAR_4,
    VAR_7, sizeof(VAR_7));

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); VAR_8++) {
   int VAR_9 = FUNC_14(VAR_7[VAR_8]);

   if (VAR_9 == 0)
    break;







   VAR_5->sink_rates[VAR_8] = (VAR_9 * 200) / 10;
  }
  VAR_5->num_sink_rates = VAR_8;
 }





 if (VAR_5->num_sink_rates)
  VAR_5->use_rate_select = 1;
 else
  FUNC_12(VAR_5);

 FUNC_11(VAR_5);


 if (FUNC_2(VAR_6) >= 10 || FUNC_3(VAR_6))
  FUNC_9(VAR_5);

 return 1;
}
