
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;
typedef enum spu_cipher_alg { ____Placeholder_spu_cipher_alg } spu_cipher_alg ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;

u32 FUNC_0(enum spu_cipher_alg VAR_3,
        enum spu_cipher_mode VAR_4,
        unsigned int VAR_5)
{
 u32 VAR_6 = VAR_1;
 u32 VAR_7;


 if (VAR_4 == VAR_0)
  VAR_6 -= VAR_2;

 VAR_7 = VAR_6 % VAR_5;

 return VAR_6 - VAR_7;
}
