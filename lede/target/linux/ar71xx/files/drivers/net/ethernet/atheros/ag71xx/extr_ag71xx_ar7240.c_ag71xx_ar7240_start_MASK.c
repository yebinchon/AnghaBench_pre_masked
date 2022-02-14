
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar7240sw {int swdev; } ;
struct ag71xx {int duplex; int link_work; TYPE_1__* dev; int speed; struct ar7240sw* phy_priv; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ar7240sw*,int ) ;
 int FUNC_2 (struct ar7240sw*) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(struct ag71xx *VAR_2)
{
 struct ar7240sw *VAR_3 = VAR_2->phy_priv;

 FUNC_2(VAR_3);

 VAR_2->speed = VAR_1;
 VAR_2->duplex = 1;

 FUNC_1(VAR_3, VAR_2->dev->dev_addr);
 FUNC_0(&VAR_3->swdev);

 FUNC_3(&VAR_2->link_work, VAR_0 / 10);
}
