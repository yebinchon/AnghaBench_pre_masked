
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PANEL_MODE_EDP; } ;
union dpcd_edp_config {int raw; TYPE_1__ bits; } ;
struct TYPE_4__ {int panel_mode_edp; } ;
struct dc_link {TYPE_2__ dpcd_caps; int link_index; } ;
typedef enum dp_panel_mode { ____Placeholder_dp_panel_mode } dp_panel_mode ;
typedef enum ddc_result { ____Placeholder_ddc_result } ddc_result ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (struct dc_link*,int ,int *,int) ;
 int FUNC_3 (struct dc_link*,int ,int *,int) ;
 int FUNC_4 (union dpcd_edp_config*,char,int) ;

void FUNC_5(struct dc_link *VAR_4, enum dp_panel_mode VAR_5)
{
 union dpcd_edp_config VAR_6;
 bool VAR_7 = 0;

 FUNC_4(&VAR_6, '\0', sizeof(union dpcd_edp_config));

 if (VAR_5 != VAR_3) {

  switch (VAR_5) {
  case 129:
  case 128:
   VAR_7 = 1;
   break;

  default:
    break;
  }


  FUNC_2(
   VAR_4,
   VAR_2,
   &VAR_6.raw,
   sizeof(VAR_6.raw));

  if (VAR_6.bits.PANEL_MODE_EDP
   != VAR_7) {
   enum ddc_result VAR_8 = VAR_1;

   VAR_6.bits.PANEL_MODE_EDP =
   VAR_7;
   VAR_8 = FUNC_3(
    VAR_4,
    VAR_2,
    &VAR_6.raw,
    sizeof(VAR_6.raw));

   FUNC_0(VAR_8 == VAR_0);
  }
 }
 FUNC_1("Link: %d eDP panel mode supported: %d "
   "eDP panel mode enabled: %d \n",
   VAR_4->link_index,
   VAR_4->dpcd_caps.panel_mode_edp,
   VAR_7);
}
