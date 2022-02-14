
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mtk_cryp {struct mtk_aes_rec** aes; } ;
struct mtk_aes_rec {int flags; struct mtk_aes_base_ctx* ctx; struct crypto_async_request* areq; int lock; int queue; } ;
struct TYPE_2__ {int state; } ;
struct mtk_aes_base_ctx {int (* start ) (struct mtk_cryp*,struct mtk_aes_rec*) ;int key; TYPE_1__ info; } ;
struct crypto_async_request {int tfm; int (* complete ) (struct crypto_async_request*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_async_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct crypto_async_request*) ;
 struct crypto_async_request* FUNC_2 (int *) ;
 struct mtk_aes_base_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct crypto_async_request*,int ) ;
 int FUNC_8 (struct mtk_cryp*,struct mtk_aes_rec*) ;

__attribute__((used)) static int FUNC_9(struct mtk_cryp *VAR_2, u8 VAR_3,
    struct crypto_async_request *VAR_4)
{
 struct mtk_aes_rec *VAR_5 = VAR_2->aes[VAR_3];
 struct crypto_async_request *VAR_6, *VAR_7;
 struct mtk_aes_base_ctx *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_5(&VAR_5->lock, VAR_9);
 if (VAR_4)
  VAR_10 = FUNC_1(&VAR_5->queue, VAR_4);
 if (VAR_5->flags & VAR_0) {
  FUNC_6(&VAR_5->lock, VAR_9);
  return VAR_10;
 }
 VAR_7 = FUNC_2(&VAR_5->queue);
 VAR_6 = FUNC_0(&VAR_5->queue);
 if (VAR_6)
  VAR_5->flags |= VAR_0;
 FUNC_6(&VAR_5->lock, VAR_9);

 if (!VAR_6)
  return VAR_10;

 if (VAR_7)
  VAR_7->complete(VAR_7, -VAR_1);

 VAR_8 = FUNC_3(VAR_6->tfm);

 FUNC_4(VAR_8->info.state, VAR_8->key, sizeof(VAR_8->key));

 VAR_5->areq = VAR_6;
 VAR_5->ctx = VAR_8;

 return VAR_8->start(VAR_2, VAR_5);
}
