
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {int dummy; } ;
struct skcipher_request {scalar_t__ cryptlen; int iv; } ;
struct crypto_skcipher {int dummy; } ;
struct chacha_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skcipher_walk*,struct chacha_ctx*,int ) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 () ;
 struct chacha_ctx* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_4(VAR_1);
 struct chacha_ctx *VAR_3 = FUNC_3(VAR_2);
 struct skcipher_walk VAR_4;
 int VAR_5;

 if (VAR_1->cryptlen <= VAR_0 || !FUNC_2())
  return FUNC_1(VAR_1);

 VAR_5 = FUNC_7(&VAR_4, VAR_1, 1);
 if (VAR_5)
  return VAR_5;

 FUNC_5();
 VAR_5 = FUNC_0(&VAR_4, VAR_3, VAR_1->iv);
 FUNC_6();
 return VAR_5;
}
