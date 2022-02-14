
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2c {int sys_clk; int scb_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct img_i2c* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct img_i2c *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->sys_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "Unable to enable sys clock\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->scb_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "Unable to enable scb clock\n");
  FUNC_0(VAR_1->sys_clk);
  return VAR_2;
 }

 return 0;
}
