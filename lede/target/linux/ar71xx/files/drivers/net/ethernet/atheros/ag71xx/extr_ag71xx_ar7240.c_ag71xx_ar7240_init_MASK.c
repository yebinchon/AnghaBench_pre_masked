
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar7240sw {int stats_lock; } ;
struct ag71xx {int link_work; struct ar7240sw* phy_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct ar7240sw* FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ar7240sw*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ag71xx *VAR_2)
{
 struct ar7240sw *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->phy_priv = VAR_3;
 FUNC_2(VAR_3);

 FUNC_3(&VAR_3->stats_lock);
 FUNC_0(&VAR_2->link_work, VAR_1);

 return 0;
}
