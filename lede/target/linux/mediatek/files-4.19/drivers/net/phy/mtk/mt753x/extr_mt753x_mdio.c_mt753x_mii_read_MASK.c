
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsw_mt753x {int phy_base; int mii_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gsw_mt753x*,int,int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct gsw_mt753x *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5 < VAR_2)
  VAR_5 = (VAR_4->phy_base + VAR_5) & VAR_3;

 FUNC_1(&VAR_4->mii_lock);
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, 0, VAR_0, VAR_1);
 FUNC_2(&VAR_4->mii_lock);

 return VAR_7;
}
