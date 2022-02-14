
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct crypto_async_request {struct skcipher_request* data; } ;


 int FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*,int) ;

__attribute__((used)) static void FUNC_2(struct crypto_async_request *VAR_0,
           int VAR_1)
{
 struct skcipher_request *VAR_2 = VAR_0->data;

 if (!VAR_1)
  VAR_1 = FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_1);
}
