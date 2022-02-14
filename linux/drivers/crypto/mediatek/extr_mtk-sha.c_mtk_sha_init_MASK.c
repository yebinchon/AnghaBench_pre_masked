
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_reqctx {int flags; int ds; scalar_t__ bs; scalar_t__ bufcnt; int buffer; scalar_t__ digcnt; } ;
struct mtk_sha_hmac_ctx {int ipad; } ;
struct mtk_sha_ctx {int flags; struct mtk_sha_hmac_ctx* base; int buf; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct mtk_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 struct mtk_sha_ctx* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_12)
{
 struct crypto_ahash *VAR_13 = FUNC_3(VAR_12);
 struct mtk_sha_ctx *VAR_14 = FUNC_1(VAR_13);
 struct mtk_sha_reqctx *VAR_15 = FUNC_0(VAR_12);

 VAR_15->flags = 0;
 VAR_15->ds = FUNC_2(VAR_13);

 switch (VAR_15->ds) {
 case 132:
  VAR_15->flags |= VAR_7;
  VAR_15->bs = VAR_1;
  break;
 case 131:
  VAR_15->flags |= VAR_8;
  VAR_15->bs = VAR_2;
  break;
 case 130:
  VAR_15->flags |= VAR_9;
  VAR_15->bs = VAR_3;
  break;
 case 129:
  VAR_15->flags |= VAR_10;
  VAR_15->bs = VAR_4;
  break;
 case 128:
  VAR_15->flags |= VAR_11;
  VAR_15->bs = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_15->bufcnt = 0;
 VAR_15->digcnt = 0;
 VAR_15->buffer = VAR_14->buf;

 if (VAR_14->flags & VAR_6) {
  struct mtk_sha_hmac_ctx *VAR_16 = VAR_14->base;

  FUNC_4(VAR_15->buffer, VAR_16->ipad, VAR_15->bs);
  VAR_15->bufcnt = VAR_15->bs;
  VAR_15->flags |= VAR_6;
 }

 return 0;
}
