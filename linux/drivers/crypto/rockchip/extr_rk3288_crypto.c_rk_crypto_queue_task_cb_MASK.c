
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int busy; int (* start ) (struct rk_crypto_info*) ;struct crypto_async_request* async_req; int (* complete ) (struct crypto_async_request*,int) ;int lock; int queue; int err; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;} ;


 int VAR_0 ;
 struct crypto_async_request* FUNC_0 (int *) ;
 struct crypto_async_request* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct crypto_async_request*,int ) ;
 int FUNC_5 (struct rk_crypto_info*) ;
 int FUNC_6 (struct crypto_async_request*,int) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct rk_crypto_info *VAR_2 = (struct rk_crypto_info *)VAR_1;
 struct crypto_async_request *VAR_3, *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_2->err = 0;
 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_4 = FUNC_1(&VAR_2->queue);
 VAR_3 = FUNC_0(&VAR_2->queue);

 if (!VAR_3) {
  VAR_2->busy = 0;
  FUNC_3(&VAR_2->lock, VAR_5);
  return;
 }
 FUNC_3(&VAR_2->lock, VAR_5);

 if (VAR_4) {
  VAR_4->complete(VAR_4, -VAR_0);
  VAR_4 = ((void*)0);
 }

 VAR_2->async_req = VAR_3;
 VAR_6 = VAR_2->start(VAR_2);
 if (VAR_6)
  VAR_2->complete(VAR_2->async_req, VAR_6);
}
