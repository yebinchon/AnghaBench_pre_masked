
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct transform {int dummy; } ;
struct scl_ratios_inits {int member_0; } ;
struct TYPE_6__ {int alpha_en; } ;
struct TYPE_5__ {int h_taps; int v_taps; } ;
struct TYPE_4__ {int horz; int vert; } ;
struct scaler_data {TYPE_3__ lb_params; int viewport; TYPE_2__ taps; TYPE_1__ ratios; } ;
struct dce_transform {int const* filter_h; int const* filter_v; int lb_memory_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct dce_transform* FUNC_4 (struct transform*) ;
 int FUNC_5 (struct dce_transform*,struct scaler_data const*,struct scl_ratios_inits*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (struct dce_transform*,int ,int const*,int ) ;
 int FUNC_8 (struct dce_transform*,struct scaler_data const*) ;
 int FUNC_9 (struct dce_transform*,struct scl_ratios_inits*) ;
 int FUNC_10 (struct dce_transform*,int *) ;
 int FUNC_11 (struct dce_transform*,struct scaler_data const*) ;

__attribute__((used)) static void FUNC_12(
 struct transform *VAR_16,
 const struct scaler_data *VAR_17)
{
 struct dce_transform *VAR_18 = FUNC_4(VAR_16);
 bool VAR_19;
 bool VAR_20 = 0;
 const uint16_t *VAR_21, *VAR_22;


 FUNC_1(VAR_7, 0,
   VAR_6, 0,
   VAR_8, VAR_18->lb_memory_size);


 FUNC_3(VAR_10, 0);


 FUNC_8(VAR_18, VAR_17);


 VAR_19 = FUNC_11(VAR_18, VAR_17);

 if (VAR_19) {

  struct scl_ratios_inits VAR_23 = { 0 };

  FUNC_5(VAR_18, VAR_17, &VAR_23);

  FUNC_9(VAR_18, &VAR_23);

  VAR_21 = FUNC_6(VAR_17->taps.v_taps, VAR_17->ratios.vert);
  VAR_22 = FUNC_6(VAR_17->taps.h_taps, VAR_17->ratios.horz);

  if (VAR_21 != VAR_18->filter_v || VAR_22 != VAR_18->filter_h) {

   if (VAR_18->filter_v == ((void*)0))
    FUNC_0(VAR_14, 0,
      VAR_15, 0);
   FUNC_7(
     VAR_18,
     VAR_17->taps.v_taps,
     VAR_21,
     VAR_4);
   FUNC_7(
     VAR_18,
     VAR_17->taps.v_taps,
     VAR_21,
     VAR_2);


   if (VAR_18->filter_h == ((void*)0))
    FUNC_0(VAR_11, 0,
      VAR_12, 0);
   FUNC_7(
     VAR_18,
     VAR_17->taps.h_taps,
     VAR_22,
     VAR_3);
   FUNC_7(
     VAR_18,
     VAR_17->taps.h_taps,
     VAR_22,
     VAR_1);

   VAR_18->filter_v = VAR_21;
   VAR_18->filter_h = VAR_22;
   VAR_20 = 1;
  }
 }


 FUNC_10(VAR_18, &VAR_17->viewport);


 if (VAR_20)
  FUNC_2(VAR_13, VAR_9, 1);

 FUNC_2(VAR_5, VAR_0, VAR_17->lb_params.alpha_en);
}
