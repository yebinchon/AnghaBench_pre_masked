
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_alg_common {int base; } ;
struct crypto_instance {int dummy; } ;
struct crypto_ahash_spawn {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct crypto_instance*,int *) ;

int FUNC_1(struct crypto_ahash_spawn *VAR_1,
       struct hash_alg_common *VAR_2,
       struct crypto_instance *VAR_3)
{
 return FUNC_0(&VAR_1->base, &VAR_2->base, VAR_3,
      &VAR_0);
}
