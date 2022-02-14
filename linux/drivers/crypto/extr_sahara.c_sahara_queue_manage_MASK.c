
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_dev {int queue_mutex; int queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;int tfm; } ;
struct ahash_request {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ablkcipher_request* FUNC_1 (struct crypto_async_request*) ;
 struct ahash_request* FUNC_2 (struct crypto_async_request*) ;
 struct crypto_async_request* FUNC_3 (int *) ;
 struct crypto_async_request* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ablkcipher_request*) ;
 int FUNC_10 (struct ahash_request*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct crypto_async_request*,int) ;
 int FUNC_13 (struct crypto_async_request*,int) ;

__attribute__((used)) static int FUNC_14(void *VAR_3)
{
 struct sahara_dev *VAR_4 = (struct sahara_dev *)VAR_3;
 struct crypto_async_request *VAR_5;
 struct crypto_async_request *VAR_6;
 int VAR_7 = 0;

 do {
  FUNC_0(VAR_2);

  FUNC_7(&VAR_4->queue_mutex);
  VAR_6 = FUNC_4(&VAR_4->queue);
  VAR_5 = FUNC_3(&VAR_4->queue);
  FUNC_8(&VAR_4->queue_mutex);

  if (VAR_6)
   VAR_6->complete(VAR_6, -VAR_1);

  if (VAR_5) {
   if (FUNC_5(VAR_5->tfm) ==
       VAR_0) {
    struct ahash_request *VAR_8 =
     FUNC_2(VAR_5);

    VAR_7 = FUNC_10(VAR_8);
   } else {
    struct ablkcipher_request *VAR_9 =
     FUNC_1(VAR_5);

    VAR_7 = FUNC_9(VAR_9);
   }

   VAR_5->complete(VAR_5, VAR_7);

   continue;
  }

  FUNC_11();
 } while (!FUNC_6());

 return 0;
}
