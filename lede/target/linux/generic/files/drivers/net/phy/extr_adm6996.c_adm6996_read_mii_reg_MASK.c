
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct mii_bus* bus; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct mii_bus {int (* read ) (struct mii_bus*,int ) ;} ;
struct adm6996_priv {struct phy_device* priv; } ;
typedef enum admreg { ____Placeholder_admreg } admreg ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mii_bus*,int ) ;

__attribute__((used)) static u16
FUNC_2(struct adm6996_priv *VAR_0, enum admreg VAR_1)
{
 struct phy_device *VAR_2 = VAR_0->priv;
 struct mii_bus *VAR_3 = VAR_2->mdio.bus;

 return VAR_3->read(VAR_3, FUNC_0(VAR_1));
}
