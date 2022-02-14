
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rd_offset; int cd_offset; } ;
struct safexcel_crypto_priv {TYPE_2__ config; TYPE_1__* ring; } ;
struct safexcel_context {int (* send ) (struct crypto_async_request*,int,int*,int*) ;} ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;int tfm; } ;
struct TYPE_3__ {int requests; int busy; int lock; struct crypto_async_request* backlog; struct crypto_async_request* req; int queue_lock; int queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ FUNC_1 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ VAR_1 ;
 struct crypto_async_request* FUNC_2 (int *) ;
 struct crypto_async_request* FUNC_3 (int *) ;
 struct safexcel_context* FUNC_4 (int ) ;
 int FUNC_5 (struct safexcel_crypto_priv*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct crypto_async_request*,int,int*,int*) ;
 int FUNC_9 (struct crypto_async_request*,int ) ;
 int FUNC_10 (int,scalar_t__) ;

void FUNC_11(struct safexcel_crypto_priv *VAR_2, int VAR_3)
{
 struct crypto_async_request *VAR_4, *VAR_5;
 struct safexcel_context *VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12;




 VAR_4 = VAR_2->ring[VAR_3].req;
 VAR_5 = VAR_2->ring[VAR_3].backlog;
 if (VAR_4)
  goto handle_req;

 while (1) {
  FUNC_6(&VAR_2->ring[VAR_3].queue_lock);
  VAR_5 = FUNC_3(&VAR_2->ring[VAR_3].queue);
  VAR_4 = FUNC_2(&VAR_2->ring[VAR_3].queue);
  FUNC_7(&VAR_2->ring[VAR_3].queue_lock);

  if (!VAR_4) {
   VAR_2->ring[VAR_3].req = ((void*)0);
   VAR_2->ring[VAR_3].backlog = ((void*)0);
   goto finalize;
  }

handle_req:
  VAR_6 = FUNC_4(VAR_4->tfm);
  VAR_7 = VAR_6->send(VAR_4, VAR_3, &VAR_11, &VAR_12);
  if (VAR_7)
   goto request_failed;

  if (VAR_5)
   VAR_5->complete(VAR_5, -VAR_0);





  if (!VAR_11 && !VAR_12)
   continue;

  VAR_9 += VAR_11;
  VAR_10 += VAR_12;
  VAR_8++;
 }

request_failed:



 VAR_2->ring[VAR_3].req = VAR_4;
 VAR_2->ring[VAR_3].backlog = VAR_5;

finalize:
 if (!VAR_8)
  return;

 FUNC_6(&VAR_2->ring[VAR_3].lock);

 VAR_2->ring[VAR_3].requests += VAR_8;

 if (!VAR_2->ring[VAR_3].busy) {
  FUNC_5(VAR_2, VAR_3);
  VAR_2->ring[VAR_3].busy = 1;
 }

 FUNC_7(&VAR_2->ring[VAR_3].lock);


 FUNC_10((VAR_10 * VAR_2->config.rd_offset) << 2,
        FUNC_1(VAR_2, VAR_3) + VAR_1);


 FUNC_10((VAR_9 * VAR_2->config.cd_offset) << 2,
        FUNC_0(VAR_2, VAR_3) + VAR_1);
}
