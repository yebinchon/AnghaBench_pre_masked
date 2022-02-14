
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gmi {int rst; int clk; int base; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct tegra_gmi* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int ,int *,struct device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct tegra_gmi*) ;
 int FUNC_10 (struct tegra_gmi*) ;
 int FUNC_11 (struct tegra_gmi*) ;
 int FUNC_12 (struct tegra_gmi*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct tegra_gmi *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = VAR_4;

 VAR_6 = FUNC_8(VAR_3, VAR_2, 0);
 VAR_5->base = FUNC_4(VAR_4, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_3(VAR_4, "gmi");
 if (FUNC_0(VAR_5->clk)) {
  FUNC_2(VAR_4, "can not get clock\n");
  return FUNC_1(VAR_5->clk);
 }

 VAR_5->rst = FUNC_6(VAR_4, "gmi");
 if (FUNC_0(VAR_5->rst)) {
  FUNC_2(VAR_4, "can not get reset\n");
  return FUNC_1(VAR_5->rst);
 }

 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_11(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_7(VAR_4->of_node, ((void*)0), VAR_4);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4, "fail to create devices.\n");
  FUNC_10(VAR_5);
  return VAR_7;
 }

 FUNC_9(VAR_3, VAR_5);

 return 0;
}
