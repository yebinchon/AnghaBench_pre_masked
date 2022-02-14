
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {size_t block_size; } ;
struct atmel_sha_hmac_ctx {int* opad; int* ipad; } ;
struct atmel_sha_dev {struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*,int*,size_t,int,int ) ;
 int VAR_0 ;
 struct atmel_sha_hmac_ctx* FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (int*,int*,size_t) ;

__attribute__((used)) static int FUNC_5(struct atmel_sha_dev *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1->req;
 struct crypto_ahash *VAR_3 = FUNC_3(VAR_2);
 struct atmel_sha_hmac_ctx *VAR_4 = FUNC_2(VAR_3);
 struct atmel_sha_reqctx *VAR_5 = FUNC_0(VAR_2);
 size_t VAR_6 = VAR_5->block_size;
 size_t VAR_7, VAR_8 = VAR_6 / sizeof(u32);

 FUNC_4(VAR_4->opad, VAR_4->ipad, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
  VAR_4->ipad[VAR_7] ^= 0x36363636;
  VAR_4->opad[VAR_7] ^= 0x5c5c5c5c;
 }

 return FUNC_1(VAR_1, VAR_4->ipad, VAR_6, 0,
      VAR_0);
}
