
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_device {scalar_t__ started; int lock; int queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;} ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ablkcipher_request* FUNC_0 (struct crypto_async_request*) ;
 struct crypto_async_request* FUNC_1 (int *) ;
 struct crypto_async_request* FUNC_2 (int *) ;
 int FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct crypto_async_request*,int ) ;

__attribute__((used)) static int FUNC_7(struct hifn_device *VAR_2)
{
 struct crypto_async_request *VAR_3, *VAR_4;
 struct ablkcipher_request *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 while (VAR_2->started < VAR_1) {
  FUNC_4(&VAR_2->lock, VAR_6);
  VAR_4 = FUNC_2(&VAR_2->queue);
  VAR_3 = FUNC_1(&VAR_2->queue);
  FUNC_5(&VAR_2->lock, VAR_6);

  if (!VAR_3)
   break;

  if (VAR_4)
   VAR_4->complete(VAR_4, -VAR_0);

  VAR_5 = FUNC_0(VAR_3);

  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   break;
 }

 return VAR_7;
}
