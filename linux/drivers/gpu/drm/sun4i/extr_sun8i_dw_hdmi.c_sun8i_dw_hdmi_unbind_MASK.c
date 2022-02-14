
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_dw_hdmi {scalar_t__ ddc_en; int regulator; int rst_ctrl; int clk_tmds; int hdmi; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun8i_dw_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sun8i_dw_hdmi*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_0, struct device *VAR_1,
     void *VAR_2)
{
 struct sun8i_dw_hdmi *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3->hdmi);
 FUNC_7(VAR_3);
 FUNC_0(VAR_3->clk_tmds);
 FUNC_6(VAR_3->rst_ctrl);
 FUNC_4(VAR_3->ddc_en, 0);
 FUNC_5(VAR_3->regulator);

 if (VAR_3->ddc_en)
  FUNC_3(VAR_3->ddc_en);
}
