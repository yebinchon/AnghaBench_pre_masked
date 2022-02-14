
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int dummy; } ;
struct aead_alg {struct crypto_alg base; } ;


 int FUNC_0 (struct aead_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;

int FUNC_2(struct aead_alg *VAR_0)
{
 struct crypto_alg *VAR_1 = &VAR_0->base;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_1);
}
