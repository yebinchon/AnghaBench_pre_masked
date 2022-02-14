
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skcipher_request {int dummy; } ;
struct mv_cesa_req {int dummy; } ;
struct mv_cesa_skcipher_req {struct mv_cesa_req base; } ;
struct crypto_async_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mv_cesa_req*,int ) ;
 scalar_t__ FUNC_1 (struct mv_cesa_req*) ;
 int FUNC_2 (struct skcipher_request*,int ) ;
 struct skcipher_request* FUNC_3 (struct crypto_async_request*) ;
 struct mv_cesa_skcipher_req* FUNC_4 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_5(struct crypto_async_request *VAR_1,
        u32 VAR_2)
{
 struct skcipher_request *VAR_3 = FUNC_3(VAR_1);
 struct mv_cesa_skcipher_req *VAR_4 = FUNC_4(VAR_3);
 struct mv_cesa_req *VAR_5 = &VAR_4->base;

 if (FUNC_1(VAR_5) == VAR_0)
  return FUNC_2(VAR_3, VAR_2);

 return FUNC_0(VAR_5, VAR_2);
}
