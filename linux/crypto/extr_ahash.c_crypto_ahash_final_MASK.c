
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_alg {int dummy; } ;
struct TYPE_2__ {struct crypto_alg* __crt_alg; } ;
struct crypto_ahash {int final; TYPE_1__ base; } ;
struct ahash_request {unsigned int nbytes; } ;


 int FUNC_0 (struct ahash_request*,int ) ;
 struct crypto_ahash* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (unsigned int,int,struct crypto_alg*) ;
 int FUNC_3 (struct crypto_alg*) ;

int FUNC_4(struct ahash_request *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_1(VAR_0);
 struct crypto_alg *VAR_2 = VAR_1->base.__crt_alg;
 unsigned int VAR_3 = VAR_0->nbytes;
 int VAR_4;

 FUNC_3(VAR_2);
 VAR_4 = FUNC_0(VAR_0, FUNC_1(VAR_0)->final);
 FUNC_2(VAR_3, VAR_4, VAR_2);
 return VAR_4;
}
