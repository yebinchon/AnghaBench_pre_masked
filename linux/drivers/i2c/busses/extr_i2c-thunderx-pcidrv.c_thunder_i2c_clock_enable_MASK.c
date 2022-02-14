
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {scalar_t__ sys_freq; int * clk; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (struct device*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2, struct octeon_i2c *VAR_3)
{
 int VAR_4;

 if (VAR_1) {

  VAR_3->clk = FUNC_1(VAR_2, ((void*)0));
  if (FUNC_0(VAR_3->clk)) {
   VAR_3->clk = ((void*)0);
   goto skip;
  }

  VAR_4 = FUNC_3(VAR_3->clk);
  if (VAR_4)
   goto skip;
  VAR_3->sys_freq = FUNC_2(VAR_3->clk);
 } else {

  FUNC_4(VAR_2, "sclk", &VAR_3->sys_freq);
 }

skip:
 if (!VAR_3->sys_freq)
  VAR_3->sys_freq = VAR_0;
}
