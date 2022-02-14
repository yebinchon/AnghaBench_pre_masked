
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtk_hdmi_ddc {int clk; int adap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct mtk_hdmi_ddc* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mtk_hdmi_ddc *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->adap);
 FUNC_0(VAR_1->clk);

 return 0;
}
