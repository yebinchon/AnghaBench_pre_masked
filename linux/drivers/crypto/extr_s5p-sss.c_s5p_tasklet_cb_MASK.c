
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s5p_aes_reqctx {int mode; } ;
struct s5p_aes_dev {int busy; TYPE_2__* req; int ctx; int lock; int queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;} ;
struct TYPE_4__ {int tfm; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct crypto_async_request*) ;
 struct s5p_aes_reqctx* FUNC_1 (TYPE_2__*) ;
 struct crypto_async_request* FUNC_2 (int *) ;
 struct crypto_async_request* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct s5p_aes_dev*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct crypto_async_request*,int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_1)
{
 struct s5p_aes_dev *VAR_2 = (struct s5p_aes_dev *)VAR_1;
 struct crypto_async_request *VAR_3, *VAR_4;
 struct s5p_aes_reqctx *VAR_5;
 unsigned long VAR_6;

 FUNC_6(&VAR_2->lock, VAR_6);
 VAR_4 = FUNC_3(&VAR_2->queue);
 VAR_3 = FUNC_2(&VAR_2->queue);

 if (!VAR_3) {
  VAR_2->busy = 0;
  FUNC_7(&VAR_2->lock, VAR_6);
  return;
 }
 FUNC_7(&VAR_2->lock, VAR_6);

 if (VAR_4)
  VAR_4->complete(VAR_4, -VAR_0);

 VAR_2->req = FUNC_0(VAR_3);
 VAR_2->ctx = FUNC_4(VAR_2->req->base.tfm);
 VAR_5 = FUNC_1(VAR_2->req);

 FUNC_5(VAR_2, VAR_5->mode);
}
