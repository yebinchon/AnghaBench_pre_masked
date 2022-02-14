
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pp_hwmgr {int chip_id; } ;
typedef enum smu8_scratch_entry { ____Placeholder_smu8_scratch_entry } smu8_scratch_entry ;


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

__attribute__((used)) static uint8_t FUNC_0(struct pp_hwmgr *VAR_18,
   enum smu8_scratch_entry VAR_19)
{
 uint8_t VAR_20 = 0;

 switch (VAR_19) {
 case 129:
  VAR_20 = VAR_16;
  break;
 case 128:
  if (VAR_18->chip_id == VAR_0)
   VAR_20 = VAR_16;
  else
   VAR_20 = VAR_17;
  break;
 case 142:
  VAR_20 = VAR_4;
  break;
 case 138:
  VAR_20 = VAR_8;
  break;
 case 141:
  VAR_20 = VAR_5;
  break;
 case 140:
  VAR_20 = VAR_6;
  break;
 case 139:
  if (VAR_18->chip_id == VAR_0)
   VAR_20 = VAR_6;
  else
   VAR_20 = VAR_7;
  break;
 case 135:
  VAR_20 = VAR_11;
  break;
 case 133:
  VAR_20 = VAR_12;
  break;
 case 132:
  VAR_20 = VAR_13;
  break;
 case 131:
  VAR_20 = VAR_14;
  break;
 case 130:
  VAR_20 = VAR_15;
  break;
 case 137:
  VAR_20 = VAR_9;
  break;
 case 136:
  VAR_20 = VAR_10;
  break;
 case 134:
  VAR_20 = VAR_2;
  break;
 case 147:
 case 144:
 case 146:
 case 148:
 case 145:
 case 149:
  VAR_20 = VAR_3;
  break;
 case 143:
  VAR_20 = VAR_1;
  break;
 }

 return VAR_20;
}
