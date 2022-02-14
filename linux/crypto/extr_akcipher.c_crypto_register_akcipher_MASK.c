
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int dummy; } ;
struct akcipher_alg {void* decrypt; void* encrypt; void* verify; void* sign; struct crypto_alg base; } ;


 void* VAR_0 ;
 int FUNC_0 (struct akcipher_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;

int FUNC_2(struct akcipher_alg *VAR_1)
{
 struct crypto_alg *VAR_2 = &VAR_1->base;

 if (!VAR_1->sign)
  VAR_1->sign = VAR_0;
 if (!VAR_1->verify)
  VAR_1->verify = VAR_0;
 if (!VAR_1->encrypt)
  VAR_1->encrypt = VAR_0;
 if (!VAR_1->decrypt)
  VAR_1->decrypt = VAR_0;

 FUNC_0(VAR_1);
 return FUNC_1(VAR_2);
}
