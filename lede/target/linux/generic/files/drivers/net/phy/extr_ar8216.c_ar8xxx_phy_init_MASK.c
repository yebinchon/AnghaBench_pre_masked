
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {int dummy; } ;
struct ar8xxx_priv {TYPE_1__* chip; struct mii_bus* mii_bus; } ;
struct TYPE_2__ {int (* phy_fixup ) (struct ar8xxx_priv*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (struct mii_bus*,int,int ,int) ;
 int FUNC_3 (struct ar8xxx_priv*,int) ;

void
FUNC_4(struct ar8xxx_priv *VAR_10)
{
 int VAR_11;
 struct mii_bus *VAR_12;

 VAR_12 = VAR_10->mii_bus;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (VAR_10->chip->phy_fixup)
   VAR_10->chip->phy_fixup(VAR_10, VAR_11);


  FUNC_2(VAR_12, VAR_11, VAR_7,
   VAR_1 | VAR_3 | VAR_2);
  if (FUNC_0(VAR_10))
   FUNC_2(VAR_12, VAR_11, VAR_9, VAR_0);
  FUNC_2(VAR_12, VAR_11, VAR_8, VAR_6 | VAR_5);
 }

 FUNC_1(VAR_12);
}
