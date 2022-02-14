
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {int result; int done_tasklet; int lock; struct crypto_async_request* req; int queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;} ;


 int VAR_0 ;
 struct crypto_async_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct crypto_async_request*) ;
 struct crypto_async_request* FUNC_2 (int *) ;
 int FUNC_3 (struct crypto_async_request*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct crypto_async_request*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct qce_device *VAR_1,
       struct crypto_async_request *VAR_2)
{
 struct crypto_async_request *VAR_3, *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0, VAR_7;

 FUNC_5(&VAR_1->lock, VAR_5);

 if (VAR_2)
  VAR_6 = FUNC_1(&VAR_1->queue, VAR_2);


 if (VAR_1->req) {
  FUNC_7(&VAR_1->lock, VAR_5);
  return VAR_6;
 }

 VAR_4 = FUNC_2(&VAR_1->queue);
 VAR_3 = FUNC_0(&VAR_1->queue);
 if (VAR_3)
  VAR_1->req = VAR_3;

 FUNC_7(&VAR_1->lock, VAR_5);

 if (!VAR_3)
  return VAR_6;

 if (VAR_4) {
  FUNC_4(&VAR_1->lock);
  VAR_4->complete(VAR_4, -VAR_0);
  FUNC_6(&VAR_1->lock);
 }

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7) {
  VAR_1->result = VAR_7;
  FUNC_9(&VAR_1->done_tasklet);
 }

 return VAR_6;
}
