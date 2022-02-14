
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lpss_clk_data {char* name; struct clk* clk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,char*,int *,int ,int) ;
 struct lpss_clk_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct platform_device*,struct lpss_clk_data*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct lpss_clk_data *VAR_3;
 struct clk *VAR_4;

 VAR_3 = FUNC_3(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;


 VAR_3->name = "lpss_clk";
 VAR_4 = FUNC_2(&VAR_2->dev, VAR_3->name, ((void*)0),
          0, 100000000);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->clk = VAR_4;
 FUNC_4(VAR_2, VAR_3);
 return 0;
}
