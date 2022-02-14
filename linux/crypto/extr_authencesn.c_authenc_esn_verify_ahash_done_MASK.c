
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {struct aead_request* data; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct aead_request*,int) ;
 int FUNC_1 (struct aead_request*,int ) ;

__attribute__((used)) static void FUNC_2(struct crypto_async_request *VAR_0,
       int VAR_1)
{
 struct aead_request *VAR_2 = VAR_0->data;

 VAR_1 = VAR_1 ?: FUNC_1(VAR_2, 0);
 FUNC_0(VAR_2, VAR_1);
}
