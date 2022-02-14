
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct mii_bus*,int ,int ,int ) ;
 int FUNC_3 (struct mii_bus*,int ,int) ;
 int FUNC_4 (struct mii_bus*,int ,int) ;
 scalar_t__ FUNC_5 (struct ar7240sw*) ;

__attribute__((used)) static void FUNC_6(struct ar7240sw *VAR_24)
{
 struct mii_bus *VAR_25 = VAR_24->mii_bus;


 FUNC_4(VAR_25, VAR_9,
      VAR_4 |
      (15 << VAR_7));


 FUNC_4(VAR_25, VAR_14, 0xfa50);

 if (FUNC_5(VAR_24)) {

  FUNC_4(VAR_25, VAR_21,
   0x2b |
   VAR_17 |
   VAR_18);

  FUNC_3(VAR_25, VAR_23,
     VAR_20);

  FUNC_3(VAR_25, VAR_22,
     FUNC_0(0) |
     FUNC_1(0));


  FUNC_2(VAR_25, VAR_11,
     VAR_16,
     VAR_16);


  FUNC_3(VAR_25, VAR_12,
     VAR_19);

 } else {

  FUNC_4(VAR_25, VAR_8,
   VAR_3 |
   0x2b |
   VAR_0 |
   VAR_1 |
   VAR_2);

  FUNC_3(VAR_25, VAR_10,
     VAR_5);


  FUNC_2(VAR_25, VAR_11,
     VAR_6,
     VAR_6);
 }


 FUNC_2(VAR_25, VAR_13, VAR_15, 0);
}
