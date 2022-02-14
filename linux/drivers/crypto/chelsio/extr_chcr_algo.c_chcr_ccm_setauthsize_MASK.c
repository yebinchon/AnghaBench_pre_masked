
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {int sw_cipher; void* mayverify; int hmac_ctrl; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 void* VAR_9 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct crypto_tfm*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_10,
    unsigned int VAR_11)
{
 struct chcr_aead_ctx *VAR_12 = FUNC_0(FUNC_1(VAR_10));

 switch (VAR_11) {
 case 130:
  VAR_12->hmac_ctrl = VAR_3;
  VAR_12->mayverify = VAR_9;
  break;
 case 129:
  VAR_12->hmac_ctrl = VAR_4;
  VAR_12->mayverify = VAR_9;
  break;
 case 128:
  VAR_12->hmac_ctrl = VAR_0;
  VAR_12->mayverify = VAR_9;
  break;
 case 134:
  VAR_12->hmac_ctrl = VAR_6;
  VAR_12->mayverify = VAR_9;
  break;
 case 133:
  VAR_12->hmac_ctrl = VAR_1;
  VAR_12->mayverify = VAR_9;
  break;
 case 132:
  VAR_12->hmac_ctrl = VAR_5;
  VAR_12->mayverify = VAR_9;
  break;
 case 131:
  VAR_12->hmac_ctrl = VAR_2;
  VAR_12->mayverify = VAR_9;
  break;
 default:
  FUNC_3((struct crypto_tfm *)VAR_10,
         VAR_7);
  return -VAR_8;
 }
 return FUNC_2(VAR_12->sw_cipher, VAR_11);
}
