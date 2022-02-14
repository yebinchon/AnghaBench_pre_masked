
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_i2c {int clk_div; int bus_freq; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_i2c*) ;

__attribute__((used)) static void FUNC_2(struct mtk_i2c *VAR_1)
{
 VAR_1->clk_div = FUNC_0(VAR_1->clk) / VAR_1->bus_freq - 1;
 if (VAR_1->clk_div < 99)
  VAR_1->clk_div = 99;
 if (VAR_1->clk_div > VAR_0)
  VAR_1->clk_div = VAR_0;

 FUNC_1(VAR_1);
}
