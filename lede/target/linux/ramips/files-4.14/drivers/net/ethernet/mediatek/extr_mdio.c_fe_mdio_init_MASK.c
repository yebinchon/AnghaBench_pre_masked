
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fe_priv {TYPE_3__* mii_bus; TYPE_6__* dev; TYPE_1__* soc; TYPE_2__* phy; } ;
struct device_node {char* name; } ;
struct TYPE_10__ {int of_node; } ;
struct TYPE_9__ {char* name; int id; TYPE_6__* parent; struct fe_priv* priv; int reset; scalar_t__ write; scalar_t__ read; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {scalar_t__ mdio_write; scalar_t__ mdio_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__*,struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_7 (int ,int ,char*,char*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct fe_priv *VAR_5)
{
 struct device_node *VAR_6;
 int VAR_7;

 if (!VAR_5->soc->mdio_read || !VAR_5->soc->mdio_write)
  return 0;

 FUNC_8(&VAR_4.lock);
 VAR_5->phy = &VAR_4;

 VAR_6 = FUNC_4(VAR_5->dev->of_node, "mdio-bus");
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "no %s child node found", "mdio-bus");
  return -VAR_0;
 }

 if (!FUNC_3(VAR_6)) {
  VAR_7 = 0;
  goto err_put_node;
 }

 VAR_5->mii_bus = FUNC_2();
 if (!VAR_5->mii_bus) {
  VAR_7 = -VAR_1;
  goto err_put_node;
 }

 VAR_5->mii_bus->name = "mdio";
 VAR_5->mii_bus->read = VAR_5->soc->mdio_read;
 VAR_5->mii_bus->write = VAR_5->soc->mdio_write;
 VAR_5->mii_bus->reset = VAR_3;
 VAR_5->mii_bus->priv = VAR_5;
 VAR_5->mii_bus->parent = VAR_5->dev;

 FUNC_7(VAR_5->mii_bus->id, VAR_2, "%s", VAR_6->name);
 VAR_7 = FUNC_5(VAR_5->mii_bus, VAR_6);
 if (VAR_7)
  goto err_free_bus;

 return 0;

err_free_bus:
 FUNC_1(VAR_5->mii_bus);
err_put_node:
 FUNC_6(VAR_6);
 VAR_5->mii_bus = ((void*)0);
 return VAR_7;
}
