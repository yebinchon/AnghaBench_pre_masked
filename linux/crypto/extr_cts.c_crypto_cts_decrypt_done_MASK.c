
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct crypto_async_request {struct skcipher_request* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*,int) ;

__attribute__((used)) static void FUNC_2(struct crypto_async_request *VAR_2, int VAR_3)
{
 struct skcipher_request *VAR_4 = VAR_2->data;

 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(VAR_4);
 if (VAR_3 == -VAR_1 || VAR_3 == -VAR_0)
  return;

out:
 FUNC_1(VAR_4, VAR_3);
}
