
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;} ;


 int FUNC_0 (struct crypto_async_request*,int ) ;

__attribute__((used)) static void FUNC_1(struct crypto_async_request *VAR_0)
{
 VAR_0->complete(VAR_0, 0);
}
