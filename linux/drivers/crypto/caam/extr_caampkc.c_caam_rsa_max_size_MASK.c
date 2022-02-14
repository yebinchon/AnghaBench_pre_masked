
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_akcipher {int dummy; } ;
struct TYPE_2__ {unsigned int n_sz; } ;
struct caam_rsa_ctx {TYPE_1__ key; } ;


 struct caam_rsa_ctx* FUNC_0 (struct crypto_akcipher*) ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_akcipher *VAR_0)
{
 struct caam_rsa_ctx *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->key.n_sz;
}
