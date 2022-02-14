
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct imx6ul_tsc {int adc_clk; int tsc_clk; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct imx6ul_tsc*) ;
 struct imx6ul_tsc* FUNC_4 (struct input_dev*) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_0)
{
 struct imx6ul_tsc *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->adc_clk);
 if (VAR_2) {
  FUNC_2(VAR_1->dev,
   "Could not prepare or enable the adc clock: %d\n",
   VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->tsc_clk);
 if (VAR_2) {
  FUNC_2(VAR_1->dev,
   "Could not prepare or enable the tsc clock: %d\n",
   VAR_2);
  goto disable_adc_clk;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto disable_tsc_clk;

 return 0;

disable_tsc_clk:
 FUNC_0(VAR_1->tsc_clk);
disable_adc_clk:
 FUNC_0(VAR_1->adc_clk);
 return VAR_2;
}
