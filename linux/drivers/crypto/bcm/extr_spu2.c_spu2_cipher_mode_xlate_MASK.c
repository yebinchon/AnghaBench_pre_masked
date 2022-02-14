
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;
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

__attribute__((used)) static int FUNC_0(enum spu_cipher_mode VAR_9,
      enum spu2_cipher_mode *VAR_10)
{
 switch (VAR_9) {
 case 131:
  *VAR_10 = VAR_5;
  break;
 case 135:
  *VAR_10 = VAR_1;
  break;
 case 129:
  *VAR_10 = VAR_7;
  break;
 case 133:
  *VAR_10 = VAR_3;
  break;
 case 132:
  *VAR_10 = VAR_4;
  break;
 case 134:
  *VAR_10 = VAR_2;
  break;
 case 130:
  *VAR_10 = VAR_6;
  break;
 case 128:
  *VAR_10 = VAR_8;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
