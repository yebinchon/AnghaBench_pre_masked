
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {unsigned int nbytes; } ;
struct skcipher_request {int dummy; } ;
struct des3_ede_x86_ctx {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 unsigned int FUNC_0 (struct des3_ede_x86_ctx*,struct skcipher_walk*) ;
 struct des3_ede_x86_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_walk*,unsigned int) ;
 int FUNC_4 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_2(VAR_0);
 struct des3_ede_x86_ctx *VAR_2 = FUNC_1(VAR_1);
 struct skcipher_walk VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(&VAR_3, VAR_0, 0);

 while ((VAR_4 = VAR_3.nbytes)) {
  VAR_4 = FUNC_0(VAR_2, &VAR_3);
  VAR_5 = FUNC_3(&VAR_3, VAR_4);
 }

 return VAR_5;
}
