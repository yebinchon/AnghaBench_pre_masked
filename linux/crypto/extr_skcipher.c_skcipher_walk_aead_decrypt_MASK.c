
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {scalar_t__ total; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ cryptlen; } ;


 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct skcipher_walk*,struct aead_request*,int) ;

int FUNC_3(struct skcipher_walk *VAR_0,
          struct aead_request *VAR_1, bool VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_1(VAR_1);

 VAR_0->total = VAR_1->cryptlen - FUNC_0(VAR_3);

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
