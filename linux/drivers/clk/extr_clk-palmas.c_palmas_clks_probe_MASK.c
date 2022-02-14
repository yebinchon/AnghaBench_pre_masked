
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_10__ {int * init; } ;
struct palmas_clock_info {TYPE_3__ hw; TYPE_1__* clk_desc; struct palmas* palmas; TYPE_2__* dev; } ;
struct TYPE_8__ {int clk_name; } ;
struct palmas_clks_of_match_data {TYPE_1__ desc; int init; } ;
struct palmas {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int,...) ;
 struct palmas* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 struct palmas_clock_info* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct device_node*,int ,TYPE_3__*) ;
 int VAR_2 ;
 struct palmas_clks_of_match_data* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct platform_device*,struct palmas_clock_info*) ;
 int FUNC_7 (struct palmas_clock_info*) ;
 int FUNC_8 (struct platform_device*,struct palmas_clock_info*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct palmas *VAR_4 = FUNC_1(VAR_3->dev.parent);
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 const struct palmas_clks_of_match_data *VAR_6;
 struct palmas_clock_info *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(&VAR_3->dev);
 if (!VAR_6)
  return 1;

 VAR_7 = FUNC_3(&VAR_3->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(VAR_3, VAR_7);
 FUNC_8(VAR_3, VAR_7);

 VAR_7->dev = &VAR_3->dev;
 VAR_7->palmas = VAR_4;

 VAR_7->clk_desc = &VAR_6->desc;
 VAR_7->hw.init = &VAR_6->init;
 VAR_8 = FUNC_2(&VAR_3->dev, &VAR_7->hw);
 if (VAR_8) {
  FUNC_0(&VAR_3->dev, "Fail to register clock %s, %d\n",
   VAR_6->desc.clk_name, VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_3->dev, "Clock config failed, %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_5, VAR_2, &VAR_7->hw);
 if (VAR_8 < 0)
  FUNC_0(&VAR_3->dev, "Fail to add clock driver, %d\n", VAR_8);
 return VAR_8;
}
