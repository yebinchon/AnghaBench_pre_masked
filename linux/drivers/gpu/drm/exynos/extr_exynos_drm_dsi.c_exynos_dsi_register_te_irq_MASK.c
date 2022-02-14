
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int te_gpio; int dev; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int,int ,int *,int ,char*,struct exynos_dsi*) ;

__attribute__((used)) static int FUNC_8(struct exynos_dsi *VAR_4,
          struct device *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_4->te_gpio = FUNC_6(VAR_5->of_node, "te-gpios", 0);
 if (VAR_4->te_gpio == -VAR_0)
  return 0;

 if (!FUNC_2(VAR_4->te_gpio)) {
  VAR_6 = VAR_4->te_gpio;
  FUNC_0(VAR_4->dev, "cannot get te-gpios, %d\n", VAR_6);
  goto out;
 }

 VAR_6 = FUNC_3(VAR_4->te_gpio, "te_gpio");
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "gpio request failed with %d\n", VAR_6);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_4->te_gpio);
 FUNC_5(VAR_7, VAR_2);

 VAR_6 = FUNC_7(VAR_7, VAR_3, ((void*)0),
     VAR_1, "TE", VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "request interrupt failed with %d\n", VAR_6);
  FUNC_1(VAR_4->te_gpio);
  goto out;
 }

out:
 return VAR_6;
}
