
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
 int VAR_11 ;
 int FUNC_0 (struct gsw_mt753x*,int,int ,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct gsw_mt753x *VAR_12, int VAR_13, int VAR_14, u16 VAR_15)
{
 u16 VAR_16;

 if (VAR_13 < VAR_10)
  VAR_13 = (VAR_12->phy_base + VAR_13) & VAR_11;

 FUNC_1(&VAR_12->mii_lock);

 FUNC_0(VAR_12, VAR_13, VAR_3,
        (VAR_5 << VAR_6) |
        ((VAR_14 << VAR_9) & VAR_8),
        VAR_1, VAR_2);

 FUNC_0(VAR_12, VAR_13, VAR_4, VAR_15,
        VAR_1, VAR_2);

 FUNC_0(VAR_12, VAR_13, VAR_3,
        (VAR_7 << VAR_6) |
        ((VAR_14 << VAR_9) & VAR_8),
        VAR_1, VAR_2);

 VAR_16 = FUNC_0(VAR_12, VAR_13, VAR_4, 0,
       VAR_0, VAR_2);

 FUNC_2(&VAR_12->mii_lock);

 return VAR_16;
}
