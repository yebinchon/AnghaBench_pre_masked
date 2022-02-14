
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {TYPE_2__* ca; } ;
struct ethtool_drvinfo {int driver; int version; int bus_info; int fw_version; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 char* VAR_0 ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
         struct ethtool_drvinfo *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_3->ca, VAR_2->fw_version);

 FUNC_3(VAR_2->bus_info, FUNC_0(VAR_3->ca->dev.parent),
  sizeof(VAR_2->bus_info));

 FUNC_3(VAR_2->version, VAR_0,
  sizeof(VAR_2->version));

 FUNC_3(VAR_2->driver, "ib_ipoib", sizeof(VAR_2->driver));
}
