
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_alg {int dummy; } ;
struct TYPE_2__ {struct crypto_alg* __crt_alg; } ;
struct crypto_ahash {int digest; TYPE_1__ base; } ;
struct ahash_request {unsigned int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct ahash_request*,int ) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (unsigned int,int,struct crypto_alg*) ;
 int FUNC_4 (struct crypto_alg*) ;

int FUNC_5(struct ahash_request *VAR_2)
{
 struct crypto_ahash *VAR_3 = FUNC_2(VAR_2);
 struct crypto_alg *VAR_4 = VAR_3->base.__crt_alg;
 unsigned int VAR_5 = VAR_2->nbytes;
 int VAR_6;

 FUNC_4(VAR_4);
 if (FUNC_0(VAR_3) & VAR_0)
  VAR_6 = -VAR_1;
 else
  VAR_6 = FUNC_1(VAR_2, VAR_3->digest);
 FUNC_3(VAR_5, VAR_6, VAR_4);
 return VAR_6;
}
