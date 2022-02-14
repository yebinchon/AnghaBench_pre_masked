
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int branch_dev_id; scalar_t__ panel_mode_edp; int branch_dev_name; } ;
struct dc_link {scalar_t__ connector_signal; TYPE_1__ dpcd_caps; } ;
typedef enum dp_panel_mode { ____Placeholder_dp_panel_mode } dp_panel_mode ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int) ;

enum dp_panel_mode FUNC_1(struct dc_link *VAR_6)
{




 if (VAR_6->connector_signal != VAR_5) {

  switch (VAR_6->dpcd_caps.branch_dev_id) {
  case 128:






   if (FUNC_0(
    VAR_6->dpcd_caps.branch_dev_name,
    VAR_3,
    sizeof(
    VAR_6->dpcd_caps.
    branch_dev_name)) == 0) {
     return VAR_2;
   }
   break;
  case 129:





   if (FUNC_0(VAR_6->dpcd_caps.branch_dev_name,
    VAR_4,
    sizeof(
    VAR_6->dpcd_caps.
    branch_dev_name)) == 0) {
     return VAR_2;
   }
   break;
  default:
   break;
  }
 }

 if (VAR_6->dpcd_caps.panel_mode_edp) {
  return VAR_1;
 }

 return VAR_0;
}
