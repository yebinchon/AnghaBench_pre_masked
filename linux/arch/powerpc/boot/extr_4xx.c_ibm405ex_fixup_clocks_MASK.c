
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

void FUNC_7(unsigned int VAR_6, unsigned int VAR_7)
{

 u32 VAR_8 = FUNC_0(VAR_2);
 u32 VAR_9 = FUNC_0(VAR_3);
 u32 VAR_10 = FUNC_0(VAR_4);
 u32 VAR_11 = FUNC_0(VAR_5);
 u32 VAR_12 = FUNC_0(VAR_0);
 u32 VAR_13 = FUNC_0(VAR_1);


 u32 VAR_14 = FUNC_4(FUNC_1((VAR_9 >> 24) & 0xff, 1));

 u32 VAR_15 = FUNC_5(FUNC_1((VAR_9 >> 16) & 0x0f, 1));

 u32 VAR_16 = FUNC_1((VAR_10 >> 24) & 7, 8);


 u32 VAR_17 = 2;
 u32 VAR_18 = FUNC_1((VAR_11 >> 16) & 7, 8);

 u32 VAR_19 = FUNC_1((VAR_12 >> 24) & 3, 4);

 u32 VAR_20 = FUNC_1((VAR_13 >> 24) & 3, 4);


 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;


 if (VAR_8 & 0x40000000) {
  u32 VAR_29;


  switch ((VAR_8 >> 24) & 7) {
  case 0:

   VAR_29 = VAR_14;
   break;
  case 1:

   VAR_29 = VAR_14 * VAR_15 * VAR_16;
   break;
  case 5:

   VAR_29 = VAR_14 * VAR_15 * VAR_18 * VAR_17 * VAR_19 * VAR_20;
   break;
  default:
   FUNC_6("WARNING ! Invalid PLL feedback source !\n");
   goto bypass;
  }

  VAR_25 = (unsigned int)(VAR_6 * VAR_29);
 } else {
bypass:

  VAR_25 = 0;
 }


 VAR_21 = VAR_25 / (VAR_15 * VAR_16);

 VAR_22 = VAR_25 / (VAR_15 * VAR_18 * VAR_17);

 VAR_23 = VAR_22 / VAR_19;

 VAR_24 = VAR_23 / VAR_20;

 VAR_26 = VAR_21;
 VAR_27 = VAR_28 = VAR_7;

 FUNC_3(VAR_21, VAR_26, 0);
 FUNC_2("/plb", VAR_22);
 FUNC_2("/plb/opb", VAR_23);
 FUNC_2("/plb/opb/ebc", VAR_24);
 FUNC_2("/plb/opb/serial@ef600200", VAR_27);
 FUNC_2("/plb/opb/serial@ef600300", VAR_28);
}
