
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int pclk; int clk; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct dw_i2c_dev *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_0->clk))
  return FUNC_1(VAR_0->clk);

 if (VAR_1) {

  VAR_2 = FUNC_3(VAR_0->pclk);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_3(VAR_0->clk);
  if (VAR_2)
   FUNC_2(VAR_0->pclk);

  return VAR_2;
 }

 FUNC_2(VAR_0->clk);
 FUNC_2(VAR_0->pclk);

 return 0;
}
