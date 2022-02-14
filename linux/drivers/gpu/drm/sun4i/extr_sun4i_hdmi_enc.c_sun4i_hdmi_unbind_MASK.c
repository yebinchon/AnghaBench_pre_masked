
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_hdmi {int bus_clk; int mod_clk; int ddc_i2c; int i2c; int encoder; int connector; int cec_adap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sun4i_hdmi* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0, struct device *VAR_1,
       void *VAR_2)
{
 struct sun4i_hdmi *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3->cec_adap);
 FUNC_3(&VAR_3->connector);
 FUNC_4(&VAR_3->encoder);
 FUNC_5(VAR_3->i2c);
 FUNC_6(VAR_3->ddc_i2c);
 FUNC_1(VAR_3->mod_clk);
 FUNC_1(VAR_3->bus_clk);
}
