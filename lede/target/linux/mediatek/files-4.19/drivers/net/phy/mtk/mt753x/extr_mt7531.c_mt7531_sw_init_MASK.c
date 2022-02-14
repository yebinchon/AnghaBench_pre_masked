
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int phy_base; int smi_addr; int (* mii_read ) (struct gsw_mt753x*,int,int ) ;int port6_cfg; int port5_cfg; int (* mii_write ) (struct gsw_mt753x*,int,int ,int) ;int mmd_write; int mmd_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct gsw_mt753x*) ;
 int FUNC_2 (struct gsw_mt753x*,int,int *) ;
 int FUNC_3 (struct gsw_mt753x*) ;
 int FUNC_4 (struct gsw_mt753x*,int,int ) ;
 int FUNC_5 (struct gsw_mt753x*,int,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct gsw_mt753x*,int ) ;
 int FUNC_7 (struct gsw_mt753x*,int ,int) ;
 int FUNC_8 (struct gsw_mt753x*,int,int ) ;
 int FUNC_9 (struct gsw_mt753x*,int,int ,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct gsw_mt753x *VAR_16)
{
 int VAR_17;
 u32 VAR_18;

 VAR_16->phy_base = (VAR_16->smi_addr + 1) & VAR_6;

 VAR_16->mii_read = FUNC_4;
 VAR_16->mii_write = FUNC_5;
 VAR_16->mmd_read = VAR_14;
 VAR_16->mmd_write = VAR_15;

 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  VAR_18 = VAR_16->mii_read(VAR_16, VAR_17, VAR_4);
  VAR_18 |= VAR_0;
  VAR_16->mii_write(VAR_16, VAR_17, VAR_4, VAR_18);
 }


 FUNC_7(VAR_16, FUNC_0(5), VAR_1);
 FUNC_7(VAR_16, FUNC_0(6), VAR_1);


 FUNC_7(VAR_16, VAR_13, VAR_12 | VAR_11);
 FUNC_10(10, 20);


 VAR_18 = FUNC_6(VAR_16, VAR_9);
 FUNC_7(VAR_16, VAR_9, VAR_18 | VAR_10);


 FUNC_3(VAR_16);


 FUNC_7(VAR_16, VAR_2,
    (15 << VAR_7) | (11 << VAR_3) |
    VAR_8);

 FUNC_1(VAR_16);
 FUNC_2(VAR_16, 5, &VAR_16->port5_cfg);
 FUNC_2(VAR_16, 6, &VAR_16->port6_cfg);

 return 0;
}
