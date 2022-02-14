
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int dummy; } ;
struct ccp_aes_req_ctx {int iv; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 struct ablkcipher_request* FUNC_0 (struct crypto_async_request*) ;
 struct ccp_aes_req_ctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct ablkcipher_request *VAR_3 = FUNC_0(VAR_1);
 struct ccp_aes_req_ctx *VAR_4 = FUNC_1(VAR_3);

 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_3->info, VAR_4->iv, VAR_0);

 return 0;
}
