
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_async_request {int dummy; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_6__ {TYPE_2__ aes; } ;
struct ccp_ctx {TYPE_3__ u; } ;
struct ccp_aes_req_ctx {int iv; } ;
struct TYPE_4__ {int tfm; } ;
struct ablkcipher_request {int info; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ablkcipher_request* FUNC_0 (struct crypto_async_request*) ;
 struct ccp_aes_req_ctx* FUNC_1 (struct ablkcipher_request*) ;
 struct ccp_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_async_request *VAR_2, int VAR_3)
{
 struct ablkcipher_request *VAR_4 = FUNC_0(VAR_2);
 struct ccp_ctx *VAR_5 = FUNC_2(VAR_4->base.tfm);
 struct ccp_aes_req_ctx *VAR_6 = FUNC_1(VAR_4);

 if (VAR_3)
  return VAR_3;

 if (VAR_5->u.aes.mode != VAR_1)
  FUNC_3(VAR_4->info, VAR_6->iv, VAR_0);

 return 0;
}
