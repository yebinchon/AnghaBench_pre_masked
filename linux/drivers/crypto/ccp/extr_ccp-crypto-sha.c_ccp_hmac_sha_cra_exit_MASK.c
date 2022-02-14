
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct TYPE_3__ {scalar_t__ hmac_tfm; } ;
struct TYPE_4__ {TYPE_1__ sha; } ;
struct ccp_ctx {TYPE_2__ u; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (scalar_t__) ;
 struct ccp_ctx* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct ccp_ctx *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->u.sha.hmac_tfm)
  FUNC_1(VAR_1->u.sha.hmac_tfm);

 FUNC_0(VAR_0);
}
