
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hi3519_crg_data {int clk_data; int rstc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct hi3519_crg_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,struct hi3519_crg_data*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct hi3519_crg_data *VAR_3;

 VAR_3 = FUNC_2(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->rstc = FUNC_5(VAR_2);
 if (!VAR_3->rstc)
  return -VAR_0;

 VAR_3->clk_data = FUNC_3(VAR_2);
 if (FUNC_0(VAR_3->clk_data)) {
  FUNC_4(VAR_3->rstc);
  return FUNC_1(VAR_3->clk_data);
 }

 FUNC_6(VAR_2, VAR_3);
 return 0;
}
