
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct mv_cesa_ahash_req {unsigned int len; unsigned int cache_ptr; int cache; int state; int op_tmpl; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 unsigned int FUNC_1 (struct crypto_ahash*) ;
 unsigned int FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct ahash_request*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int ,void const*,unsigned int) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ahash_request *VAR_2, const void *VAR_3,
    u64 VAR_4, const void *VAR_5)
{
 struct crypto_ahash *VAR_6 = FUNC_4(VAR_2);
 struct mv_cesa_ahash_req *VAR_7 = FUNC_0(VAR_2);
 unsigned int VAR_8 = FUNC_2(VAR_6);
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_2);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_4 >= VAR_9)
  FUNC_7(&VAR_7->op_tmpl,
          VAR_1,
          VAR_0);

 VAR_7->len = VAR_4;
 FUNC_6(VAR_7->state, VAR_3, VAR_8);
 VAR_7->cache_ptr = 0;

 VAR_10 = FUNC_5(VAR_4, VAR_9);
 if (!VAR_10)
  return 0;

 FUNC_6(VAR_7->cache, VAR_5, VAR_10);
 VAR_7->cache_ptr = VAR_10;

 return 0;
}
