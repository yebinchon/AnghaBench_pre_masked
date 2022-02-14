
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_engine {int queue; } ;
struct crypto_async_request {int dummy; } ;


 struct crypto_async_request* FUNC_0 (int *) ;
 struct crypto_async_request* FUNC_1 (int *) ;

struct crypto_async_request *
FUNC_2(struct mv_cesa_engine *VAR_0,
      struct crypto_async_request **VAR_1)
{
 struct crypto_async_request *VAR_2;

 *VAR_1 = FUNC_1(&VAR_0->queue);
 VAR_2 = FUNC_0(&VAR_0->queue);

 if (!VAR_2)
  return ((void*)0);

 return VAR_2;
}
