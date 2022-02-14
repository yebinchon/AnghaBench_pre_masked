
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

u32 FUNC_1(enum spu_cipher_mode VAR_2,
   unsigned int VAR_3, unsigned int VAR_4,
   bool VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7;

 if (VAR_3)
  VAR_6 = VAR_3;

 if (VAR_2 == VAR_1) {

  VAR_7 = FUNC_0(VAR_2, VAR_6);
  VAR_6 += VAR_7;
 }
 if (VAR_2 == VAR_0) {




  VAR_7 = FUNC_0(VAR_2, VAR_6 + 2);
  VAR_6 += VAR_7;
 }

 return VAR_6;
}
