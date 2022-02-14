
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {size_t block_size; size_t hash_size; size_t flags; scalar_t__ digest; } ;
struct atmel_sha_hmac_ctx {size_t* opad; } ;
struct atmel_sha_dev {int tmp; struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 struct atmel_sha_reqctx* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct atmel_sha_dev*,int *,size_t,int,int,int ) ;
 int VAR_9 ;
 size_t FUNC_4 (struct atmel_sha_dev*,int ) ;
 int FUNC_5 (struct atmel_sha_dev*,int ,size_t) ;
 struct atmel_sha_hmac_ctx* FUNC_6 (struct crypto_ahash*) ;
 size_t FUNC_7 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_8 (struct ahash_request*) ;
 int FUNC_9 (int *,size_t*,size_t) ;

__attribute__((used)) static int FUNC_10(struct atmel_sha_dev *VAR_10)
{
 struct ahash_request *VAR_11 = VAR_10->req;
 struct atmel_sha_reqctx *VAR_12 = FUNC_2(VAR_11);
 struct crypto_ahash *VAR_13 = FUNC_8(VAR_11);
 struct atmel_sha_hmac_ctx *VAR_14 = FUNC_6(VAR_13);
 u32 *VAR_15 = (u32 *)VAR_12->digest;
 size_t VAR_16 = FUNC_7(VAR_13);
 size_t VAR_17 = VAR_12->block_size;
 size_t VAR_18 = VAR_12->hash_size;
 size_t VAR_19, VAR_20;
 u32 VAR_21;


 VAR_20 = VAR_16 / sizeof(u32);
 for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19)
  VAR_15[VAR_19] = FUNC_4(VAR_10, FUNC_0(VAR_19));


 FUNC_5(VAR_10, VAR_1, VAR_3);
 VAR_20 = VAR_18 / sizeof(u32);
 for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19)
  FUNC_5(VAR_10, FUNC_1(VAR_19), VAR_14->opad[VAR_19]);

 VAR_21 = VAR_6 | VAR_7;
 VAR_21 |= (VAR_12->flags & VAR_4);
 FUNC_5(VAR_10, VAR_5, VAR_21);
 FUNC_5(VAR_10, VAR_8, VAR_17 + VAR_16);
 FUNC_5(VAR_10, VAR_0, VAR_16);
 FUNC_5(VAR_10, VAR_1, VAR_2);

 FUNC_9(&VAR_10->tmp, VAR_15, VAR_16);
 return FUNC_3(VAR_10, &VAR_10->tmp, VAR_16, 0, 1,
       VAR_9);
}
