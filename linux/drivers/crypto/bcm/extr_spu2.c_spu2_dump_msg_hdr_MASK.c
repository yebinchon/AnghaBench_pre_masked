
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u64 ;
typedef unsigned int u16 ;
struct SPU2_FMD {int ctrl1; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct SPU2_FMD*) ;
 int FUNC_3 (int *,unsigned int,unsigned int,unsigned int,unsigned int) ;

void FUNC_4(u8 *VAR_7, unsigned int VAR_8)
{
 struct SPU2_FMD *VAR_9 = (struct SPU2_FMD *)VAR_7;
 u8 *VAR_10;
 u64 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 u16 VAR_16;

 FUNC_1("\n");
 FUNC_1("SPU2 message header %p len: %u\n", VAR_7, VAR_8);

 FUNC_2(VAR_9);
 VAR_10 = (u8 *)(VAR_9 + 1);

 VAR_11 = FUNC_0(VAR_9->ctrl1);
 VAR_12 = (VAR_11 & VAR_3) >> VAR_4;
 VAR_13 = (VAR_11 & VAR_1) >> VAR_2;
 VAR_14 = 0;
 VAR_15 = (VAR_11 & VAR_5) >> VAR_6;
 FUNC_3(VAR_10, VAR_12, VAR_13, VAR_14,
        VAR_15);


 VAR_16 = VAR_12 + VAR_13 + VAR_14 + VAR_15;
 if (VAR_0 + VAR_16 != VAR_8) {
  FUNC_1
      (" Packet parsed incorrectly. buf_len %u, sum of MD %zu\n",
       VAR_8, VAR_0 + VAR_16);
 }
 FUNC_1("\n");
}
