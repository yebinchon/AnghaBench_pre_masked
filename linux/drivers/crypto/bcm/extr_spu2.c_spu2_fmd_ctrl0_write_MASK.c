
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct SPU2_FMD {int ctrl0; } ;
typedef enum spu2_proto_sel { ____Placeholder_spu2_proto_sel } spu2_proto_sel ;
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
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct SPU2_FMD *VAR_10,
     bool VAR_11, bool VAR_12,
     enum spu2_proto_sel VAR_13,
     enum spu2_cipher_type VAR_14,
     enum spu2_cipher_mode VAR_15,
     enum spu2_hash_type VAR_16,
     enum spu2_hash_mode VAR_17)
{
 u64 VAR_18 = 0;

 if ((VAR_14 != VAR_1) && !VAR_11)
  VAR_18 |= VAR_2;

 VAR_18 |= ((u64)VAR_14 << VAR_4) |
     ((u64)VAR_15 << VAR_3);

 if (VAR_13)
  VAR_18 |= (u64)VAR_13 << VAR_9;

 if (VAR_12)
  VAR_18 |= VAR_5;

 if (VAR_11 && (VAR_16 != VAR_7))
  VAR_18 |= VAR_0;

 VAR_18 |= (((u64)VAR_16 << VAR_8) |
    ((u64)VAR_17 << VAR_6));

 VAR_10->ctrl0 = FUNC_0(VAR_18);
}
