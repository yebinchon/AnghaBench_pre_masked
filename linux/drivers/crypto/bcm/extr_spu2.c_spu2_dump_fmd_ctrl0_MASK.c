
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef enum spu2_hash_type { ____Placeholder_spu2_hash_type } spu2_hash_type ;
typedef enum spu2_hash_mode { ____Placeholder_spu2_hash_mode } spu2_hash_mode ;
typedef enum spu2_cipher_type { ____Placeholder_spu2_cipher_type } spu2_cipher_type ;
typedef enum spu2_cipher_mode { ____Placeholder_spu2_cipher_mode } spu2_cipher_mode ;


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
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(u64 VAR_20)
{
 enum spu2_cipher_type VAR_21;
 enum spu2_cipher_mode VAR_22;
 enum spu2_hash_type VAR_23;
 enum spu2_hash_mode VAR_24;
 char *VAR_25;
 char *VAR_26;
 char *VAR_27;
 char *VAR_28;
 u8 VAR_29;
 u8 VAR_30;

 FUNC_0(" FMD CTRL0 %#16llx\n", VAR_20);
 if (VAR_20 & VAR_4)
  FUNC_0("  encrypt\n");
 else
  FUNC_0("  decrypt\n");

 VAR_21 = (VAR_20 & VAR_10) >> VAR_11;
 VAR_25 = FUNC_2(VAR_21);
 FUNC_0("  Cipher type: %s\n", VAR_25);

 if (VAR_21 != VAR_3) {
  VAR_22 = (VAR_20 & VAR_5) >> VAR_6;
  VAR_26 = FUNC_1(VAR_22);
  FUNC_0("  Cipher mode: %s\n", VAR_26);
 }

 VAR_29 = (VAR_20 & VAR_0) >> VAR_1;
 FUNC_0("  CFB %#x\n", VAR_29);

 VAR_30 = (VAR_20 & VAR_18) >> VAR_19;
 FUNC_0("  protocol %#x\n", VAR_30);

 if (VAR_20 & VAR_12)
  FUNC_0("  hash first\n");
 else
  FUNC_0("  cipher first\n");

 if (VAR_20 & VAR_2)
  FUNC_0("  check tag\n");

 VAR_23 = (VAR_20 & VAR_15) >> VAR_17;
 VAR_27 = FUNC_4(VAR_23);
 FUNC_0("  Hash type: %s\n", VAR_27);

 if (VAR_23 != VAR_16) {
  VAR_24 = (VAR_20 & VAR_13) >> VAR_14;
  VAR_28 = FUNC_3(VAR_24);
  FUNC_0("  Hash mode: %s\n", VAR_28);
 }

 if (VAR_20 & VAR_8) {
  FUNC_0("  Cipher pad: %#2llx\n",
      (VAR_20 & VAR_7) >> VAR_9);
 }
}
