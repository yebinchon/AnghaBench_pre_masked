
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int dummy; } ;
struct rk_cipher_ctx {int mode; struct rk_crypto_info* dev; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rk_cipher_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct rk_crypto_info*,struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_3(struct ablkcipher_request *VAR_2)
{
 struct crypto_ablkcipher *VAR_3 = FUNC_1(VAR_2);
 struct rk_cipher_ctx *VAR_4 = FUNC_0(VAR_3);
 struct rk_crypto_info *VAR_5 = VAR_4->dev;

 VAR_4->mode = VAR_0 | VAR_1;
 return FUNC_2(VAR_5, VAR_2);
}
