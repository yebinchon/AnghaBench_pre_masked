
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;} ;
struct atmel_tdes_reqctx {int mode; } ;
struct atmel_tdes_dev {int flags; int queue_task; struct atmel_tdes_ctx* ctx; int out_sg; scalar_t__ out_offset; int in_sg; scalar_t__ in_offset; int total; struct ablkcipher_request* req; int lock; int queue; } ;
struct atmel_tdes_ctx {struct atmel_tdes_dev* dd; } ;
struct ablkcipher_request {int dst; int src; int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ablkcipher_request*) ;
 struct ablkcipher_request* FUNC_1 (struct crypto_async_request*) ;
 struct atmel_tdes_reqctx* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (struct atmel_tdes_dev*) ;
 int FUNC_4 (struct atmel_tdes_dev*,int) ;
 int FUNC_5 (struct atmel_tdes_dev*) ;
 struct atmel_tdes_ctx* FUNC_6 (int ) ;
 int FUNC_7 (struct ablkcipher_request*) ;
 struct crypto_async_request* FUNC_8 (int *) ;
 struct crypto_async_request* FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct crypto_async_request*,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct atmel_tdes_dev *VAR_3,
          struct ablkcipher_request *VAR_4)
{
 struct crypto_async_request *VAR_5, *VAR_6;
 struct atmel_tdes_ctx *VAR_7;
 struct atmel_tdes_reqctx *VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11 = 0;

 FUNC_10(&VAR_3->lock, VAR_9);
 if (VAR_4)
  VAR_11 = FUNC_0(&VAR_3->queue, VAR_4);
 if (VAR_3->flags & VAR_1) {
  FUNC_11(&VAR_3->lock, VAR_9);
  return VAR_11;
 }
 VAR_6 = FUNC_9(&VAR_3->queue);
 VAR_5 = FUNC_8(&VAR_3->queue);
 if (VAR_5)
  VAR_3->flags |= VAR_1;
 FUNC_11(&VAR_3->lock, VAR_9);

 if (!VAR_5)
  return VAR_11;

 if (VAR_6)
  VAR_6->complete(VAR_6, -VAR_0);

 VAR_4 = FUNC_1(VAR_5);


 VAR_3->req = VAR_4;
 VAR_3->total = VAR_4->nbytes;
 VAR_3->in_offset = 0;
 VAR_3->in_sg = VAR_4->src;
 VAR_3->out_offset = 0;
 VAR_3->out_sg = VAR_4->dst;

 VAR_8 = FUNC_2(VAR_4);
 VAR_7 = FUNC_6(FUNC_7(VAR_4));
 VAR_8->mode &= VAR_2;
 VAR_3->flags = (VAR_3->flags & ~VAR_2) | VAR_8->mode;
 VAR_3->ctx = VAR_7;
 VAR_7->dd = VAR_3;

 VAR_10 = FUNC_5(VAR_3);
 if (!VAR_10)
  VAR_10 = FUNC_3(VAR_3);
 if (VAR_10) {

  FUNC_4(VAR_3, VAR_10);
  FUNC_13(&VAR_3->queue_task);
 }

 return VAR_11;
}
