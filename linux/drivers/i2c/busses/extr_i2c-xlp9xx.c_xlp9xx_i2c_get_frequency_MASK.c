
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xlp9xx_i2c_dev {scalar_t__ ip_clk_hz; scalar_t__ clk_hz; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,char*,scalar_t__*) ;
 struct clk* FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3,
        struct xlp9xx_i2c_dev *VAR_4)
{
 struct clk *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(&VAR_3->dev, ((void*)0));
 if (FUNC_0(VAR_5)) {
  VAR_4->ip_clk_hz = VAR_2;
  FUNC_2(&VAR_3->dev, "using default input frequency %u\n",
   VAR_4->ip_clk_hz);
 } else {
  VAR_4->ip_clk_hz = FUNC_1(VAR_5);
 }

 VAR_7 = FUNC_4(&VAR_3->dev, "clock-frequency", &VAR_6);
 if (VAR_7) {
  VAR_6 = VAR_0;
  FUNC_2(&VAR_3->dev, "using default frequency %u\n", VAR_6);
 } else if (VAR_6 == 0 || VAR_6 > VAR_1) {
  FUNC_3(&VAR_3->dev, "invalid frequency %u, using default\n",
    VAR_6);
  VAR_6 = VAR_0;
 }
 VAR_4->clk_hz = VAR_6;

 return 0;
}
