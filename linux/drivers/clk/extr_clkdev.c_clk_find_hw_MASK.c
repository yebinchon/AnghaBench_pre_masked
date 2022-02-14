
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_lookup {struct clk_hw* clk_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;
 struct clk_lookup* FUNC_1 (char const*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct clk_hw *FUNC_4(const char *VAR_2, const char *VAR_3)
{
 struct clk_lookup *VAR_4;
 struct clk_hw *VAR_5 = FUNC_0(-VAR_0);

 FUNC_2(&VAR_1);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  VAR_5 = VAR_4->clk_hw;
 FUNC_3(&VAR_1);

 return VAR_5;
}
