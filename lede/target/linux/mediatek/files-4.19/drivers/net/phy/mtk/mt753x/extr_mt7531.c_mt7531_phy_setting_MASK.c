
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int (* mii_read ) (struct gsw_mt753x*,int,int) ;int (* mmd_read ) (struct gsw_mt753x*,int,int ,int ) ;int (* mmd_write ) (struct gsw_mt753x*,int,int ,int ,int) ;int (* mii_write ) (struct gsw_mt753x*,int,int,int) ;} ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct gsw_mt753x*,int,int ,int ,int) ;
 int FUNC_1 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_2 (struct gsw_mt753x*,int,int ,int ,int) ;
 int FUNC_3 (struct gsw_mt753x*,int,int ,int ,int) ;
 int FUNC_4 (struct gsw_mt753x*,int,int) ;
 int FUNC_5 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_6 (struct gsw_mt753x*,int,int ,int ) ;
 int FUNC_7 (struct gsw_mt753x*,int,int ,int ,int) ;
 int FUNC_8 (struct gsw_mt753x*,int,int ,int ,int) ;
 int FUNC_9 (struct gsw_mt753x*,int,int ,int ,int) ;
 int FUNC_10 (struct gsw_mt753x*,int,int ,int ,int) ;
 int FUNC_11 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_12 (struct gsw_mt753x*,int,int) ;
 int FUNC_13 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_14 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_15 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_16 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_17 (struct gsw_mt753x*,int,int,int) ;

__attribute__((used)) static void FUNC_18(struct gsw_mt753x *VAR_20)
{
 int VAR_21;
 u32 VAR_22;


 VAR_20->mmd_write(VAR_20, 0, VAR_9, VAR_10, 0xc0);

 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {

  VAR_20->mmd_write(VAR_20, VAR_21, VAR_1, VAR_2, 0);


  VAR_20->mii_write(VAR_20, VAR_21, 0x1f, 0x1);
  VAR_22 = VAR_20->mii_read(VAR_20, VAR_21, VAR_12);
  VAR_22 |= VAR_11;
  VAR_20->mii_write(VAR_20, VAR_21, VAR_12, VAR_22);


  VAR_20->mii_write(VAR_20, VAR_21, 0x1f, 0x52b5);
  VAR_20->mii_write(VAR_20, VAR_21, VAR_18, 0xafae);
  VAR_20->mii_write(VAR_20, VAR_21, VAR_19, 0x2f);
  VAR_20->mii_write(VAR_20, VAR_21, VAR_18, 0x8fae);
  VAR_20->mii_write(VAR_20, VAR_21, 0x1f, 0);


  VAR_20->mmd_write(VAR_20, VAR_21, VAR_3, VAR_5, 0xffff);


  VAR_20->mmd_write(VAR_20, VAR_21, VAR_3, VAR_8, 0x300);


  VAR_22 = VAR_20->mii_read(VAR_20, VAR_21, VAR_13);
  VAR_22 |= VAR_14;
  VAR_20->mii_write(VAR_20, VAR_21, VAR_13, VAR_22);

  VAR_22 = VAR_20->mmd_read(VAR_20, VAR_21, VAR_3, VAR_4);
  VAR_22 &= ~VAR_15;
  VAR_22 |= VAR_17 << VAR_16;
  VAR_20->mmd_write(VAR_20, VAR_21, VAR_3, VAR_4, VAR_22);


  VAR_20->mmd_write(VAR_20, VAR_21, VAR_3, VAR_6, 0x404);
  VAR_20->mmd_write(VAR_20, VAR_21, VAR_3, VAR_7, 0x404);
 }
}
