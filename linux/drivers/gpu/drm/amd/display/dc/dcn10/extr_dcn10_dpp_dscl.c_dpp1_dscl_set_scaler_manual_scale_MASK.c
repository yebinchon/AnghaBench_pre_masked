
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ h_taps_c; scalar_t__ v_taps_c; scalar_t__ h_taps; scalar_t__ v_taps; } ;
struct scaler_data {scalar_t__ format; TYPE_4__ taps; int lb_params; int v_active; int h_active; int recout; } ;
struct dpp {TYPE_3__* ctx; } ;
struct dcn10_dpp {struct scaler_data scl_data; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct dcn10_dpp* FUNC_6 (struct dpp*) ;
 int FUNC_7 (struct dcn10_dpp*,struct scaler_data const*) ;
 int FUNC_8 (struct dpp*,struct scaler_data const*,int ) ;
 int FUNC_9 (struct dcn10_dpp*,int *,int) ;
 int FUNC_10 (struct dcn10_dpp*,struct scaler_data const*) ;
 int FUNC_11 (struct dcn10_dpp*,int *) ;
 int FUNC_12 (struct dcn10_dpp*,struct scaler_data const*,int) ;
 scalar_t__ FUNC_13 (struct scaler_data*,struct scaler_data const*,int) ;

void FUNC_14(
 struct dpp *VAR_24,
 const struct scaler_data *VAR_25)
{
 enum lb_memory_config VAR_26;
 struct dcn10_dpp *VAR_27 = FUNC_6(VAR_24);
 enum dscl_mode_sel VAR_28 = FUNC_8(
   VAR_24, VAR_25, VAR_24->ctx->dc->debug.always_scale);
 bool VAR_29 = VAR_25->format >= VAR_13
    && VAR_25->format <= VAR_14;

 if (FUNC_13(&VAR_27->scl_data, VAR_25, sizeof(*VAR_25)) == 0)
  return;

 FUNC_0();

 VAR_27->scl_data = *VAR_25;


 FUNC_3(VAR_6, 0,
  VAR_0, VAR_1,
  VAR_2, 0,
  VAR_3, 0);


 FUNC_11(VAR_27, &VAR_25->recout);


 FUNC_2(VAR_11, 0,

    VAR_12, VAR_25->h_active,

    VAR_10, VAR_25->v_active);


 FUNC_5(VAR_20, VAR_7, VAR_28);

 if (VAR_28 == VAR_8)
  return;


 VAR_26 = FUNC_7(VAR_27, VAR_25);
 FUNC_9(VAR_27, &VAR_25->lb_params, VAR_26);

 if (VAR_28 == VAR_9)
  return;


 if (FUNC_1(VAR_15)) {
  if (VAR_29)
   FUNC_2(VAR_15, 0,
     VAR_17, VAR_5,
     VAR_16, VAR_4);
  else

   FUNC_2(VAR_15, 0,
     VAR_17, VAR_5,
     VAR_16, VAR_5);
 }


 FUNC_10(VAR_27, VAR_25);


 FUNC_4(VAR_21, 0,
  VAR_22, VAR_25->taps.v_taps - 1,
  VAR_18, VAR_25->taps.h_taps - 1,
  VAR_23, VAR_25->taps.v_taps_c - 1,
  VAR_19, VAR_25->taps.h_taps_c - 1);

 FUNC_12(VAR_27, VAR_25, VAR_29);
 FUNC_0();
}
