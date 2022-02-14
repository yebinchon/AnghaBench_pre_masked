
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int ndigits; } ;
struct ecrdsa_ctx {TYPE_1__ pub_key; } ;
struct crypto_akcipher {int dummy; } ;


 struct ecrdsa_ctx* FUNC_0 (struct crypto_akcipher*) ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_akcipher *VAR_0)
{
 struct ecrdsa_ctx *VAR_1 = FUNC_0(VAR_0);





 return VAR_1->pub_key.ndigits * sizeof(u64);
}
