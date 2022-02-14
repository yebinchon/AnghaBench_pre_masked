
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega20_od8_settings {int overdrive8_capabilities; TYPE_1__* od8_settings_array; } ;
struct vega20_hwmgr {struct vega20_od8_settings od8_settings; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_2__ {int feature_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_0(
  struct pp_hwmgr *VAR_22)
{
 struct vega20_hwmgr *VAR_23 = (struct vega20_hwmgr *)(VAR_22->backend);
 struct vega20_od8_settings *VAR_24 = &(VAR_23->od8_settings);

 if (VAR_24->overdrive8_capabilities & VAR_3) {
  VAR_24->od8_settings_array[VAR_9].feature_id =
   VAR_3;
  VAR_24->od8_settings_array[VAR_8].feature_id =
   VAR_3;
 } else {
  VAR_24->od8_settings_array[VAR_9].feature_id =
   0;
  VAR_24->od8_settings_array[VAR_8].feature_id =
   0;
 }

 if (VAR_24->overdrive8_capabilities & VAR_2) {
  VAR_24->od8_settings_array[VAR_10].feature_id =
   VAR_2;
  VAR_24->od8_settings_array[VAR_13].feature_id =
   VAR_2;
  VAR_24->od8_settings_array[VAR_11].feature_id =
   VAR_2;
  VAR_24->od8_settings_array[VAR_14].feature_id =
   VAR_2;
  VAR_24->od8_settings_array[VAR_12].feature_id =
   VAR_2;
  VAR_24->od8_settings_array[VAR_15].feature_id =
   VAR_2;
 } else {
  VAR_24->od8_settings_array[VAR_10].feature_id =
   0;
  VAR_24->od8_settings_array[VAR_13].feature_id =
   0;
  VAR_24->od8_settings_array[VAR_11].feature_id =
   0;
  VAR_24->od8_settings_array[VAR_14].feature_id =
   0;
  VAR_24->od8_settings_array[VAR_12].feature_id =
   0;
  VAR_24->od8_settings_array[VAR_15].feature_id =
   0;
 }

 if (VAR_24->overdrive8_capabilities & VAR_21)
  VAR_24->od8_settings_array[VAR_18].feature_id = VAR_21;
 else
  VAR_24->od8_settings_array[VAR_18].feature_id = 0;

 if (VAR_24->overdrive8_capabilities & VAR_4)
  VAR_24->od8_settings_array[VAR_17].feature_id = VAR_4;
 else
  VAR_24->od8_settings_array[VAR_17].feature_id = 0;

 if (VAR_24->overdrive8_capabilities & VAR_0)
  VAR_24->od8_settings_array[VAR_5].feature_id =
   VAR_0;
 else
  VAR_24->od8_settings_array[VAR_5].feature_id =
   0;

 if (VAR_24->overdrive8_capabilities & VAR_1)
  VAR_24->od8_settings_array[VAR_6].feature_id =
   VAR_1;
 else
  VAR_24->od8_settings_array[VAR_6].feature_id =
   0;

 if (VAR_24->overdrive8_capabilities & VAR_19)
  VAR_24->od8_settings_array[VAR_7].feature_id =
   VAR_19;
 else
  VAR_24->od8_settings_array[VAR_7].feature_id =
   0;

 if (VAR_24->overdrive8_capabilities & VAR_20)
  VAR_24->od8_settings_array[VAR_16].feature_id =
   VAR_20;
 else
  VAR_24->od8_settings_array[VAR_16].feature_id =
   0;

 return 0;
}
