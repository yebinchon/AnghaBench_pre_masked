
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct rctx {int tail; int t; } ;
struct crypto_async_request {struct skcipher_request* data; } ;
typedef int le128 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ,int ,int ,int) ;
 int FUNC_2 (struct skcipher_request*,int) ;
 struct rctx* FUNC_3 (struct skcipher_request*) ;

__attribute__((used)) static void FUNC_4(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct skcipher_request *VAR_3 = VAR_1->data;
 le128 VAR_4;

 if (!VAR_2) {
  struct rctx *VAR_5 = FUNC_3(VAR_3);

  FUNC_1(&VAR_4, VAR_5->tail, 0, VAR_0, 0);
  FUNC_0(&VAR_4, &VAR_5->t, &VAR_4);
  FUNC_1(&VAR_4, VAR_5->tail, 0, VAR_0, 1);
 }

 FUNC_2(VAR_3, VAR_2);
}
