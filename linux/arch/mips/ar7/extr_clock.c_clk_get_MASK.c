
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 struct clk VAR_1 ;
 struct clk VAR_2 ;
 struct clk VAR_3 ;
 int FUNC_1 (char const*,char*) ;
 struct clk VAR_4 ;

struct clk *FUNC_2(struct device *VAR_5, const char *VAR_6)
{
 if (!FUNC_1(VAR_6, "bus"))
  return &VAR_1;

 if (!FUNC_1(VAR_6, "cpmac"))
  return &VAR_4;
 if (!FUNC_1(VAR_6, "cpu"))
  return &VAR_2;
 if (!FUNC_1(VAR_6, "dsp"))
  return &VAR_3;
 if (!FUNC_1(VAR_6, "vbus"))
  return &VAR_4;
 return FUNC_0(-VAR_0);
}
