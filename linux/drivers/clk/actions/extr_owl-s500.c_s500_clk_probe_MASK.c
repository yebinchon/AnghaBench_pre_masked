
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct owl_clk_desc {int hw_clks; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct platform_device*,struct owl_clk_desc*) ;
 struct owl_clk_desc VAR_0 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct owl_clk_desc *VAR_2;

 VAR_2 = &VAR_0;
 FUNC_1(VAR_1, VAR_2);

 return FUNC_0(&VAR_1->dev, VAR_2->hw_clks);
}
