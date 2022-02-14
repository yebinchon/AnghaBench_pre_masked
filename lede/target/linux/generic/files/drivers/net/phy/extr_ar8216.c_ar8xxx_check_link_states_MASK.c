
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int ports; } ;
struct ar8xxx_priv {int* link_up; int reg_mutex; TYPE_4__* phy; TYPE_2__* chip; TYPE_1__ dev; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_8__ {TYPE_3__ mdio; } ;
struct TYPE_6__ {int (* read_port_status ) (struct ar8xxx_priv*,int) ;int (* atu_flush_port ) (struct ar8xxx_priv*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ar8xxx_priv*,int) ;
 int FUNC_4 (struct ar8xxx_priv*,int) ;

__attribute__((used)) static bool
FUNC_5(struct ar8xxx_priv *VAR_1)
{
 bool VAR_2, VAR_3 = 0;
 u32 VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1->reg_mutex);

 for (VAR_5 = 0; VAR_5 < VAR_1->dev.ports; VAR_5++) {
  VAR_4 = VAR_1->chip->read_port_status(VAR_1, VAR_5);
  VAR_2 = !!(VAR_4 & VAR_0);
  if (VAR_2 == VAR_1->link_up[VAR_5])
   continue;

  VAR_1->link_up[VAR_5] = VAR_2;
  VAR_3 = 1;

  if (!VAR_2)
   VAR_1->chip->atu_flush_port(VAR_1, VAR_5);
  FUNC_0(&VAR_1->phy->mdio.dev, "Port %d is %s\n",
    VAR_5, VAR_2 ? "up" : "down");
 }

 FUNC_2(&VAR_1->reg_mutex);

 return VAR_3;
}
