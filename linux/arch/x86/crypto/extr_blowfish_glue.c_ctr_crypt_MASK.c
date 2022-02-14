
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {unsigned int nbytes; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct bf_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct bf_ctx*,struct skcipher_walk*) ;
 struct bf_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct bf_ctx*,struct skcipher_walk*) ;
 int FUNC_4 (struct skcipher_walk*,unsigned int) ;
 int FUNC_5 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_6(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_2(VAR_1);
 struct bf_ctx *VAR_3 = FUNC_1(VAR_2);
 struct skcipher_walk VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(&VAR_4, VAR_1, 0);

 while ((VAR_5 = VAR_4.nbytes) >= VAR_0) {
  VAR_5 = FUNC_0(VAR_3, &VAR_4);
  VAR_6 = FUNC_4(&VAR_4, VAR_5);
 }

 if (VAR_5) {
  FUNC_3(VAR_3, &VAR_4);
  VAR_6 = FUNC_4(&VAR_4, 0);
 }

 return VAR_6;
}
