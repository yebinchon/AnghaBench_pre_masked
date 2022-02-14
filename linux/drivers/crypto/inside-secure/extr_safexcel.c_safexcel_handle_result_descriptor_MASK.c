
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rd_offset; } ;
struct safexcel_crypto_priv {TYPE_2__* ring; TYPE_1__ config; int dev; } ;
struct safexcel_context {int (* handle_result ) (struct safexcel_crypto_priv*,int,struct crypto_async_request*,int*,int*) ;} ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;int tfm; } ;
struct TYPE_4__ {int busy; int lock; scalar_t__ requests; } ;


 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct safexcel_context* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 struct crypto_async_request* FUNC_8 (struct safexcel_crypto_priv*,int) ;
 int FUNC_9 (struct safexcel_crypto_priv*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct safexcel_crypto_priv*,int,struct crypto_async_request*,int*,int*) ;
 int FUNC_13 (struct crypto_async_request*,int) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_15(struct safexcel_crypto_priv *VAR_3,
           int VAR_4)
{
 struct crypto_async_request *VAR_5;
 struct safexcel_context *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 bool VAR_13;

handle_results:
 VAR_11 = 0;

 VAR_9 = FUNC_7(FUNC_0(VAR_3, VAR_4) + VAR_0);
 VAR_9 >>= VAR_2;
 VAR_9 &= VAR_1;
 if (!VAR_9)
  goto requests_left;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_5 = FUNC_8(VAR_3, VAR_4);

  VAR_6 = FUNC_3(VAR_5->tfm);
  VAR_10 = VAR_6->handle_result(VAR_3, VAR_4, VAR_5,
        &VAR_13, &VAR_7);
  if (VAR_10 < 0) {
   FUNC_4(VAR_3->dev, "failed to handle result (%d)\n",
    VAR_10);
   goto acknowledge;
  }

  if (VAR_13) {
   FUNC_5();
   VAR_5->complete(VAR_5, VAR_7);
   FUNC_6();
  }

  VAR_11 += VAR_10;
  VAR_12++;
 }

acknowledge:
 if (VAR_8)
  FUNC_14(FUNC_2(VAR_8) |
         FUNC_1(VAR_11 * VAR_3->config.rd_offset),
         FUNC_0(VAR_3, VAR_4) + VAR_0);




 if (VAR_9 == VAR_1)
  goto handle_results;

requests_left:
 FUNC_10(&VAR_3->ring[VAR_4].lock);

 VAR_3->ring[VAR_4].requests -= VAR_12;
 FUNC_9(VAR_3, VAR_4);

 if (!VAR_3->ring[VAR_4].requests)
  VAR_3->ring[VAR_4].busy = 0;

 FUNC_11(&VAR_3->ring[VAR_4].lock);
}
