
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {int sw_cipher; void* mayverify; void* hmac_ctrl; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct crypto_tfm*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_9, unsigned int VAR_10)
{
 struct chcr_aead_ctx *VAR_11 = FUNC_0(FUNC_1(VAR_9));

 switch (VAR_10) {
 case 129:
  VAR_11->hmac_ctrl = VAR_3;
  VAR_11->mayverify = VAR_7;
  break;
 case 128:
  VAR_11->hmac_ctrl = VAR_0;
  VAR_11->mayverify = VAR_7;
  break;
 case 134:
  VAR_11->hmac_ctrl = VAR_1;
  VAR_11->mayverify = VAR_7;
  break;
 case 132:
  VAR_11->hmac_ctrl = VAR_4;
  VAR_11->mayverify = VAR_7;
  break;
 case 130:
  VAR_11->hmac_ctrl = VAR_2;
  VAR_11->mayverify = VAR_7;
  break;
 case 133:
 case 131:
  VAR_11->hmac_ctrl = VAR_2;
  VAR_11->mayverify = VAR_8;
  break;
 default:

    FUNC_3((struct crypto_tfm *) VAR_9,
   VAR_5);
  return -VAR_6;
 }
 return FUNC_2(VAR_11->sw_cipher, VAR_10);
}
