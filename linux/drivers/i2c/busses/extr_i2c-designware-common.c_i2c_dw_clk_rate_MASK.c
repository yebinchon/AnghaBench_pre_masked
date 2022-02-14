
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {unsigned long (* get_clk_rate_khz ) (struct dw_i2c_dev*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (struct dw_i2c_dev*) ;

unsigned long FUNC_2(struct dw_i2c_dev *VAR_0)
{




 if (FUNC_0(!VAR_0->get_clk_rate_khz))
  return 0;
 return VAR_0->get_clk_rate_khz(VAR_0);
}
