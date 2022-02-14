
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct mv_cesa_skcipher_req {int base; } ;
struct crypto_async_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct skcipher_request*) ;
 struct skcipher_request* FUNC_3 (struct crypto_async_request*) ;
 struct mv_cesa_skcipher_req* FUNC_4 (struct skcipher_request*) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_1)
{
 struct skcipher_request *VAR_2 = FUNC_3(VAR_1);
 struct mv_cesa_skcipher_req *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_1(&VAR_3->base) == VAR_0)
  FUNC_0(&VAR_3->base);
 else
  FUNC_2(VAR_2);
}
