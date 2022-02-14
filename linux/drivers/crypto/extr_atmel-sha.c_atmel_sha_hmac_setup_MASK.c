
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {int flags; size_t block_size; void* hash_size; } ;
struct atmel_sha_hmac_ctx {int (* resume ) (struct atmel_sha_dev*) ;scalar_t__ ipad; int hkey; } ;
struct atmel_sha_dev {struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;
typedef int (* atmel_sha_fn_t ) (struct atmel_sha_dev*) ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;





 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*,int ) ;
 int FUNC_2 (struct atmel_sha_dev*) ;
 int FUNC_3 (int *,int const**,unsigned int*) ;
 int FUNC_4 (struct atmel_sha_dev*,int const*,unsigned int) ;
 struct atmel_sha_hmac_ctx* FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int const*,unsigned int) ;
 int FUNC_9 (int *,int ,size_t) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct atmel_sha_dev *VAR_10,
    atmel_sha_fn_t VAR_11)
{
 struct ahash_request *VAR_12 = VAR_10->req;
 struct atmel_sha_reqctx *VAR_13 = FUNC_0(VAR_12);
 struct crypto_ahash *VAR_14 = FUNC_6(VAR_12);
 struct atmel_sha_hmac_ctx *VAR_15 = FUNC_5(VAR_14);
 unsigned int VAR_16;
 const u8 *VAR_17;
 size_t VAR_18;

 VAR_15->resume = VAR_11;
 switch (VAR_13->flags & VAR_9) {
 case 132:
  VAR_13->block_size = VAR_1;
  VAR_13->hash_size = VAR_2;
  break;

 case 131:
  VAR_13->block_size = VAR_3;
  VAR_13->hash_size = VAR_5;
  break;

 case 130:
  VAR_13->block_size = VAR_4;
  VAR_13->hash_size = VAR_5;
  break;

 case 129:
  VAR_13->block_size = VAR_6;
  VAR_13->hash_size = VAR_8;
  break;

 case 128:
  VAR_13->block_size = VAR_7;
  VAR_13->hash_size = VAR_8;
  break;

 default:
  return FUNC_1(VAR_10, -VAR_0);
 }
 VAR_18 = VAR_13->block_size;

 if (FUNC_7(!FUNC_3(&VAR_15->hkey, &VAR_17, &VAR_16)))
  return VAR_11(VAR_10);


 if (FUNC_10(VAR_16 > VAR_18))
  return FUNC_4(VAR_10, VAR_17, VAR_16);


 FUNC_8((u8 *)VAR_15->ipad, VAR_17, VAR_16);
 FUNC_9((u8 *)VAR_15->ipad + VAR_16, 0, VAR_18 - VAR_16);
 return FUNC_2(VAR_10);
}
