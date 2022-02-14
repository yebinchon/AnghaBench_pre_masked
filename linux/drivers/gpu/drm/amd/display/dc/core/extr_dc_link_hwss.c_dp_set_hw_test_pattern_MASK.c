
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct link_encoder {TYPE_1__* funcs; } ;
struct encoder_set_dp_phy_pattern_param {int dp_phy_pattern; int dp_panel_mode; int custom_pattern_size; int * custom_pattern; int member_0; } ;
struct dc_link {struct link_encoder* link_enc; } ;
typedef enum dp_test_pattern { ____Placeholder_dp_test_pattern } dp_test_pattern ;
struct TYPE_2__ {int (* dp_set_phy_pattern ) (struct link_encoder*,struct encoder_set_dp_phy_pattern_param*) ;} ;


 int FUNC_0 (struct dc_link*) ;
 int FUNC_1 (struct link_encoder*,struct encoder_set_dp_phy_pattern_param*) ;

void FUNC_2(
 struct dc_link *VAR_0,
 enum dp_test_pattern VAR_1,
 uint8_t *VAR_2,
 uint32_t VAR_3)
{
 struct encoder_set_dp_phy_pattern_param VAR_4 = {0};
 struct link_encoder *VAR_5 = VAR_0->link_enc;

 VAR_4.dp_phy_pattern = VAR_1;
 VAR_4.custom_pattern = VAR_2;
 VAR_4.custom_pattern_size = VAR_3;
 VAR_4.dp_panel_mode = FUNC_0(VAR_0);

 VAR_5->funcs->dp_set_phy_pattern(VAR_5, &VAR_4);
}
