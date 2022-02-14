
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mii_bus {char* name; int id; TYPE_1__* parent; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mii_bus* FUNC_0 (int *) ;
 struct device_node* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (int ,int ,struct resource*) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct mii_bus*,int ) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct mii_bus *VAR_6;
 struct resource VAR_7;
 struct device_node *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_5->dev.of_node);
 FUNC_5(VAR_8);
 if (VAR_8 != VAR_3)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_5->dev.of_node, 0, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_6 = FUNC_0(&VAR_4);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->name = "ep8248e-mdio-bitbang";
 VAR_6->parent = &VAR_5->dev;
 FUNC_6(VAR_6->id, VAR_2, "%x", VAR_7.start);

 VAR_9 = FUNC_4(VAR_6, VAR_5->dev.of_node);
 if (VAR_9)
  goto err_free_bus;

 return 0;
err_free_bus:
 FUNC_1(VAR_6);
 return VAR_9;
}
