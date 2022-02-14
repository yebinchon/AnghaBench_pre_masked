
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct SPU2_FMD {void* ctrl3; void* ctrl2; void* ctrl1; void* ctrl0; } ;
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
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct SPU2_FMD *VAR_10,
    enum spu2_cipher_type VAR_11,
    enum spu2_cipher_mode VAR_12,
    u32 VAR_13, u32 VAR_14)
{
 u64 VAR_15;
 u64 VAR_16;
 u64 VAR_17;
 u64 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u16 VAR_21 = 0;
 u64 VAR_22;

 VAR_15 = (VAR_11 << VAR_4) |
     (VAR_12 << VAR_3);

 VAR_16 = (VAR_13 << VAR_2) |
     ((u64)VAR_14 << VAR_5) |
     ((u64)VAR_9 << VAR_7) | VAR_8;





 VAR_19 = 0;
 VAR_20 = VAR_19;
 VAR_22 = 0;
 VAR_17 = VAR_19 |
     (VAR_21 << VAR_0) |
     (VAR_20 << VAR_1) |
     (VAR_22 << VAR_6);

 VAR_18 = 0;

 VAR_10->ctrl0 = FUNC_0(VAR_15);
 VAR_10->ctrl1 = FUNC_0(VAR_16);
 VAR_10->ctrl2 = FUNC_0(VAR_17);
 VAR_10->ctrl3 = FUNC_0(VAR_18);

 return 0;
}
