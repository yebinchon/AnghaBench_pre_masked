
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gsw_mt753x {int phy_base; int (* mii_read ) (struct gsw_mt753x*,int,int ) ;int (* mii_write ) (struct gsw_mt753x*,int,int ,int) ;int mmd_write; int mmd_read; scalar_t__ direct_phy_access; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


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
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gsw_mt753x*) ;
 int FUNC_3 (struct gsw_mt753x*) ;
 int FUNC_4 (struct gsw_mt753x*,int,int ) ;
 int FUNC_5 (struct gsw_mt753x*,int,int ,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (struct gsw_mt753x*,int,int ) ;
 int FUNC_7 (struct gsw_mt753x*,int,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (struct gsw_mt753x*,int ) ;
 int FUNC_9 (struct gsw_mt753x*,int ,int) ;
 int FUNC_10 (struct gsw_mt753x*,int,int ) ;
 int FUNC_11 (struct gsw_mt753x*,int,int ,int) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct gsw_mt753x *VAR_24)
{
 int VAR_25;
 u32 VAR_26;

 VAR_24->direct_phy_access = FUNC_1(VAR_24->dev->of_node);


 VAR_26 = FUNC_8(VAR_24, VAR_5);
 VAR_26 |= VAR_1;
 if (VAR_24->direct_phy_access)
  VAR_26 &= ~VAR_2;
 else
  VAR_26 |= VAR_2;
 FUNC_9(VAR_24, VAR_8, VAR_26);


 VAR_24->phy_base = (((VAR_26 & VAR_14) >> VAR_15) << 3) + 8;
 VAR_24->phy_base &= VAR_11;

 if (VAR_24->direct_phy_access) {
  VAR_24->mii_read = FUNC_4;
  VAR_24->mii_write = FUNC_5;
  VAR_24->mmd_read = VAR_20;
  VAR_24->mmd_write = VAR_21;
 } else {
  VAR_24->mii_read = FUNC_6;
  VAR_24->mii_write = FUNC_7;
  VAR_24->mmd_read = VAR_22;
  VAR_24->mmd_write = VAR_23;
 }

 for (VAR_25 = 0; VAR_25 < VAR_10; VAR_25++) {
  VAR_26 = VAR_24->mii_read(VAR_24, VAR_25, VAR_9);
  VAR_26 |= VAR_0;
  VAR_24->mii_write(VAR_24, VAR_25, VAR_9, VAR_26);
 }


 FUNC_9(VAR_24, FUNC_0(5), VAR_3);
 FUNC_9(VAR_24, FUNC_0(6), VAR_3);



 FUNC_9(VAR_24, VAR_19, VAR_16 | VAR_18 | VAR_17);
 FUNC_12(10, 20);


 FUNC_9(VAR_24, VAR_4,
    VAR_6 | (15 << VAR_12) |
    (2 << VAR_7) | VAR_13);

 FUNC_2(VAR_24);
 FUNC_3(VAR_24);

 return 0;
}
