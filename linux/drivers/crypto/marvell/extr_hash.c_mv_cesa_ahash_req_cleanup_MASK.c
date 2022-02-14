
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_ahash_req {scalar_t__ cache_ptr; int cache; int src_nents; scalar_t__ last_req; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct mv_cesa_ahash_req* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_0)
{
 struct ahash_request *VAR_1 = FUNC_0(VAR_0);
 struct mv_cesa_ahash_req *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->last_req)
  FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 if (VAR_2->cache_ptr)
  FUNC_4(VAR_1->src, VAR_2->src_nents,
       VAR_2->cache,
       VAR_2->cache_ptr,
       VAR_1->nbytes - VAR_2->cache_ptr);
}
