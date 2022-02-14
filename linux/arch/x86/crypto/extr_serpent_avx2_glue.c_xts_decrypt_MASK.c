
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct serpent_xts_ctx {int crypt_ctx; int tweak_ctx; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct serpent_xts_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int *,struct skcipher_request*,int ,int *,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_2(VAR_2);
 struct serpent_xts_ctx *VAR_4 = FUNC_1(VAR_3);

 return FUNC_3(&VAR_1, VAR_2,
       FUNC_0(VAR_0),
       &VAR_4->tweak_ctx, &VAR_4->crypt_ctx, 1);
}
