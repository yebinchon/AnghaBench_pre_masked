
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {int result; int lock; struct crypto_async_request* req; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;} ;


 int FUNC_0 (struct qce_device*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct crypto_async_request*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct qce_device *VAR_1 = (struct qce_device *)VAR_0;
 struct crypto_async_request *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_2 = VAR_1->req;
 VAR_1->req = ((void*)0);
 FUNC_2(&VAR_1->lock, VAR_3);

 if (VAR_2)
  VAR_2->complete(VAR_2, VAR_1->result);

 FUNC_0(VAR_1, ((void*)0));
}
