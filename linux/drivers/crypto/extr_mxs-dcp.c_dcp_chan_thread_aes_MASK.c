
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcp {int * lock; int * queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct crypto_async_request* FUNC_0 (int *) ;
 struct crypto_async_request* FUNC_1 (int *) ;
 struct dcp* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct crypto_async_request*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct crypto_async_request*,int) ;
 int FUNC_9 (struct crypto_async_request*,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_5)
{
 struct dcp *VAR_6 = VAR_4;
 const int VAR_7 = VAR_0;

 struct crypto_async_request *VAR_8;
 struct crypto_async_request *VAR_9;

 int VAR_10;

 while (!FUNC_2()) {
  FUNC_5(VAR_2);

  FUNC_6(&VAR_6->lock[VAR_7]);
  VAR_8 = FUNC_1(&VAR_6->queue[VAR_7]);
  VAR_9 = FUNC_0(&VAR_6->queue[VAR_7]);
  FUNC_7(&VAR_6->lock[VAR_7]);

  if (!VAR_8 && !VAR_9) {
   FUNC_4();
   continue;
  }

  FUNC_5(VAR_3);

  if (VAR_8)
   VAR_8->complete(VAR_8, -VAR_1);

  if (VAR_9) {
   VAR_10 = FUNC_3(VAR_9);
   VAR_9->complete(VAR_9, VAR_10);
  }
 }

 return 0;
}
