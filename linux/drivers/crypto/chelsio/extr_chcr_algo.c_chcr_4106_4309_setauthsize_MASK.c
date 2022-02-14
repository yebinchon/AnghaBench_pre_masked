
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



 void* VAR_5 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct crypto_tfm*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_6,
       unsigned int VAR_7)
{
 struct chcr_aead_ctx *VAR_8 = FUNC_0(FUNC_1(VAR_6));

 switch (VAR_7) {
 case 128:
  VAR_8->hmac_ctrl = VAR_0;
  VAR_8->mayverify = VAR_5;
  break;
 case 130:
  VAR_8->hmac_ctrl = VAR_1;
  VAR_8->mayverify = VAR_5;
  break;
 case 129:
  VAR_8->hmac_ctrl = VAR_2;
  VAR_8->mayverify = VAR_5;
  break;
 default:
  FUNC_3((struct crypto_tfm *)VAR_6,
         VAR_3);
  return -VAR_4;
 }
 return FUNC_2(VAR_8->sw_cipher, VAR_7);
}
