
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum spu_cipher_mode { ____Placeholder_spu_cipher_mode } spu_cipher_mode ;
typedef enum spu_cipher_alg { ____Placeholder_spu_cipher_alg } spu_cipher_alg ;
char *FUNC_0(enum spu_cipher_alg VAR_0, enum spu_cipher_mode VAR_1)
{
 switch (VAR_0) {
 case 135:
  return "rc4";
 case 137:
  switch (VAR_1) {
  case 134:
   return "cbc(aes)";
  case 131:
   return "ecb(aes)";
  case 129:
   return "ofb(aes)";
  case 133:
   return "cfb(aes)";
  case 132:
   return "ctr(aes)";
  case 128:
   return "xts(aes)";
  case 130:
   return "gcm(aes)";
  default:
   return "aes";
  }
  break;
 case 136:
  switch (VAR_1) {
  case 134:
   return "cbc(des)";
  case 131:
   return "ecb(des)";
  case 132:
   return "ctr(des)";
  default:
   return "des";
  }
  break;
 case 138:
  switch (VAR_1) {
  case 134:
   return "cbc(des3_ede)";
  case 131:
   return "ecb(des3_ede)";
  case 132:
   return "ctr(des3_ede)";
  default:
   return "3des";
  }
  break;
 default:
  return "other";
 }
}
