
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct ag71xx {TYPE_3__* phy_dev; TYPE_1__* pdev; int phy_if_mode; int dev; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct TYPE_9__ {TYPE_2__* drv; int phy_id; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {TYPE_5__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 int FUNC_1 (TYPE_5__*,char*,int ,int ,int ) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 TYPE_3__* FUNC_5 (int ,struct device_node*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (TYPE_3__*) ;

int FUNC_9(struct ag71xx *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->pdev->dev.of_node;
 struct device_node *VAR_4;
 int VAR_5;

 if (FUNC_6(VAR_3)) {
  VAR_5 = FUNC_7(VAR_3);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_2->pdev->dev,
    "Failed to register fixed PHY link: %d\n", VAR_5);
   return VAR_5;
  }

  VAR_4 = FUNC_2(VAR_3);
 } else {
  VAR_4 = FUNC_4(VAR_3, "phy-handle", 0);
 }

 if (!VAR_4) {
  FUNC_0(&VAR_2->pdev->dev,
   "Could not find valid phy node\n");
  return -VAR_0;
 }

 VAR_2->phy_dev = FUNC_5(VAR_2->dev, VAR_4, VAR_1,
         0, VAR_2->phy_if_mode);

 FUNC_3(VAR_4);

 if (!VAR_2->phy_dev) {
  FUNC_0(&VAR_2->pdev->dev,
   "Could not connect to PHY device\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_2->pdev->dev, "connected to PHY at %s [uid=%08x, driver=%s]\n",
      FUNC_8(VAR_2->phy_dev),
      VAR_2->phy_dev->phy_id, VAR_2->phy_dev->drv->name);

 return 0;
}
