
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct crypto_async_request {struct skcipher_request* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct skcipher_request*,int) ;

__attribute__((used)) static void FUNC_1(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct skcipher_request *VAR_3 = VAR_1->data;

 if (VAR_2 == -VAR_0)
  return;

 FUNC_0(VAR_3, VAR_2);
}
