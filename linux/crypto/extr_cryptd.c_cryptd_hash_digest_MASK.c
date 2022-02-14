
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;
struct crypto_async_request {int tfm; } ;
struct cryptd_hash_request_ctx {int complete; struct shash_desc desc; } ;
struct cryptd_hash_ctx {struct crypto_shash* child; } ;
struct TYPE_2__ {int complete; } ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct cryptd_hash_request_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*,int) ;
 struct cryptd_hash_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct ahash_request*,struct shash_desc*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct cryptd_hash_ctx *VAR_3 = FUNC_3(VAR_1->tfm);
 struct crypto_shash *VAR_4 = VAR_3->child;
 struct ahash_request *VAR_5 = FUNC_0(VAR_1);
 struct cryptd_hash_request_ctx *VAR_6 = FUNC_1(VAR_5);
 struct shash_desc *VAR_7 = &VAR_6->desc;

 if (FUNC_5(VAR_2 == -VAR_0))
  goto out;

 VAR_7->tfm = VAR_4;

 VAR_2 = FUNC_4(VAR_5, VAR_7);

 VAR_5->base.complete = VAR_6->complete;

out:
 FUNC_2(VAR_5, VAR_2);
}
