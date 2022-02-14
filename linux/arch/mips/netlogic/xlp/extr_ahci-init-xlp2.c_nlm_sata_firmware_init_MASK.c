
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


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
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_21 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(int VAR_22)
{
 u32 VAR_23;
 u64 VAR_24;
 int VAR_25;

 FUNC_4("Initializing XLP9XX On-chip AHCI...\n");
 VAR_24 = FUNC_1(VAR_22);


 FUNC_5(VAR_24, VAR_17, VAR_8);
 FUNC_5(VAR_24, VAR_17, VAR_7);
 FUNC_5(VAR_24, VAR_17, VAR_6);
 FUNC_5(VAR_24, VAR_17, VAR_5);
 FUNC_5(VAR_24, VAR_17, VAR_4);
 FUNC_5(VAR_24, VAR_17, VAR_3);


 FUNC_5(VAR_24, VAR_17, VAR_15);
 FUNC_5(VAR_24, VAR_17, VAR_14);
 FUNC_5(VAR_24, VAR_17, VAR_13);
 FUNC_5(VAR_24, VAR_17, VAR_12);
 FUNC_5(VAR_24, VAR_17, VAR_11);
 FUNC_5(VAR_24, VAR_17, VAR_10);
 FUNC_7(300);


 FUNC_6(VAR_24, VAR_17, VAR_5);
 FUNC_6(VAR_24, VAR_17, VAR_4);
 FUNC_6(VAR_24, VAR_17, VAR_3);
 FUNC_6(VAR_24, VAR_17, VAR_12);
 FUNC_6(VAR_24, VAR_17, VAR_11);
 FUNC_6(VAR_24, VAR_17, VAR_10);

 FUNC_7(1000);
 FUNC_6(VAR_24, VAR_17, VAR_8);
 FUNC_7(1000);
 FUNC_6(VAR_24, VAR_17, VAR_15);
 FUNC_7(1000);


 FUNC_0(VAR_24);
 if (VAR_21)
  FUNC_8(VAR_24);

 FUNC_7(1000);
 FUNC_6(VAR_24, VAR_17, VAR_7);
 FUNC_6(VAR_24, VAR_17, VAR_6);
 FUNC_6(VAR_24, VAR_17, VAR_14);
 FUNC_6(VAR_24, VAR_17, VAR_13);
 FUNC_7(300);


 FUNC_6(VAR_24, VAR_0, VAR_1);

 FUNC_6(VAR_24, VAR_17, VAR_18);
 FUNC_6(VAR_24, VAR_17, VAR_2);
 FUNC_6(VAR_24, VAR_17, VAR_20);

 FUNC_3("Waiting for PHYs to come up.\n");
 VAR_25 = 10000;
 do {
  VAR_23 = FUNC_2(VAR_24, VAR_19);
  if ((VAR_23 & VAR_16) && (VAR_23 & VAR_9))
   break;
  FUNC_7(10);
 } while (--VAR_25 > 0);

 if (VAR_23 & VAR_9)
  FUNC_4("PHY0 is up.\n");
 else
  FUNC_4("PHY0 is down.\n");
 if (VAR_23 & VAR_16)
  FUNC_4("PHY1 is up.\n");
 else
  FUNC_4("PHY1 is down.\n");

 FUNC_4("XLP AHCI Init Done.\n");
}
