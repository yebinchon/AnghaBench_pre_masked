
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rtl_priv {int fixup; int page; int dev; int bus; } ;
struct TYPE_2__ {int addr; int bus; } ;
struct phy_device {int phy_id; TYPE_1__ mdio; } ;
typedef int priv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct phy_device *VAR_2)
{
 struct rtl_priv VAR_3;
 u16 VAR_4;


 if (VAR_2->mdio.addr != 0 && VAR_2->mdio.addr != 4)
  return 0;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.fixup = 1;
 VAR_3.page = -1;
 VAR_3.bus = VAR_2->mdio.bus;
 VAR_4 = FUNC_1(&VAR_3.dev, VAR_1);
 if (VAR_4 == 0x5988)
  VAR_2->phy_id = VAR_0;

 return 0;
}
