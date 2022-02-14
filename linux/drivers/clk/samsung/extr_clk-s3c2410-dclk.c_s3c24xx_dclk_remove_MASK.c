
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk_hw** hws; } ;
struct s3c24xx_dclk {int dclk0_div_change_nb; int dclk1_div_change_nb; TYPE_1__ clk_data; } ;
struct platform_device {int dummy; } ;
struct clk_hw {int clk; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,int *) ;
 struct s3c24xx_dclk* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct s3c24xx_dclk *VAR_4 = FUNC_2(VAR_3);
 struct clk_hw **VAR_5 = VAR_4->clk_data.hws;
 int VAR_6;

 FUNC_1(VAR_5[VAR_2]->clk,
    &VAR_4->dclk1_div_change_nb);
 FUNC_1(VAR_5[VAR_1]->clk,
    &VAR_4->dclk0_div_change_nb);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(VAR_5[VAR_6]);

 return 0;
}
