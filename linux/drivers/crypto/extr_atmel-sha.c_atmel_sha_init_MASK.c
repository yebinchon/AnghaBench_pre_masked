
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int dummy; } ;
struct atmel_sha_reqctx {int buflen; scalar_t__* digcnt; scalar_t__ bufcnt; int block_size; scalar_t__ flags; struct atmel_sha_dev* dd; } ;
struct atmel_sha_dev {int dev; } ;
struct atmel_sha_ctx {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 struct atmel_sha_dev* FUNC_1 (struct atmel_sha_ctx*) ;
 struct atmel_sha_ctx* FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_12)
{
 struct crypto_ahash *VAR_13 = FUNC_4(VAR_12);
 struct atmel_sha_ctx *VAR_14 = FUNC_2(VAR_13);
 struct atmel_sha_reqctx *VAR_15 = FUNC_0(VAR_12);
 struct atmel_sha_dev *VAR_16 = FUNC_1(VAR_14);

 VAR_15->dd = VAR_16;

 VAR_15->flags = 0;

 FUNC_5(VAR_16->dev, "init: digest size: %d\n",
  FUNC_3(VAR_13));

 switch (FUNC_3(VAR_13)) {
 case 132:
  VAR_15->flags |= VAR_7;
  VAR_15->block_size = VAR_1;
  break;
 case 131:
  VAR_15->flags |= VAR_8;
  VAR_15->block_size = VAR_2;
  break;
 case 130:
  VAR_15->flags |= VAR_9;
  VAR_15->block_size = VAR_3;
  break;
 case 129:
  VAR_15->flags |= VAR_10;
  VAR_15->block_size = VAR_4;
  break;
 case 128:
  VAR_15->flags |= VAR_11;
  VAR_15->block_size = VAR_5;
  break;
 default:
  return -VAR_0;
  break;
 }

 VAR_15->bufcnt = 0;
 VAR_15->digcnt[0] = 0;
 VAR_15->digcnt[1] = 0;
 VAR_15->buflen = VAR_6;

 return 0;
}
