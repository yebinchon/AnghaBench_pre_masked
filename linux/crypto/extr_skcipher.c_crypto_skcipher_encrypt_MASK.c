
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {unsigned int cryptlen; } ;
struct TYPE_2__ {struct crypto_alg* __crt_alg; } ;
struct crypto_skcipher {int (* encrypt ) (struct skcipher_request*) ;TYPE_1__ base; } ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (unsigned int,int,struct crypto_alg*) ;
 int FUNC_4 (struct skcipher_request*) ;

int FUNC_5(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_1(VAR_2);
 struct crypto_alg *VAR_4 = VAR_3->base.__crt_alg;
 unsigned int VAR_5 = VAR_2->cryptlen;
 int VAR_6;

 FUNC_2(VAR_4);
 if (FUNC_0(VAR_3) & VAR_0)
  VAR_6 = -VAR_1;
 else
  VAR_6 = VAR_3->encrypt(VAR_2);
 FUNC_3(VAR_5, VAR_6, VAR_4);
 return VAR_6;
}
