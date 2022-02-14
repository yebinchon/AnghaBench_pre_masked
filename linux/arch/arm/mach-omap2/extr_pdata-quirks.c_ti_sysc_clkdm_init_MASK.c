
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sysc_cookie {void* clkdm; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 void* FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
         struct clk *VAR_2, struct clk *VAR_3,
         struct ti_sysc_cookie *VAR_4)
{
 if (!FUNC_0(VAR_2))
  VAR_4->clkdm = FUNC_1(VAR_2);
 if (VAR_4->clkdm)
  return 0;
 if (!FUNC_0(VAR_3))
  VAR_4->clkdm = FUNC_1(VAR_3);
 if (VAR_4->clkdm)
  return 0;

 return -VAR_0;
}
