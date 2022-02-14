
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
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static unsigned int FUNC_7(unsigned int VAR_7,
      unsigned int VAR_8,
      int VAR_9)
{

 u32 VAR_10 = FUNC_0(VAR_2);
 u32 VAR_11 = FUNC_0(VAR_3);


 u32 VAR_12 = FUNC_1((VAR_11 >> 24) & 0x1f, 32);
 u32 VAR_13 = FUNC_1((VAR_11 >> 16) & 0xf, 16);
 u32 VAR_14 = FUNC_1((VAR_11 >> 8) & 7, 8);
 u32 VAR_15 = FUNC_1(VAR_11 & 0x3f, 64);
 u32 VAR_16 = FUNC_1((FUNC_0(VAR_4) >> 24) & 7, 8);
 u32 VAR_17 = FUNC_1((FUNC_0(VAR_5) >> 24) & 7, 8);
 u32 VAR_18 = FUNC_1((FUNC_0(VAR_0) >> 24) & 3, 4);
 u32 VAR_19 = FUNC_1((FUNC_0(VAR_1) >> 24) & 3, 4);


 u32 VAR_20, VAR_21;


 u32 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;


 u32 VAR_27, VAR_28 = VAR_8;

 if (VAR_10 & 0x40000000) {
  u32 VAR_29;


  switch ((VAR_10 >> 24) & 7) {
  case 0:

   VAR_29 = ((VAR_10 & 0x20000000) ? VAR_14 : VAR_13) * VAR_15;
   break;
  case 1:

   VAR_29 = VAR_13 * VAR_16;
   break;
  case 5:

   VAR_29 = VAR_14 * VAR_17 * VAR_18 * VAR_19;
   break;
  default:
   FUNC_6("WARNING ! Invalid PLL feedback source !\n");
   goto bypass;
  }
  VAR_29 *= VAR_12;
  VAR_26 = VAR_7 * VAR_29;
  VAR_20 = VAR_26 / VAR_13;
  VAR_21 = VAR_26 / VAR_14;
 } else {
bypass:

  VAR_26 = 0;
  VAR_20 = VAR_21 = VAR_7;
 }

 VAR_22 = VAR_20 / VAR_16;
 VAR_23 = VAR_21 / VAR_17;
 VAR_24 = VAR_23 / VAR_18;
 VAR_25 = (VAR_9 ? VAR_24 : VAR_23) / VAR_19;


 VAR_27 = FUNC_4(VAR_6);


 if (VAR_28 == 0) {
  VAR_27 &= ~0x80u;
  FUNC_5(VAR_6, VAR_27);
 }
 if ((VAR_27 & 0x0080) == 0)
  VAR_28 = VAR_22;

 FUNC_3(VAR_22, VAR_28, 0);
 FUNC_2("/plb", VAR_23);
 FUNC_2("/plb/opb", VAR_24);
 FUNC_2("/plb/opb/ebc", VAR_25);

 return VAR_23;
}
