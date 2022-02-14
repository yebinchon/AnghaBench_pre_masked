
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
struct TYPE_2__ {int high_part; int low_part; } ;
struct dc_dmdata_attributes {scalar_t__ dmdata_mode; int dmdata_dl_delta; int dmdata_qos_level; int dmdata_qos_mode; int dmdata_sw_data; int dmdata_size; int dmdata_repeat; TYPE_1__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_17 ;
 struct dcn20_hubp* FUNC_5 (struct hubp*) ;
 int FUNC_6 (struct hubp*,int ,int ) ;

void FUNC_7(
  struct hubp *VAR_18,
  const struct dc_dmdata_attributes *VAR_19)
{
 struct dcn20_hubp *VAR_20 = FUNC_5(VAR_18);

 if (VAR_19->dmdata_mode == VAR_5) {

  FUNC_2(VAR_3,
    VAR_6, 1);


  FUNC_2(VAR_0, VAR_17, 1);


  FUNC_2(VAR_3,
    VAR_16, 0);
  FUNC_3(VAR_3,
    VAR_16, 1,
    VAR_10, VAR_19->dmdata_repeat,
    VAR_11, VAR_19->dmdata_size);


  FUNC_4(VAR_2, VAR_19->address.low_part);
  FUNC_2(VAR_1,
    VAR_1, VAR_19->address.high_part);

  FUNC_2(VAR_0, VAR_17, 0);

 } else {

  FUNC_0(VAR_3, 0,
    VAR_6, 0);

  FUNC_2(VAR_12,
    VAR_15, 0);
  FUNC_3(VAR_12,
    VAR_15, 1,
    VAR_13, VAR_19->dmdata_repeat,
    VAR_14, VAR_19->dmdata_size);

  FUNC_6(VAR_18, VAR_19->dmdata_size, VAR_19->dmdata_sw_data);
 }


 FUNC_1(VAR_7, 0,
   VAR_9, VAR_19->dmdata_qos_mode,
   VAR_8, VAR_19->dmdata_qos_level,
   VAR_4, VAR_19->dmdata_dl_delta);
}
