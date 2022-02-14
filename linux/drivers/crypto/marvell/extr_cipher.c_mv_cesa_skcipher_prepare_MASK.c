
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct TYPE_2__ {struct mv_cesa_engine* engine; } ;
struct mv_cesa_skcipher_req {TYPE_1__ base; } ;
struct mv_cesa_engine {int dummy; } ;
struct crypto_async_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct skcipher_request*) ;
 struct skcipher_request* FUNC_3 (struct crypto_async_request*) ;
 struct mv_cesa_skcipher_req* FUNC_4 (struct skcipher_request*) ;

__attribute__((used)) static inline void FUNC_5(struct crypto_async_request *VAR_1,
         struct mv_cesa_engine *VAR_2)
{
 struct skcipher_request *VAR_3 = FUNC_3(VAR_1);
 struct mv_cesa_skcipher_req *VAR_4 = FUNC_4(VAR_3);
 VAR_4->base.engine = VAR_2;

 if (FUNC_0(&VAR_4->base) == VAR_0)
  FUNC_1(VAR_3);
 else
  FUNC_2(VAR_3);
}
