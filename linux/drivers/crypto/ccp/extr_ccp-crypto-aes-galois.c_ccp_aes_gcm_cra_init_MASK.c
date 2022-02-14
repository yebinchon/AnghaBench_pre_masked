
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct TYPE_3__ {scalar_t__ key_len; } ;
struct TYPE_4__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; int complete; } ;
struct ccp_aes_req_ctx {int dummy; } ;


 int VAR_0 ;
 struct ccp_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_1)
{
 struct ccp_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->complete = VAR_0;
 VAR_2->u.aes.key_len = 0;

 FUNC_1(VAR_1, sizeof(struct ccp_aes_req_ctx));

 return 0;
}
