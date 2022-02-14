
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar7240sw {int swdev; } ;
struct ag71xx {struct ar7240sw* phy_priv; } ;


 int FUNC_0 (struct ar7240sw*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ag71xx *VAR_0)
{
 struct ar7240sw *VAR_1 = VAR_0->phy_priv;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->swdev);
 FUNC_0(VAR_1);
 VAR_0->phy_priv = ((void*)0);
}
