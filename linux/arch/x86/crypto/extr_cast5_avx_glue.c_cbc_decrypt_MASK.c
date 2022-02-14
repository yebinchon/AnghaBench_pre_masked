
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {unsigned int nbytes; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cast5_ctx {int dummy; } ;


 unsigned int FUNC_0 (struct cast5_ctx*,struct skcipher_walk*) ;
 int FUNC_1 (int,struct skcipher_walk*,unsigned int) ;
 int FUNC_2 (int) ;
 struct cast5_ctx* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_walk*,unsigned int) ;
 int FUNC_6 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_4(VAR_0);
 struct cast5_ctx *VAR_2 = FUNC_3(VAR_1);
 bool VAR_3 = 0;
 struct skcipher_walk VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(&VAR_4, VAR_0, 0);

 while ((VAR_5 = VAR_4.nbytes)) {
  VAR_3 = FUNC_1(VAR_3, &VAR_4, VAR_5);
  VAR_5 = FUNC_0(VAR_2, &VAR_4);
  VAR_6 = FUNC_5(&VAR_4, VAR_5);
 }

 FUNC_2(VAR_3);
 return VAR_6;
}
