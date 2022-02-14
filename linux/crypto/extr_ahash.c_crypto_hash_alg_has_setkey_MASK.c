
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_alg {int * cra_type; } ;
struct hash_alg_common {struct crypto_alg base; } ;
struct TYPE_2__ {int * setkey; } ;


 TYPE_1__* FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct hash_alg_common *VAR_1)
{
 struct crypto_alg *VAR_2 = &VAR_1->base;

 if (VAR_2->cra_type != &VAR_0)
  return FUNC_2(FUNC_1(VAR_2));

 return FUNC_0(VAR_2)->setkey != ((void*)0);
}
