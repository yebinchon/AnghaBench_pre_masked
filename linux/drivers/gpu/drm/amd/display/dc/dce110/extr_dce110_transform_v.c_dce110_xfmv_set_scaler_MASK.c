
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct transform {int dummy; } ;
struct sclv_ratios_inits {int member_0; } ;
struct TYPE_4__ {int h_taps_c; int h_taps; int v_taps_c; int v_taps; } ;
struct TYPE_3__ {int horz_c; int vert_c; int horz; int vert; } ;
struct scaler_data {TYPE_2__ taps; TYPE_1__ ratios; } ;
struct rect {int member_0; } ;
struct dce_transform {int const* filter_h_c; int const* filter_h; int const* filter_v_c; int const* filter_v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dce_transform* FUNC_0 (struct transform*) ;
 int FUNC_1 (struct dce_transform*,struct scaler_data const*,struct sclv_ratios_inits*,struct rect*,struct rect*) ;
 int FUNC_2 (struct scaler_data const*,struct rect*,struct rect*) ;
 int FUNC_3 (struct transform*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (struct dce_transform*,int ,int const*,int ) ;
 int FUNC_6 (struct dce_transform*,struct scaler_data const*) ;
 int FUNC_7 (struct dce_transform*,struct sclv_ratios_inits*) ;
 int FUNC_8 (struct dce_transform*,struct rect*,struct rect*) ;
 int FUNC_9 (struct dce_transform*) ;
 int FUNC_10 (struct dce_transform*,struct scaler_data const*) ;

__attribute__((used)) static void FUNC_11(
 struct transform *VAR_4,
 const struct scaler_data *VAR_5)
{
 struct dce_transform *VAR_6 = FUNC_0(VAR_4);
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 const uint16_t *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 struct rect VAR_13 = {0};
 struct rect VAR_14 = {0};

 FUNC_3(VAR_4);




 FUNC_2(VAR_5, &VAR_13, &VAR_14);


 FUNC_6(VAR_6, VAR_5);


 VAR_7 = FUNC_10(VAR_6, VAR_5);

 if (VAR_7) {


  struct sclv_ratios_inits VAR_15 = { 0 };

  FUNC_1(
   VAR_6,
   VAR_5,
   &VAR_15,
   &VAR_13,
   &VAR_14);

  FUNC_7(VAR_6, &VAR_15);

  VAR_9 = FUNC_4(VAR_5->taps.v_taps, VAR_5->ratios.vert);
  VAR_10 = FUNC_4(VAR_5->taps.h_taps, VAR_5->ratios.horz);
  VAR_12 = FUNC_4(VAR_5->taps.v_taps_c, VAR_5->ratios.vert_c);
  VAR_11 = FUNC_4(VAR_5->taps.h_taps_c, VAR_5->ratios.horz_c);

  if (VAR_9 != VAR_6->filter_v
    || VAR_12 != VAR_6->filter_v_c
    || VAR_10 != VAR_6->filter_h
    || VAR_11 != VAR_6->filter_h_c) {

   FUNC_5(
     VAR_6,
     VAR_5->taps.v_taps,
     VAR_9,
     VAR_3);
   FUNC_5(
     VAR_6,
     VAR_5->taps.v_taps_c,
     VAR_12,
     VAR_1);


   FUNC_5(
     VAR_6,
     VAR_5->taps.h_taps,
     VAR_10,
     VAR_2);
   FUNC_5(
     VAR_6,
     VAR_5->taps.h_taps_c,
     VAR_11,
     VAR_0);

   VAR_6->filter_v = VAR_9;
   VAR_6->filter_v_c = VAR_12;
   VAR_6->filter_h = VAR_10;
   VAR_6->filter_h_c = VAR_11;
   VAR_8 = 1;
  }
 }


 FUNC_8(VAR_6, &VAR_13, &VAR_14);


 if (VAR_8)
  FUNC_9(VAR_6);
}
