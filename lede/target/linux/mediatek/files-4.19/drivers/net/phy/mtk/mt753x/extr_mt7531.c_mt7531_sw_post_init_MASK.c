
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int (* mmd_read ) (struct gsw_mt753x*,int ,int ,int ) ;int (* mii_read ) (struct gsw_mt753x*,int,int ) ;int (* mmd_write ) (struct gsw_mt753x*,int ,int ,int ,int) ;int (* mii_write ) (struct gsw_mt753x*,int,int ,int) ;} ;


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
 int FUNC_0 (struct gsw_mt753x*,int) ;
 int FUNC_1 (struct gsw_mt753x*,int) ;
 int FUNC_2 (struct gsw_mt753x*) ;
 int FUNC_3 (struct gsw_mt753x*) ;
 int FUNC_4 (struct gsw_mt753x*) ;
 int FUNC_5 (struct gsw_mt753x*,int ) ;
 int FUNC_6 (struct gsw_mt753x*,int ,int ,int ) ;
 int FUNC_7 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_8 (struct gsw_mt753x*,int,int ) ;
 int FUNC_9 (struct gsw_mt753x*,int,int ,int) ;
 int FUNC_10 (struct gsw_mt753x*,int ,int ,int ) ;
 int FUNC_11 (struct gsw_mt753x*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_12(struct gsw_mt753x *VAR_13)
{
 int VAR_14;
 u32 VAR_15;

 FUNC_3(VAR_13);




 VAR_15 = VAR_13->mmd_read(VAR_13, 0, VAR_9, VAR_10);
 VAR_15 |= VAR_11;
 VAR_15 &= ~VAR_12;
 VAR_13->mmd_write(VAR_13, 0, VAR_9, VAR_10, VAR_15);

 FUNC_4(VAR_13);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_15 = VAR_13->mii_read(VAR_13, VAR_14, VAR_7);
  VAR_15 &= ~VAR_0;
  VAR_13->mii_write(VAR_13, VAR_14, VAR_7, VAR_15);
 }

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
  FUNC_0(VAR_13, VAR_14);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
  FUNC_1(VAR_13, VAR_14);

 VAR_15 = FUNC_5(VAR_13, VAR_1);
 VAR_15 &= VAR_3;
 if (VAR_15 == VAR_2) {
  FUNC_2(VAR_13);
 } else {
  VAR_15 = FUNC_5(VAR_13, VAR_4);
  if (VAR_15 & VAR_6) {
   VAR_15 = VAR_13->mmd_read(VAR_13, 0, VAR_9,
         VAR_10);
   VAR_15 &= ~VAR_5;
   VAR_13->mmd_write(VAR_13, 0, VAR_9, VAR_10,
           VAR_15);
  } else {
   FUNC_2(VAR_13);
  }
 }

 return 0;
}
