
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

struct clk *FUNC_3(struct device *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_2);

 if (!FUNC_2(VAR_4, "apb:uart0") || !FUNC_2(VAR_4, "apb:uart1"))
  return &VAR_1;

 return FUNC_0(-VAR_0);
}
