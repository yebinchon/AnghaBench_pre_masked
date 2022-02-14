
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int base; } ;
struct crypto_skcipher {int dummy; } ;
struct cryptd_skcipher_request_ctx {int (* complete ) (int *,int) ;} ;
struct cryptd_skcipher_ctx {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_skcipher*) ;
 struct cryptd_skcipher_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct cryptd_skcipher_request_ctx* FUNC_7 (struct skcipher_request*) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct skcipher_request *VAR_1, int VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_2(VAR_1);
 struct cryptd_skcipher_ctx *VAR_4 = FUNC_1(VAR_3);
 struct cryptd_skcipher_request_ctx *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = FUNC_6(&VAR_4->refcnt);

 FUNC_3();
 VAR_5->complete(&VAR_1->base, VAR_2);
 FUNC_4();

 if (VAR_2 != -VAR_0 && VAR_6 && FUNC_5(&VAR_4->refcnt))
  FUNC_0(VAR_3);
}
