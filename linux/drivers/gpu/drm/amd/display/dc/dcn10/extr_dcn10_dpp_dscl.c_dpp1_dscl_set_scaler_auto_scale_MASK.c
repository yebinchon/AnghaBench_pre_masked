
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ h_taps_c; scalar_t__ v_taps_c; scalar_t__ h_taps; scalar_t__ v_taps; } ;
struct scaler_data {scalar_t__ format; TYPE_4__ taps; int lb_params; } ;
struct dpp {TYPE_3__* ctx; } ;
struct dcn10_dpp {int dummy; } ;
typedef enum lb_memory_config { ____Placeholder_lb_memory_config } lb_memory_config ;
typedef enum dscl_mode_sel { ____Placeholder_dscl_mode_sel } dscl_mode_sel ;
struct TYPE_7__ {TYPE_2__* dc; } ;
struct TYPE_5__ {int always_scale; } ;
struct TYPE_6__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct dcn10_dpp* FUNC_4 (struct dpp*) ;
 int FUNC_5 (struct dcn10_dpp*,struct scaler_data const*) ;
 int FUNC_6 (struct dpp*,struct scaler_data const*,int ) ;
 int FUNC_7 (struct dcn10_dpp*,int *,int) ;
 int FUNC_8 (struct dcn10_dpp*,struct scaler_data const*) ;
 int FUNC_9 (struct dcn10_dpp*,struct scaler_data const*) ;
 int FUNC_10 (struct dcn10_dpp*,struct scaler_data const*,int) ;

void FUNC_11(
 struct dpp *VAR_21,
 const struct scaler_data *VAR_22)
{
 enum lb_memory_config VAR_23;
 struct dcn10_dpp *VAR_24 = FUNC_4(VAR_21);
 enum dscl_mode_sel VAR_25 = FUNC_6(
   VAR_21, VAR_22, VAR_21->ctx->dc->debug.always_scale);
 bool VAR_26 = VAR_22->format >= VAR_10
    && VAR_22->format <= VAR_11;

 FUNC_9(VAR_24, VAR_22);

 FUNC_8(VAR_24, VAR_22);

 FUNC_3(VAR_17, VAR_7, VAR_25);

 if (VAR_25 == VAR_8)
  return;

 VAR_23 = FUNC_5(VAR_24, VAR_22);
 FUNC_7(VAR_24, &VAR_22->lb_params, VAR_23);

 if (VAR_25 == VAR_9)
  return;


 FUNC_1(VAR_6, 0,
  VAR_0, VAR_1,
  VAR_2, 0,
  VAR_3, 0);


 if (VAR_26)
  FUNC_0(VAR_12, 0,
    VAR_14, VAR_5,
    VAR_13, VAR_4);
 else

  FUNC_0(VAR_12, 0,
    VAR_14, VAR_5,
    VAR_13, VAR_5);

 FUNC_2(VAR_18, 0,
  VAR_19, VAR_22->taps.v_taps - 1,
  VAR_15, VAR_22->taps.h_taps - 1,
  VAR_20, VAR_22->taps.v_taps_c - 1,
  VAR_16, VAR_22->taps.h_taps_c - 1);

 FUNC_10(VAR_24, VAR_22, VAR_26);
}
