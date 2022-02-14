
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int v_c_bot; int v_c; int v_bot; int v; int h_c; int h; } ;
struct TYPE_3__ {int vert_c; int horz_c; int vert; int horz; } ;
struct scaler_data {TYPE_2__ inits; TYPE_1__ ratios; } ;
struct dcn10_dpp {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(
  struct dcn10_dpp *VAR_26, const struct scaler_data *VAR_27)
{
 uint32_t VAR_28 = 0;
 uint32_t VAR_29 = 0;

 FUNC_1(VAR_2, 0,
   VAR_8, FUNC_5(VAR_27->ratios.horz) << 5);

 FUNC_1(VAR_14, 0,
   VAR_24, FUNC_5(VAR_27->ratios.vert) << 5);

 FUNC_1(VAR_3, 0,
   VAR_9, FUNC_5(VAR_27->ratios.horz_c) << 5);

 FUNC_1(VAR_15, 0,
   VAR_25, FUNC_5(VAR_27->ratios.vert_c) << 5);




 VAR_28 = FUNC_4(VAR_27->inits.h) << 5;
 VAR_29 = FUNC_3(VAR_27->inits.h);
 FUNC_2(VAR_0, 0,
  VAR_4, VAR_28,
  VAR_6, VAR_29);

 VAR_28 = FUNC_4(VAR_27->inits.h_c) << 5;
 VAR_29 = FUNC_3(VAR_27->inits.h_c);
 FUNC_2(VAR_1, 0,
  VAR_5, VAR_28,
  VAR_7, VAR_29);

 VAR_28 = FUNC_4(VAR_27->inits.v) << 5;
 VAR_29 = FUNC_3(VAR_27->inits.v);
 FUNC_2(VAR_10, 0,
  VAR_16, VAR_28,
  VAR_20, VAR_29);

 if (FUNC_0(VAR_11)) {
  VAR_28 = FUNC_4(VAR_27->inits.v_bot) << 5;
  VAR_29 = FUNC_3(VAR_27->inits.v_bot);
  FUNC_2(VAR_11, 0,
   VAR_17, VAR_28,
   VAR_21, VAR_29);
 }

 VAR_28 = FUNC_4(VAR_27->inits.v_c) << 5;
 VAR_29 = FUNC_3(VAR_27->inits.v_c);
 FUNC_2(VAR_13, 0,
  VAR_19, VAR_28,
  VAR_23, VAR_29);

 if (FUNC_0(VAR_12)) {
  VAR_28 = FUNC_4(VAR_27->inits.v_c_bot) << 5;
  VAR_29 = FUNC_3(VAR_27->inits.v_c_bot);
  FUNC_2(VAR_12, 0,
   VAR_18, VAR_28,
   VAR_22, VAR_29);
 }
}
