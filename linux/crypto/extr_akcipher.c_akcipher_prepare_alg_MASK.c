
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_flags; int * cra_type; } ;
struct akcipher_alg {struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct akcipher_alg *VAR_3)
{
 struct crypto_alg *VAR_4 = &VAR_3->base;

 VAR_4->cra_type = &VAR_2;
 VAR_4->cra_flags &= ~VAR_1;
 VAR_4->cra_flags |= VAR_0;
}
