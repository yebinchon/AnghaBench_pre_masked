
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {size_t hash_size; } ;
struct atmel_sha_hmac_ctx {int (* resume ) (struct atmel_sha_dev*) ;int hkey; int * opad; } ;
struct atmel_sha_dev {struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (size_t) ;
 struct atmel_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct atmel_sha_dev*,int ) ;
 struct atmel_sha_hmac_ctx* FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct atmel_sha_dev*) ;

__attribute__((used)) static int FUNC_7(struct atmel_sha_dev *VAR_0)
{
 struct ahash_request *VAR_1 = VAR_0->req;
 struct crypto_ahash *VAR_2 = FUNC_5(VAR_1);
 struct atmel_sha_hmac_ctx *VAR_3 = FUNC_4(VAR_2);
 struct atmel_sha_reqctx *VAR_4 = FUNC_1(VAR_1);
 size_t VAR_5 = VAR_4->hash_size;
 size_t VAR_6, VAR_7 = VAR_5 / sizeof(u32);

 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
  VAR_3->opad[VAR_6] = FUNC_3(VAR_0, FUNC_0(VAR_6));
 FUNC_2(&VAR_3->hkey);
 return VAR_3->resume(VAR_0);
}
