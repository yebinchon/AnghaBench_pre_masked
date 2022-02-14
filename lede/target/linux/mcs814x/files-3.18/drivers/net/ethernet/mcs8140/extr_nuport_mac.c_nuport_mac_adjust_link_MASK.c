
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ link; int duplex; int speed; } ;
struct nuport_mac_priv {scalar_t__ old_link; int old_duplex; struct phy_device* phydev; } ;
struct net_device {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nuport_mac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2)
{
 struct nuport_mac_priv *VAR_3 = FUNC_1(VAR_2);
 struct phy_device *VAR_4 = VAR_3->phydev;
 unsigned int VAR_5 = 0;
 u32 VAR_6;

 FUNC_0(!VAR_4);

 if (VAR_3->old_link != VAR_4->link) {
  VAR_5 = 1;
  VAR_3->old_link = VAR_4->link;
 }

 if (VAR_4->link && (VAR_3->old_duplex != VAR_4->duplex)) {
  VAR_6 = FUNC_2(VAR_0);
  if (VAR_4->duplex == VAR_1)
   VAR_6 |= VAR_1;
  else
   VAR_6 &= ~VAR_1;
  FUNC_3(VAR_6, VAR_0);

  VAR_5 = 1;
  VAR_3->old_duplex = VAR_4->duplex;
 }

 if (!VAR_5)
  return;

 FUNC_5("%s: link %s", VAR_2->name, VAR_4->link ?
  "UP" : "DOWN");
 if (VAR_4->link) {
  FUNC_4(" - %d/%s", VAR_4->speed,
  VAR_4->duplex == VAR_1 ? "full" : "half");
 }
 FUNC_4("\n");
}
