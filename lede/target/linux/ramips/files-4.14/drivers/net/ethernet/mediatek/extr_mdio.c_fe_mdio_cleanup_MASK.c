
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fe_priv {TYPE_2__* mii_bus; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct fe_priv *VAR_0)
{
 if (!VAR_0->mii_bus)
  return;

 FUNC_1(VAR_0->mii_bus);
 FUNC_2(VAR_0->mii_bus->dev.of_node);
 FUNC_0(VAR_0->mii_bus);
}
