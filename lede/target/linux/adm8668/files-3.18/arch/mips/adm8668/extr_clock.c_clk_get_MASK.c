
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*) ;
 struct clk VAR_1 ;
 struct clk VAR_2 ;

struct clk *FUNC_3(struct device *VAR_3, const char *VAR_4)
{
 const char *VAR_5 = VAR_4;

 if (VAR_3)
  VAR_5 = FUNC_1(VAR_3);

 if (!FUNC_2(VAR_5, "apb:uart0"))
  return &VAR_2;
 if (!FUNC_2(VAR_5, "sys"))
  return &VAR_1;

 return FUNC_0(-VAR_0);
}
