
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sec_pmic_dev {TYPE_1__* dev; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct clk_init_data {int name; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct sec_pmic_dev* FUNC_2 (int ) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*,char*,int,int *) ;

__attribute__((used)) static struct device_node *FUNC_5(struct platform_device *VAR_2,
  struct clk_init_data *VAR_3)
{
 struct sec_pmic_dev *VAR_4 = FUNC_2(VAR_2->dev.parent);
 struct device_node *VAR_5;
 int VAR_6;

 if (!VAR_4->dev->of_node)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_4->dev->of_node, "clocks");
 if (!VAR_5) {
  FUNC_1(&VAR_2->dev, "could not find clock sub-node\n");
  return FUNC_0(-VAR_0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_4(VAR_5, "clock-output-names", VAR_6,
    &VAR_3[VAR_6].name);

 return VAR_5;
}
