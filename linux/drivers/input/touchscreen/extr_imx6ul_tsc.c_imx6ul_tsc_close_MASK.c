
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct imx6ul_tsc {int adc_clk; int tsc_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct imx6ul_tsc*) ;
 struct imx6ul_tsc* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct imx6ul_tsc *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1->tsc_clk);
 FUNC_0(VAR_1->adc_clk);
}
