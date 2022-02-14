
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;} ;


 int FUNC_0 (struct crypto_async_request*,int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, void *VAR_1)
{
 struct crypto_async_request *VAR_2 = (struct crypto_async_request *)VAR_1;

 VAR_2->complete(VAR_2, !VAR_0);
}
