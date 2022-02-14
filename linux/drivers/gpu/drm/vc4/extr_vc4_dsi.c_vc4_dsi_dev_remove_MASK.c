
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dsi {int dsi_host; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct device*,int *) ;
 struct vc4_dsi* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct vc4_dsi *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_1->dev, &VAR_0);
 FUNC_2(&VAR_3->dsi_host);

 return 0;
}
