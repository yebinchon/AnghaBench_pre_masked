
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ar8xxx_priv {TYPE_1__* phy; int chip_data; } ;
struct ar8327_data {int dummy; } ;
struct TYPE_6__ {int platform_data; scalar_t__ of_node; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;
struct TYPE_4__ {TYPE_2__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar8xxx_priv*,scalar_t__) ;
 int FUNC_1 (struct ar8xxx_priv*,int ) ;
 int FUNC_2 (struct ar8xxx_priv*) ;
 int FUNC_3 (struct ar8xxx_priv*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(struct ar8xxx_priv *VAR_2)
{
 int VAR_3;

 VAR_2->chip_data = FUNC_4(sizeof(struct ar8327_data), VAR_1);
 if (!VAR_2->chip_data)
  return -VAR_0;

 if (VAR_2->phy->mdio.dev.of_node)
  VAR_3 = FUNC_0(VAR_2, VAR_2->phy->mdio.dev.of_node);
 else
  VAR_3 = FUNC_1(VAR_2,
          VAR_2->phy->mdio.dev.platform_data);

 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2);

 FUNC_3(VAR_2);

 return 0;
}
