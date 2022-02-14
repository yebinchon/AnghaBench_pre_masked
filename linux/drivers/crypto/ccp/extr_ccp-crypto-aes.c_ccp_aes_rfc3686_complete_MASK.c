
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int dummy; } ;
struct ccp_aes_req_ctx {int rfc3686_info; } ;
struct ablkcipher_request {int info; } ;


 struct ablkcipher_request* FUNC_0 (struct crypto_async_request*) ;
 struct ccp_aes_req_ctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct crypto_async_request*,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_async_request *VAR_0,
        int VAR_1)
{
 struct ablkcipher_request *VAR_2 = FUNC_0(VAR_0);
 struct ccp_aes_req_ctx *VAR_3 = FUNC_1(VAR_2);


 VAR_2->info = VAR_3->rfc3686_info;

 return FUNC_2(VAR_0, VAR_1);
}
