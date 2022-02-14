
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int reqsize; } ;
struct crypto_tfm {TYPE_3__ crt_ablkcipher; } ;
struct ccp_des3_req_ctx {int dummy; } ;
struct TYPE_4__ {scalar_t__ key_len; } ;
struct TYPE_5__ {TYPE_1__ des3; } ;
struct ccp_ctx {TYPE_2__ u; int complete; } ;


 int VAR_0 ;
 struct ccp_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_1)
{
 struct ccp_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->complete = VAR_0;
 VAR_2->u.des3.key_len = 0;

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct ccp_des3_req_ctx);

 return 0;
}
