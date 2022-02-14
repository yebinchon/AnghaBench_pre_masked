
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct tegra_aconnect {void* apb2ape_clk; void* ape_clk; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct tegra_aconnect*) ;
 void* FUNC_5 (TYPE_1__*,char*) ;
 struct tegra_aconnect* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct tegra_aconnect *VAR_4;

 if (!VAR_3->dev.of_node)
  return -VAR_0;

 VAR_4 = FUNC_6(&VAR_3->dev, sizeof(struct tegra_aconnect),
    VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->ape_clk = FUNC_5(&VAR_3->dev, "ape");
 if (FUNC_0(VAR_4->ape_clk)) {
  FUNC_2(&VAR_3->dev, "Can't retrieve ape clock\n");
  return FUNC_1(VAR_4->ape_clk);
 }

 VAR_4->apb2ape_clk = FUNC_5(&VAR_3->dev, "apb2ape");
 if (FUNC_0(VAR_4->apb2ape_clk)) {
  FUNC_2(&VAR_3->dev, "Can't retrieve apb2ape clock\n");
  return FUNC_1(VAR_4->apb2ape_clk);
 }

 FUNC_4(&VAR_3->dev, VAR_4);
 FUNC_8(&VAR_3->dev);

 FUNC_7(VAR_3->dev.of_node, ((void*)0), ((void*)0), &VAR_3->dev);

 FUNC_3(&VAR_3->dev, "Tegra ACONNECT bus registered\n");

 return 0;
}
