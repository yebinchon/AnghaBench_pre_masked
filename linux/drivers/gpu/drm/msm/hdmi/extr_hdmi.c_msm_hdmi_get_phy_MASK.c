
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hdmi {int phy_dev; int phy; struct platform_device* pdev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct hdmi *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->pdev;
 struct platform_device *VAR_4;
 struct device_node *VAR_5;

 VAR_5 = FUNC_4(VAR_3->dev.of_node, "phys", 0);
 if (!VAR_5) {
  FUNC_0(&VAR_3->dev, "cannot find phy device\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_5);
 if (VAR_4)
  VAR_2->phy = FUNC_5(VAR_4);

 FUNC_3(VAR_5);

 if (!VAR_4 || !VAR_2->phy) {
  FUNC_0(&VAR_3->dev, "phy driver is not ready\n");
  return -VAR_1;
 }

 VAR_2->phy_dev = FUNC_1(&VAR_4->dev);

 return 0;
}
