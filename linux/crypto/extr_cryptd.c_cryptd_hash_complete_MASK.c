
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int dummy; } ;
struct cryptd_hash_request_ctx {int (* complete ) (int *,int) ;} ;
struct cryptd_hash_ctx {int refcnt; } ;
struct ahash_request {int base; } ;


 int VAR_0 ;
 struct cryptd_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 struct cryptd_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct ahash_request *VAR_1, int VAR_2)
{
 struct crypto_ahash *VAR_3 = FUNC_2(VAR_1);
 struct cryptd_hash_ctx *VAR_4 = FUNC_1(VAR_3);
 struct cryptd_hash_request_ctx *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = FUNC_7(&VAR_4->refcnt);

 FUNC_4();
 VAR_5->complete(&VAR_1->base, VAR_2);
 FUNC_5();

 if (VAR_2 != -VAR_0 && VAR_6 && FUNC_6(&VAR_4->refcnt))
  FUNC_3(VAR_3);
}
