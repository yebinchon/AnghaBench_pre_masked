
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(unsigned int VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_0);
 u32 VAR_5 = FUNC_2(VAR_1);
 u32 VAR_6 = FUNC_2(VAR_2);
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u32 VAR_19, VAR_20, VAR_21;

 VAR_13 = 8 - ((VAR_5 & 0x00070000) >> 16);
 VAR_14 = 8 - ((VAR_5 & 0x00007000) >> 12);
 VAR_15 = (VAR_5 & 0x00f00000) >> 20;
 if (VAR_15 == 0)
  VAR_15 = 16;

 VAR_16 = ((VAR_4 & 0x00030000) >> 16) + 1;
 VAR_18 = ((VAR_4 & 0x00000300) >> 8) + 2;
 VAR_17 = ((VAR_4 & 0x00003000) >> 12) + 1;

 VAR_21 = VAR_15 * VAR_14;

 VAR_19 = ((VAR_4 & 0x00300000) >> 20) + 1;
 if (VAR_5 & 0x80000000)
  VAR_7 = VAR_3 * VAR_21 / (VAR_13 * VAR_19);
 else
  VAR_7 = VAR_3 / VAR_19;

 VAR_8 = VAR_7 / VAR_16;
 VAR_9 = VAR_8 / VAR_17;
 VAR_10 = VAR_8 / VAR_18;
 VAR_20 = VAR_7;
 VAR_11 = VAR_7 / (VAR_6 & 0x0000007f);
 VAR_12 = VAR_7 / ((VAR_6 & 0x00007f00) >> 8);

 FUNC_1(VAR_7, VAR_20, 0);
 FUNC_0("/plb", VAR_8);
 FUNC_0("/plb/opb", VAR_9);
 FUNC_0("/plb/ebc", VAR_10);
 FUNC_0("/plb/opb/serial@ef600300", VAR_11);
 FUNC_0("/plb/opb/serial@ef600400", VAR_12);
}
