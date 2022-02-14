
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int data; } ;
struct ahash_request_priv {int (* complete ) (struct crypto_async_request*,int ) ;int data; } ;
struct ahash_request {struct ahash_request_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_async_request*,int ) ;

__attribute__((used)) static void FUNC_1(struct ahash_request *VAR_1)
{
 struct ahash_request_priv *VAR_2 = VAR_1->priv;
 struct crypto_async_request VAR_3;

 VAR_3.data = VAR_2->data;

 VAR_2->complete(&VAR_3, -VAR_0);
}
