
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {size_t hash_size; int flags; } ;
struct atmel_sha_hmac_ctx {int* ipad; int* opad; } ;
struct atmel_sha_dev {struct ahash_request* req; } ;
struct ahash_request {int nbytes; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (size_t) ;
 struct atmel_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct atmel_sha_dev*,int ) ;
 int FUNC_3 (struct atmel_sha_dev*,int ,int,int,int,int ) ;
 scalar_t__ FUNC_4 (struct atmel_sha_dev*,int ,int) ;
 int FUNC_5 (struct atmel_sha_dev*,int ,int,int ) ;
 int VAR_14 ;
 int FUNC_6 (struct atmel_sha_dev*,int ,int) ;
 struct atmel_sha_hmac_ctx* FUNC_7 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_8 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_9(struct atmel_sha_dev *VAR_15)
{
 struct ahash_request *VAR_16 = VAR_15->req;
 struct atmel_sha_reqctx *VAR_17 = FUNC_1(VAR_16);
 struct crypto_ahash *VAR_18 = FUNC_8(VAR_16);
 struct atmel_sha_hmac_ctx *VAR_19 = FUNC_7(VAR_18);
 size_t VAR_20 = VAR_17->hash_size;
 size_t VAR_21, VAR_22 = VAR_20 / sizeof(u32);
 bool VAR_23 = 0;
 u32 VAR_24;


 if (!VAR_16->nbytes)
  return FUNC_2(VAR_15, -VAR_1);


 if (VAR_16->nbytes > VAR_0 &&
     FUNC_4(VAR_15, VAR_16->src, VAR_16->nbytes))
  VAR_23 = 1;


 FUNC_6(VAR_15, VAR_3, VAR_6);
 for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21)
  FUNC_6(VAR_15, FUNC_0(VAR_21), VAR_19->ipad[VAR_21]);

 FUNC_6(VAR_15, VAR_3, VAR_5);
 for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21)
  FUNC_6(VAR_15, FUNC_0(VAR_21), VAR_19->opad[VAR_21]);


 VAR_24 = (VAR_10 | VAR_9);
 VAR_24 |= VAR_17->flags & VAR_7;
 if (VAR_23)
  VAR_24 |= VAR_12;
 else
  VAR_24 |= VAR_11;
 FUNC_6(VAR_15, VAR_8, VAR_24);

 FUNC_6(VAR_15, VAR_13, VAR_16->nbytes);
 FUNC_6(VAR_15, VAR_2, VAR_16->nbytes);

 FUNC_6(VAR_15, VAR_3, VAR_4);


 if (VAR_23)
  return FUNC_5(VAR_15, VAR_16->src, VAR_16->nbytes,
        VAR_14);

 return FUNC_3(VAR_15, VAR_16->src, VAR_16->nbytes, 0, 1,
       VAR_14);
}
