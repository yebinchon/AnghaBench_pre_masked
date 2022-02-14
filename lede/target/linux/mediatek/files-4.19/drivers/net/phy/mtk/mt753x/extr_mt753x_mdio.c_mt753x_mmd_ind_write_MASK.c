
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gsw_mt753x {int phy_base; int mii_lock; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct gsw_mt753x*,int,int ,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gsw_mt753x *VAR_11, int VAR_12, int VAR_13, u16 VAR_14,
     u16 VAR_15)
{
 if (VAR_12 < VAR_9)
  VAR_12 = (VAR_11->phy_base + VAR_12) & VAR_10;

 FUNC_1(&VAR_11->mii_lock);

 FUNC_0(VAR_11, VAR_12, VAR_2,
        (VAR_4 << VAR_5) |
        ((VAR_13 << VAR_8) & VAR_7),
        VAR_0, VAR_1);

 FUNC_0(VAR_11, VAR_12, VAR_3, VAR_14,
        VAR_0, VAR_1);

 FUNC_0(VAR_11, VAR_12, VAR_2,
        (VAR_6 << VAR_5) |
        ((VAR_13 << VAR_8) & VAR_7),
        VAR_0, VAR_1);

 FUNC_0(VAR_11, VAR_12, VAR_3, VAR_15,
        VAR_0, VAR_1);

 FUNC_2(&VAR_11->mii_lock);
}
