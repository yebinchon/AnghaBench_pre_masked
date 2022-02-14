
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mtk_sha_reqctx {scalar_t__ op; int flags; } ;
struct mtk_sha_rec {int flags; struct ahash_request* req; int lock; int queue; } ;
struct mtk_cryp {struct mtk_sha_rec** sha; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;} ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,struct ahash_request*) ;
 struct ahash_request* FUNC_1 (struct crypto_async_request*) ;
 struct mtk_sha_reqctx* FUNC_2 (struct ahash_request*) ;
 struct crypto_async_request* FUNC_3 (int *) ;
 struct crypto_async_request* FUNC_4 (int *) ;
 int FUNC_5 (struct mtk_cryp*,struct mtk_sha_rec*) ;
 int FUNC_6 (struct mtk_cryp*,struct mtk_sha_rec*,int) ;
 int FUNC_7 (struct mtk_sha_reqctx*) ;
 int FUNC_8 (struct mtk_cryp*,struct mtk_sha_rec*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct crypto_async_request*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct mtk_cryp *VAR_5, u8 VAR_6,
    struct ahash_request *VAR_7)
{
 struct mtk_sha_rec *VAR_8 = VAR_5->sha[VAR_6];
 struct crypto_async_request *VAR_9, *VAR_10;
 struct mtk_sha_reqctx *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0, VAR_14 = 0;

 FUNC_9(&VAR_8->lock, VAR_12);
 if (VAR_7)
  VAR_14 = FUNC_0(&VAR_8->queue, VAR_7);

 if (VAR_1 & VAR_8->flags) {
  FUNC_10(&VAR_8->lock, VAR_12);
  return VAR_14;
 }

 VAR_10 = FUNC_4(&VAR_8->queue);
 VAR_9 = FUNC_3(&VAR_8->queue);
 if (VAR_9)
  VAR_8->flags |= VAR_1;
 FUNC_10(&VAR_8->lock, VAR_12);

 if (!VAR_9)
  return VAR_14;

 if (VAR_10)
  VAR_10->complete(VAR_10, -VAR_0);

 VAR_7 = FUNC_1(VAR_9);
 VAR_11 = FUNC_2(VAR_7);

 VAR_8->req = VAR_7;

 FUNC_7(VAR_11);

 if (VAR_11->op == VAR_4) {
  VAR_13 = FUNC_8(VAR_5, VAR_8);
  if (VAR_13 != -VAR_0 && (VAR_11->flags & VAR_2))

   VAR_13 = FUNC_5(VAR_5, VAR_8);
 } else if (VAR_11->op == VAR_3) {
  VAR_13 = FUNC_5(VAR_5, VAR_8);
 }

 if (FUNC_12(VAR_13 != -VAR_0))

  FUNC_6(VAR_5, VAR_8, VAR_13);

 return VAR_14;
}
