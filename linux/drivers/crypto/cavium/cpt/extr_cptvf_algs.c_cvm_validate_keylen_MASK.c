
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cvm_enc_ctx {int key_len; scalar_t__ cipher_type; scalar_t__ key_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct cvm_enc_ctx *VAR_5, u32 VAR_6)
{
 if ((VAR_6 == 16) || (VAR_6 == 24) || (VAR_6 == 32)) {
  VAR_5->key_len = VAR_6;
  switch (VAR_5->key_len) {
  case 16:
   VAR_5->key_type = VAR_0;
   break;
  case 24:
   VAR_5->key_type = VAR_1;
   break;
  case 32:
   VAR_5->key_type = VAR_2;
   break;
  default:
   return -VAR_4;
  }

  if (VAR_5->cipher_type == VAR_3)
   VAR_5->key_type = 0;

  return 0;
 }

 return -VAR_4;
}
