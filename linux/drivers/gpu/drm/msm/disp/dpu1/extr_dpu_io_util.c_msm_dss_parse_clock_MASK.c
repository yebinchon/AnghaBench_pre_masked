
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct dss_module_power {int num_clk; TYPE_1__* clk_config; } ;
struct dss_clk {int dummy; } ;
struct TYPE_7__ {int rate; int type; int clk; int clk_name; } ;


 int FUNC_0 (TYPE_2__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int,int,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int,char const**) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char const*,int) ;

int FUNC_10(struct platform_device *VAR_5,
   struct dss_module_power *VAR_6)
{
 u32 VAR_7, VAR_8 = 0;
 const char *VAR_9;
 int VAR_10 = 0;

 if (!VAR_5 || !VAR_6)
  return -VAR_2;

 VAR_6->num_clk = 0;
 VAR_10 = FUNC_6(VAR_5->dev.of_node, "clock-names");
 if (VAR_10 <= 0) {
  FUNC_8("clocks are not defined\n");
  return 0;
 }

 VAR_6->clk_config = FUNC_2(&VAR_5->dev,
          VAR_10, sizeof(struct dss_clk),
          VAR_4);
 if (!VAR_6->clk_config)
  return -VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  VAR_8 = FUNC_7(VAR_5->dev.of_node,
         "clock-names", VAR_7,
         &VAR_9);
  if (VAR_8) {
   FUNC_0(&VAR_5->dev, "Failed to get clock name for %d\n",
    VAR_7);
   break;
  }
  FUNC_9(VAR_6->clk_config[VAR_7].clk_name, VAR_9,
   sizeof(VAR_6->clk_config[VAR_7].clk_name));

  VAR_6->clk_config[VAR_7].type = VAR_0;
 }

 VAR_8 = FUNC_3(&VAR_5->dev, VAR_6->clk_config, VAR_10);
 if (VAR_8) {
  FUNC_0(&VAR_5->dev, "Failed to get clock refs %d\n", VAR_8);
  goto err;
 }

 VAR_8 = FUNC_5(VAR_5->dev.of_node, 0);
 if (VAR_8) {
  FUNC_0(&VAR_5->dev, "Failed to set clock defaults %d\n", VAR_8);
  goto err;
 }

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  u32 VAR_11 = FUNC_1(VAR_6->clk_config[VAR_7].clk);
  if (!VAR_11)
   continue;
  VAR_6->clk_config[VAR_7].rate = VAR_11;
  VAR_6->clk_config[VAR_7].type = VAR_1;
 }

 VAR_6->num_clk = VAR_10;
 return 0;

err:
 FUNC_4(VAR_6->clk_config, VAR_10);
 return VAR_8;
}
