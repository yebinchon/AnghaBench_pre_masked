
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {int port; int ca; } ;
struct ib_port_attr {int active_width; int active_speed; } ;
struct TYPE_2__ {int speed; int phy_address; int port; int autoneg; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,struct ib_port_attr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6,
        struct ethtool_link_ksettings *VAR_7)
{
 struct ipoib_dev_priv *VAR_8 = FUNC_3(VAR_6);
 struct ib_port_attr VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (!FUNC_4(VAR_6)) {
  VAR_7->base.speed = VAR_5;
  VAR_7->base.duplex = VAR_2;
  return 0;
 }

 VAR_10 = FUNC_0(VAR_8->ca, VAR_8->port, &VAR_9);
 if (VAR_10 < 0)
  return -VAR_3;

 VAR_11 = FUNC_1(VAR_9.active_speed);
 VAR_12 = FUNC_2(VAR_9.active_width);

 if (VAR_11 < 0 || VAR_12 < 0)
  return -VAR_3;





 VAR_7->base.speed = VAR_11 * VAR_12;
 VAR_7->base.duplex = VAR_1;

 VAR_7->base.phy_address = 0xFF;

 VAR_7->base.autoneg = VAR_0;
 VAR_7->base.port = VAR_4;

 return 0;
}
