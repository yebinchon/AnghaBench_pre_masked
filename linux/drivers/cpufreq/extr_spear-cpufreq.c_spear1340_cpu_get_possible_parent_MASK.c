
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static struct clk *FUNC_4(unsigned long VAR_1)
{
 struct clk *VAR_2;
 int VAR_3;




 const char *VAR_4[] = {
  "sys_syn_clk",
  "pll1_clk",
  "pll2_clk",
  "pll3_clk",
 };





 if (VAR_1 <= 300000000)
  VAR_3 = 0;
 else if (VAR_1 > 300000000 && VAR_1 <= 500000000)
  VAR_3 = 3;
 else if (VAR_1 == 600000000)
  VAR_3 = 1;
 else
  return FUNC_0(-VAR_0);


 VAR_2 = FUNC_2(((void*)0), VAR_4[VAR_3]);
 if (FUNC_1(VAR_2))
  FUNC_3("Failed to get %s clock\n", VAR_4[VAR_3]);

 return VAR_2;
}
