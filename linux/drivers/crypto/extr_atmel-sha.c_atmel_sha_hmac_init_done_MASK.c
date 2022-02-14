
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {size_t block_size; size_t hash_size; size_t* digcnt; int digest; int flags; scalar_t__ bufcnt; } ;
struct atmel_sha_hmac_ctx {int ipad; } ;
struct atmel_sha_dev {struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*,int ) ;
 struct atmel_sha_hmac_ctx* FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (int ,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct atmel_sha_dev *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1->req;
 struct atmel_sha_reqctx *VAR_3 = FUNC_0(VAR_2);
 struct crypto_ahash *VAR_4 = FUNC_3(VAR_2);
 struct atmel_sha_hmac_ctx *VAR_5 = FUNC_2(VAR_4);
 size_t VAR_6 = VAR_3->block_size;
 size_t VAR_7 = VAR_3->hash_size;

 VAR_3->bufcnt = 0;
 VAR_3->digcnt[0] = VAR_6;
 VAR_3->digcnt[1] = 0;
 VAR_3->flags |= VAR_0;
 FUNC_4(VAR_3->digest, VAR_5->ipad, VAR_7);
 return FUNC_1(VAR_1, 0);
}
