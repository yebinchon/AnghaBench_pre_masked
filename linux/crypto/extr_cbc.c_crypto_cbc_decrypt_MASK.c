
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {scalar_t__ nbytes; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (struct skcipher_walk*,struct crypto_skcipher*,int ) ;
 int VAR_0 ;
 struct crypto_skcipher* FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct skcipher_walk*,int) ;
 int FUNC_3 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_4(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_1(VAR_1);
 struct skcipher_walk VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_3, VAR_1, 0);

 while (VAR_3.nbytes) {
  VAR_4 = FUNC_0(&VAR_3, VAR_2,
      VAR_0);
  VAR_4 = FUNC_2(&VAR_3, VAR_4);
 }

 return VAR_4;
}
