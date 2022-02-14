
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_scomp {int dummy; } ;
struct crypto_alg {int * cra_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_alg*) ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_alg *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->cra_type != &VAR_0)
  VAR_2 += sizeof(struct crypto_scomp *);

 return VAR_2;
}
