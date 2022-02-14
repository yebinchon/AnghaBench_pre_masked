
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_list; } ;


 int FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct crypto_alg *VAR_0)
{
 if (!FUNC_1(&VAR_0->cra_list))
  FUNC_0(VAR_0);
}
