
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_encoder {int dummy; } ;
struct encoder_set_dp_phy_pattern_param {int dp_phy_pattern; int dp_panel_mode; int custom_pattern; } ;
struct dce110_link_encoder {int dummy; } ;


 int FUNC_0 (int) ;
 struct dce110_link_encoder* FUNC_1 (struct link_encoder*) ;
 int FUNC_2 (struct link_encoder*,int) ;
 int FUNC_3 (struct dce110_link_encoder*,int ) ;
 int FUNC_4 (struct dce110_link_encoder*) ;
 int FUNC_5 (struct dce110_link_encoder*,int) ;
 int FUNC_6 (struct dce110_link_encoder*,int ) ;
 int FUNC_7 (struct dce110_link_encoder*) ;
 int FUNC_8 (struct dce110_link_encoder*) ;

void FUNC_9(
 struct link_encoder *VAR_0,
 const struct encoder_set_dp_phy_pattern_param *VAR_1)
{
 struct dce110_link_encoder *VAR_2 = FUNC_1(VAR_0);

 switch (VAR_1->dp_phy_pattern) {
 case 132:
  FUNC_2(VAR_0, 0);
  break;
 case 131:
  FUNC_2(VAR_0, 1);
  break;
 case 130:
  FUNC_2(VAR_0, 2);
  break;
 case 129:
  FUNC_2(VAR_0, 3);
  break;
 case 135:
  FUNC_4(VAR_2);
  break;
 case 133:
  FUNC_8(VAR_2);
  break;
 case 134:
  FUNC_7(VAR_2);
  break;
 case 139:
  FUNC_3(
   VAR_2, VAR_1->custom_pattern);
  break;
 case 138:
  FUNC_5(VAR_2, 1);
  break;
 case 137:
  FUNC_5(VAR_2, 2);
  break;
 case 136:
  FUNC_5(VAR_2, 3);
  break;
 case 128: {
  FUNC_6(
   VAR_2, VAR_1->dp_panel_mode);
  break;
 }

 default:

  FUNC_0(0);
  break;
 }
}
