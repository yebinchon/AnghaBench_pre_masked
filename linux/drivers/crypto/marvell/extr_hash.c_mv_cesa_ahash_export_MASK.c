
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mv_cesa_ahash_req {unsigned int cache_ptr; int cache; int state; int len; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 unsigned int FUNC_1 (struct crypto_ahash*) ;
 unsigned int FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (void*,int ,unsigned int) ;
 int FUNC_5 (void*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_0, void *VAR_1,
    u64 *VAR_2, void *VAR_3)
{
 struct crypto_ahash *VAR_4 = FUNC_3(VAR_0);
 struct mv_cesa_ahash_req *VAR_5 = FUNC_0(VAR_0);
 unsigned int VAR_6 = FUNC_2(VAR_4);
 unsigned int VAR_7;

 VAR_7 = FUNC_1(VAR_4);

 *VAR_2 = VAR_5->len;
 FUNC_4(VAR_1, VAR_5->state, VAR_6);
 FUNC_5(VAR_3, 0, VAR_7);
 FUNC_4(VAR_3, VAR_5->cache, VAR_5->cache_ptr);

 return 0;
}
