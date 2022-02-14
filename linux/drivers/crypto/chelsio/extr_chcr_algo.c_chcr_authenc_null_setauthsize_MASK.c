
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {int sw_cipher; int mayverify; int hmac_ctrl; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_2,
     unsigned int VAR_3)
{
 struct chcr_aead_ctx *VAR_4 = FUNC_0(FUNC_1(VAR_2));

 VAR_4->hmac_ctrl = VAR_0;
 VAR_4->mayverify = VAR_1;
 return FUNC_2(VAR_4->sw_cipher, VAR_3);
}
