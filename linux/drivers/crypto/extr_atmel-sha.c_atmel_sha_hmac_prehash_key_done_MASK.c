
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {size_t block_size; } ;
struct atmel_sha_hmac_ctx {int * ipad; } ;
struct atmel_sha_dev {struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (size_t) ;
 struct atmel_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct atmel_sha_dev*) ;
 int FUNC_3 (struct atmel_sha_dev*,int ) ;
 struct atmel_sha_hmac_ctx* FUNC_4 (struct crypto_ahash*) ;
 size_t FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 int FUNC_7 (int *,int ,size_t) ;

__attribute__((used)) static int FUNC_8(struct atmel_sha_dev *VAR_0)
{
 struct ahash_request *VAR_1 = VAR_0->req;
 struct crypto_ahash *VAR_2 = FUNC_6(VAR_1);
 struct atmel_sha_hmac_ctx *VAR_3 = FUNC_4(VAR_2);
 struct atmel_sha_reqctx *VAR_4 = FUNC_1(VAR_1);
 size_t VAR_5 = FUNC_5(VAR_2);
 size_t VAR_6 = VAR_4->block_size;
 size_t VAR_7, VAR_8 = VAR_5 / sizeof(u32);


 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
  VAR_3->ipad[VAR_7] = FUNC_3(VAR_0, FUNC_0(VAR_7));
 FUNC_7((u8 *)VAR_3->ipad + VAR_5, 0, VAR_6 - VAR_5);
 return FUNC_2(VAR_0);
}
