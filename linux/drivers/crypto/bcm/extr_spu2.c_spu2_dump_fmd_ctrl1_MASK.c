
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(u64 VAR_30)
{
 u8 VAR_31;
 u8 VAR_32;
 u8 VAR_33;
 u8 VAR_34;
 u8 VAR_35;
 u8 VAR_36;
 u8 VAR_37;

 FUNC_0(" FMD CTRL1 %#16llx\n", VAR_30);
 if (VAR_30 & VAR_29)
  FUNC_0("  Tag after payload\n");

 FUNC_0("  Msg includes ");
 if (VAR_30 & VAR_11)
  FUNC_0("FD ");
 if (VAR_30 & VAR_8)
  FUNC_0("AAD1 ");
 if (VAR_30 & VAR_12)
  FUNC_0("NAAD ");
 if (VAR_30 & VAR_9)
  FUNC_0("AAD2 ");
 if (VAR_30 & VAR_10)
  FUNC_0("ESN ");
 FUNC_0("\n");

 VAR_31 = (VAR_30 & VAR_4) >> VAR_5;
 FUNC_0("  Hash key len %u\n", VAR_31);

 VAR_32 = (VAR_30 & VAR_0) >> VAR_1;
 FUNC_0("  Cipher key len %u\n", VAR_32);

 if (VAR_30 & VAR_2)
  FUNC_0("  Generate IV\n");

 if (VAR_30 & VAR_3)
  FUNC_0("  IV included in hash\n");

 if (VAR_30 & VAR_26)
  FUNC_0("  Return IV in output before payload\n");

 VAR_33 = (VAR_30 & VAR_27) >> VAR_28;
 FUNC_0("  Length of returned IV %u bytes\n",
     VAR_33 ? VAR_33 : 16);

 VAR_34 = (VAR_30 & VAR_15) >> VAR_16;
 FUNC_0("  IV offset %u\n", VAR_34);

 VAR_35 = (VAR_30 & VAR_13) >> VAR_14;
 FUNC_0("  Input IV len %u bytes\n", VAR_35);

 VAR_36 = (VAR_30 & VAR_6) >> VAR_7;
 FUNC_0("  Hash tag length %u bytes\n", VAR_36);

 FUNC_0("  Return ");
 VAR_37 = (VAR_30 & VAR_20) >> VAR_21;
 if (VAR_37)
  FUNC_0("FMD ");
 if (VAR_37 == VAR_24)
  FUNC_0("OMD ");
 else if (VAR_37 == VAR_25)
  FUNC_0("OMD IV ");
 if (VAR_30 & VAR_19)
  FUNC_0("FD ");
 if (VAR_30 & VAR_17)
  FUNC_0("AAD1 ");
 if (VAR_30 & VAR_22)
  FUNC_0("NAAD ");
 if (VAR_30 & VAR_18)
  FUNC_0("AAD2 ");
 if (VAR_30 & VAR_23)
  FUNC_0("Payload");
 FUNC_0("\n");
}
