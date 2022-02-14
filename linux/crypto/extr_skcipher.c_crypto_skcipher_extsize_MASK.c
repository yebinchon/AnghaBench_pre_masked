
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_blkcipher {int dummy; } ;
struct crypto_alg {int * cra_type; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct crypto_alg*) ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_alg *VAR_2)
{
 if (VAR_2->cra_type == &VAR_1)
  return sizeof(struct crypto_blkcipher *);

 if (VAR_2->cra_type == &VAR_0)
  return sizeof(struct crypto_ablkcipher *);

 return FUNC_0(VAR_2);
}
