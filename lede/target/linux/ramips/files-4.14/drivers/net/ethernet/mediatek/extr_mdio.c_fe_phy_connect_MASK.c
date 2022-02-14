
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fe_priv {int phy_flags; scalar_t__ mii_bus; scalar_t__ phy_dev; TYPE_1__* phy; } ;
struct TYPE_2__ {scalar_t__* phy; scalar_t__* phy_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct fe_priv*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fe_priv *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_2->phy->phy_node[VAR_3]) {
   if (!VAR_2->phy_dev) {
    VAR_2->phy_dev = VAR_2->phy->phy[VAR_3];
    VAR_2->phy_flags = VAR_1;
   }
  } else if (VAR_2->mii_bus && FUNC_0(VAR_2->mii_bus, VAR_3)) {
   FUNC_1(VAR_2, FUNC_0(VAR_2->mii_bus, VAR_3));
   if (!VAR_2->phy_dev) {
    VAR_2->phy_dev = FUNC_0(VAR_2->mii_bus, VAR_3);
    VAR_2->phy_flags = VAR_0;
   }
  }
 }

 return 0;
}
