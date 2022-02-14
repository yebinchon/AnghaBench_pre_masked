
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

u32 FUNC_0(enum spu_cipher_mode VAR_3,
    unsigned int VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = VAR_2 - 1;

 if ((VAR_3 == VAR_1) ||
     (VAR_3 == VAR_0))
  VAR_5 = ((VAR_4 + VAR_6) & ~VAR_6) - VAR_4;

 return VAR_5;
}
