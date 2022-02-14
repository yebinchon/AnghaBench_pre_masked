
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int h_taps; int h_taps_c; int v_taps; int v_taps_c; } ;
struct TYPE_7__ {int vert_c; int horz_c; int vert; int horz; } ;
struct TYPE_6__ {scalar_t__ horz; scalar_t__ vert; } ;
struct scaler_data {TYPE_3__ taps; TYPE_2__ ratios; TYPE_1__ sharpness; } ;
struct dcn10_dpp {TYPE_5__* tf_shift; TYPE_4__* tf_mask; int const* filter_v_c; int const* filter_h_c; int const* filter_v; int const* filter_h; } ;
struct TYPE_10__ {int SCL_COEF_RAM_SELECT_CURRENT; } ;
struct TYPE_9__ {int SCL_COEF_RAM_SELECT_CURRENT; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,scalar_t__,int ,int,int ,int,int ,scalar_t__) ;
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
 int VAR_13 ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct dcn10_dpp*,int,int ,int const*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_6(
  struct dcn10_dpp *VAR_14,
  const struct scaler_data *VAR_15,
  bool VAR_16)
{
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 uint32_t VAR_21 = VAR_15->sharpness.horz;
 uint32_t VAR_22 = VAR_15->sharpness.vert;
 bool VAR_23;
 const uint16_t *VAR_24 = ((void*)0);
 const uint16_t *VAR_25 = ((void*)0);
 const uint16_t *VAR_26 = ((void*)0);
 const uint16_t *VAR_27 = ((void*)0);

 VAR_17 = VAR_15->taps.h_taps < 3
     && VAR_15->taps.h_taps_c < 3
  && (VAR_15->taps.h_taps > 1 && VAR_15->taps.h_taps_c > 1);
 VAR_18 = VAR_15->taps.v_taps < 3
     && VAR_15->taps.v_taps_c < 3
  && (VAR_15->taps.v_taps > 1 && VAR_15->taps.v_taps_c > 1);

 VAR_19 = VAR_17 && VAR_21 != 0;
 VAR_20 = VAR_18 && VAR_22 != 0;

 FUNC_2(VAR_0,
  VAR_7, VAR_17,
  VAR_8, VAR_19,
  VAR_9, VAR_21,
  VAR_11, VAR_18,
  VAR_12, VAR_20,
  VAR_13, VAR_22);

 if (!VAR_18 || !VAR_17) {
  bool VAR_28 = 0;

  VAR_24 = FUNC_3(
    VAR_15->taps.h_taps, VAR_15->ratios.horz);
  VAR_25 = FUNC_3(
    VAR_15->taps.v_taps, VAR_15->ratios.vert);

  VAR_28 = (VAR_24 && (VAR_24 != VAR_14->filter_h))
    || (VAR_25 && (VAR_25 != VAR_14->filter_v));

  if (VAR_16) {
   VAR_26 = FUNC_3(
     VAR_15->taps.h_taps_c, VAR_15->ratios.horz_c);
   VAR_27 = FUNC_3(
     VAR_15->taps.v_taps_c, VAR_15->ratios.vert_c);
   VAR_28 = VAR_28 || (VAR_26 && (VAR_26 != VAR_14->filter_h_c))
       || (VAR_27 && (VAR_27 != VAR_14->filter_v_c));
  }

  if (VAR_28) {
   uint32_t VAR_29 = FUNC_0(VAR_10);

   if (!VAR_17 && VAR_24) {
    FUNC_4(
     VAR_14, VAR_15->taps.h_taps,
     VAR_4, VAR_24);
   }
   VAR_14->filter_h = VAR_24;
   if (!VAR_18 && VAR_25) {
    FUNC_4(
     VAR_14, VAR_15->taps.v_taps,
     VAR_5, VAR_25);
   }
   VAR_14->filter_v = VAR_25;
   if (VAR_16) {
    if (!VAR_17 && VAR_26) {
     FUNC_4(
      VAR_14, VAR_15->taps.h_taps_c,
      VAR_2, VAR_26);
    }
    if (!VAR_18 && VAR_27) {
     FUNC_4(
      VAR_14, VAR_15->taps.v_taps_c,
      VAR_3, VAR_27);
    }
   }
   VAR_14->filter_h_c = VAR_26;
   VAR_14->filter_v_c = VAR_27;

   VAR_23 = FUNC_5(
    VAR_29, VAR_14->tf_mask->SCL_COEF_RAM_SELECT_CURRENT,
    VAR_14->tf_shift->SCL_COEF_RAM_SELECT_CURRENT);


   FUNC_1(VAR_10, VAR_29,
     VAR_6, !VAR_23,
     VAR_1, VAR_16);
  }
 }
}
