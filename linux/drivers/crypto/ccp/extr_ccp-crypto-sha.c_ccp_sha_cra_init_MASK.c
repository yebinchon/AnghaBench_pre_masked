
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ccp_sha_req_ctx {int dummy; } ;
struct TYPE_3__ {scalar_t__ key_len; } ;
struct TYPE_4__ {TYPE_1__ sha; } ;
struct ccp_ctx {TYPE_2__ u; int complete; } ;


 struct crypto_ahash* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 int FUNC_1 (struct crypto_ahash*,int) ;
 struct ccp_ctx* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1)
{
 struct ccp_ctx *VAR_2 = FUNC_2(VAR_1);
 struct crypto_ahash *VAR_3 = FUNC_0(VAR_1);

 VAR_2->complete = VAR_0;
 VAR_2->u.sha.key_len = 0;

 FUNC_1(VAR_3, sizeof(struct ccp_sha_req_ctx));

 return 0;
}
