
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct clk_plt_data {int mclk_lookup; int ether_clk_lookup; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct clk_plt_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct clk_plt_data*,int ) ;
 int FUNC_3 (struct clk_plt_data*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct clk_plt_data *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->ether_clk_lookup);
 FUNC_0(VAR_2->mclk_lookup);
 FUNC_2(VAR_2, VAR_0);
 FUNC_3(VAR_2);
 return 0;
}
