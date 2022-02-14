
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_authenc_esn_ctx {int enc; int auth; } ;
struct crypto_aead {int dummy; } ;


 struct crypto_authenc_esn_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct crypto_aead *VAR_0)
{
 struct crypto_authenc_esn_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->auth);
 FUNC_2(VAR_1->enc);
 FUNC_3();
}
