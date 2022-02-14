
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {unsigned int cra_ctxsize; int cra_alignmask; } ;


 int FUNC_0 () ;

unsigned int FUNC_1(struct crypto_alg *VAR_0)
{
 return VAR_0->cra_ctxsize +
        (VAR_0->cra_alignmask & ~(FUNC_0() - 1));
}
