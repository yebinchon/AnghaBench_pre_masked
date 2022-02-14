
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_rate; int link_spread; int lane_count; } ;
struct link_training_settings {TYPE_2__* lane_settings; TYPE_1__ link_settings; } ;
struct dc_link {int dummy; } ;
typedef enum link_training_result { ____Placeholder_link_training_result } link_training_result ;
struct TYPE_4__ {int PRE_EMPHASIS; int VOLTAGE_SWING; } ;


 int FUNC_0 (struct dc_link*,char*,char*,int ,char*,int ,int ,char*) ;
__attribute__((used)) static void FUNC_1(
 struct dc_link *VAR_0,
 const struct link_training_settings *VAR_1,
 enum link_training_result VAR_2)
{
 char *VAR_3 = "Unknown";
 char *VAR_4 = "Unknown";
 char *VAR_5 = "Disabled";

 switch (VAR_1->link_settings.link_rate) {
 case 139:
  VAR_3 = "RBR";
  break;
 case 142:
  VAR_3 = "HBR";
  break;
 case 141:
  VAR_3 = "HBR2";
  break;
 case 138:
  VAR_3 = "RBR2";
  break;
 case 140:
  VAR_3 = "HBR3";
  break;
 default:
  break;
 }

 switch (VAR_2) {
 case 128:
  VAR_4 = "pass";
  break;
 case 134:
  VAR_4 = "CR failed lane0";
  break;
 case 133:
  VAR_4 = "CR failed lane1";
  break;
 case 132:
  VAR_4 = "CR failed lane23";
  break;
 case 131:
  VAR_4 = "CR failed in EQ";
  break;
 case 130:
  VAR_4 = "EQ failed";
  break;
 case 129:
  VAR_4 = "LQA failed";
  break;
 default:
  break;
 }

 switch (VAR_1->link_settings.link_spread) {
 case 135:
  VAR_5 = "Disabled";
  break;
 case 137:
  VAR_5 = "0.5% 30KHz";
  break;
 case 136:
  VAR_5 = "0.5% 33KHz";
  break;
 default:
  break;
 }


 FUNC_0(VAR_0, "%sx%d %s VS=%d, PE=%d, DS=%s",
    VAR_3,
    VAR_1->link_settings.lane_count,
    VAR_4,
    VAR_1->lane_settings[0].VOLTAGE_SWING,
    VAR_1->lane_settings[0].PRE_EMPHASIS,
    VAR_5);
}
