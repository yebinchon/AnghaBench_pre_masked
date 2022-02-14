
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_akcipher {int dummy; } ;
struct TYPE_3__ {unsigned int n_len; } ;
struct TYPE_4__ {TYPE_1__ rsa; } ;
struct ccp_ctx {TYPE_2__ u; } ;


 struct ccp_ctx* FUNC_0 (struct crypto_akcipher*) ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_akcipher *VAR_0)
{
 struct ccp_ctx *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->u.rsa.n_len;
}
