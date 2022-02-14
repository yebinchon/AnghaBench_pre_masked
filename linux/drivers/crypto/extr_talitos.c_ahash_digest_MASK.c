
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ahash_req_ctx {int last; } ;
struct crypto_ahash {int (* init ) (struct ahash_request*) ;} ;
struct ahash_request {int nbytes; } ;


 int FUNC_0 (struct ahash_request*,int ) ;
 struct talitos_ahash_req_ctx* FUNC_1 (struct ahash_request*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_0)
{
 struct talitos_ahash_req_ctx *VAR_1 = FUNC_1(VAR_0);
 struct crypto_ahash *VAR_2 = FUNC_2(VAR_0);

 VAR_2->init(VAR_0);
 VAR_1->last = 1;

 return FUNC_0(VAR_0, VAR_0->nbytes);
}
