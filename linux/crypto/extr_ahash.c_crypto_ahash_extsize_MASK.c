
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_shash {int dummy; } ;
struct crypto_alg {int * cra_type; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct crypto_alg*) ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_alg *VAR_1)
{
 if (VAR_1->cra_type != &VAR_0)
  return sizeof(struct crypto_shash *);

 return FUNC_0(VAR_1);
}
