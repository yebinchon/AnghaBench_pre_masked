
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nuport_mac_priv {int lock; TYPE_1__* phydev; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int addr; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct nuport_mac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct nuport_mac_priv *VAR_9 = FUNC_1(VAR_8);
 u32 VAR_10;
 u8 VAR_11;
 unsigned long VAR_12;
 irqreturn_t VAR_13 = VAR_0;

 FUNC_4(&VAR_9->lock, VAR_12);
 VAR_10 = FUNC_3(VAR_2);
 VAR_11 = (VAR_10 >> VAR_3) & (VAR_5 - 1);

 if (VAR_11 != VAR_9->phydev->addr) {
  FUNC_0(VAR_8, "spurious PHY irq (phy: %d)\n", VAR_11);
  VAR_13 = VAR_1;
  goto out;
 }

 VAR_9->phydev->link = (VAR_10 & VAR_4);
 FUNC_2(VAR_8);

out:
 FUNC_5(&VAR_9->lock, VAR_12);
 return VAR_13;
}
