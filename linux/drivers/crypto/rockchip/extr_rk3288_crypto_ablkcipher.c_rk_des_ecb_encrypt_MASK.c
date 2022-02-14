
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int dummy; } ;
struct rk_cipher_ctx {scalar_t__ mode; struct rk_crypto_info* dev; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 struct rk_cipher_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct rk_crypto_info*,struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_3(struct ablkcipher_request *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_1(VAR_0);
 struct rk_cipher_ctx *VAR_2 = FUNC_0(VAR_1);
 struct rk_crypto_info *VAR_3 = VAR_2->dev;

 VAR_2->mode = 0;
 return FUNC_2(VAR_3, VAR_0);
}
