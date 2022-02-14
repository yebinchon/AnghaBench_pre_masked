
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_async_request {int dummy; } ;
struct TYPE_4__ {int key_size; } ;
struct TYPE_5__ {TYPE_1__ rsa; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct ccp_rsa_req_ctx {TYPE_3__ cmd; } ;
struct akcipher_request {int dst_len; } ;


 struct akcipher_request* FUNC_0 (struct crypto_async_request*) ;
 struct ccp_rsa_req_ctx* FUNC_1 (struct akcipher_request*) ;

__attribute__((used)) static int FUNC_2(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct akcipher_request *VAR_2 = FUNC_0(VAR_0);
 struct ccp_rsa_req_ctx *VAR_3 = FUNC_1(VAR_2);

 if (VAR_1)
  return VAR_1;

 VAR_2->dst_len = VAR_3->cmd.u.rsa.key_size >> 3;

 return 0;
}
