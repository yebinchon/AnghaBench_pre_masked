
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_i2c {int frequency; scalar_t__ regs; int dev; int clk; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dc_i2c *VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_4->clk);
 unsigned int VAR_6;

 FUNC_4(VAR_3, VAR_4->regs + VAR_2);
 FUNC_3(100);
 FUNC_4(0, VAR_4->regs + VAR_2);
 FUNC_3(100);

 VAR_6 = FUNC_0(VAR_5, 64 * VAR_4->frequency);
 if (VAR_6 < 1 || VAR_6 > 0xff) {
  FUNC_2(VAR_4->dev, "can't set bus speed of %u Hz\n",
   VAR_4->frequency);
  return -VAR_0;
 }
 FUNC_4(VAR_6 - 1, VAR_4->regs + VAR_1);

 return 0;
}
