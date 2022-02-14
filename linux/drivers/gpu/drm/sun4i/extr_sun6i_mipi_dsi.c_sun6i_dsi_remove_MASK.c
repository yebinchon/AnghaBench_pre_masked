
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dsi {int mod_clk; int host; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int *) ;
 struct sun6i_dsi* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct sun6i_dsi *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_1->dev, &VAR_0);
 FUNC_3(&VAR_3->host);
 FUNC_4(VAR_2);
 FUNC_0(VAR_3->mod_clk);

 return 0;
}
