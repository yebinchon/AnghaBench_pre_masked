
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {size_t block_size; size_t hash_size; } ;
struct atmel_sha_hmac_ctx {int opad; int * ipad; } ;
struct atmel_sha_dev {struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (size_t) ;
 struct atmel_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct atmel_sha_dev*,int ,size_t,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct atmel_sha_dev*,int ) ;
 struct atmel_sha_hmac_ctx* FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_6(struct atmel_sha_dev *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1->req;
 struct crypto_ahash *VAR_3 = FUNC_5(VAR_2);
 struct atmel_sha_hmac_ctx *VAR_4 = FUNC_4(VAR_3);
 struct atmel_sha_reqctx *VAR_5 = FUNC_1(VAR_2);
 size_t VAR_6 = VAR_5->block_size;
 size_t VAR_7 = VAR_5->hash_size;
 size_t VAR_8, VAR_9 = VAR_7 / sizeof(u32);

 for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
  VAR_4->ipad[VAR_8] = FUNC_3(VAR_1, FUNC_0(VAR_8));
 return FUNC_2(VAR_1, VAR_4->opad, VAR_6, 0,
      VAR_0);
}
