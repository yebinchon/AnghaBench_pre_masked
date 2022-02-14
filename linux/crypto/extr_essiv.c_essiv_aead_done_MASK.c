
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct essiv_aead_request_ctx {scalar_t__ assoc; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct aead_request*,int) ;
 struct essiv_aead_request_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct aead_request *VAR_2 = VAR_0->data;
 struct essiv_aead_request_ctx *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->assoc)
  FUNC_2(VAR_3->assoc);
 FUNC_0(VAR_2, VAR_1);
}
