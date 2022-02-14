
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_async_request {int flags; int tfm; struct akcipher_request* data; } ;
struct TYPE_2__ {int (* complete ) (struct crypto_async_request*,int ) ;struct akcipher_request* data; } ;
struct akcipher_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct akcipher_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct akcipher_request*,int) ;
 int FUNC_3 (struct crypto_async_request*,int ) ;

__attribute__((used)) static void FUNC_4(
  struct crypto_async_request *VAR_1, int VAR_2)
{
 struct akcipher_request *VAR_3 = VAR_1->data;
 struct crypto_async_request VAR_4;

 if (VAR_2 == -VAR_0)
  return;

 VAR_4.data = VAR_3->base.data;
 VAR_4.tfm = FUNC_1(FUNC_0(VAR_3));
 VAR_4.flags = VAR_1->flags;
 VAR_3->base.complete(&VAR_4, FUNC_2(VAR_3, VAR_2));
}
