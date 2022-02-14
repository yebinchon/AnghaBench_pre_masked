
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {unsigned int nbytes; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cast5_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct skcipher_walk*,struct cast5_ctx*) ;
 int FUNC_1 (int,struct skcipher_walk*,unsigned int) ;
 int FUNC_2 (int) ;
 struct cast5_ctx* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_walk*,struct cast5_ctx*) ;
 int FUNC_6 (struct skcipher_walk*,unsigned int) ;
 int FUNC_7 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_4(VAR_1);
 struct cast5_ctx *VAR_3 = FUNC_3(VAR_2);
 bool VAR_4 = 0;
 struct skcipher_walk VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(&VAR_5, VAR_1, 0);

 while ((VAR_6 = VAR_5.nbytes) >= VAR_0) {
  VAR_4 = FUNC_1(VAR_4, &VAR_5, VAR_6);
  VAR_6 = FUNC_0(&VAR_5, VAR_3);
  VAR_7 = FUNC_6(&VAR_5, VAR_6);
 }

 FUNC_2(VAR_4);

 if (VAR_5.nbytes) {
  FUNC_5(&VAR_5, VAR_3);
  VAR_7 = FUNC_6(&VAR_5, 0);
 }

 return VAR_7;
}
