
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_hdmi {int vpll_clk; int hdmi; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rockchip_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
        void *VAR_2)
{
 struct rockchip_hdmi *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3->hdmi);
 FUNC_0(VAR_3->vpll_clk);
}
