
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher {int dummy; } ;
struct crypto_rfc3686_ctx {int child; } ;


 int FUNC_0 (int ) ;
 struct crypto_rfc3686_ctx* FUNC_1 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_2(struct crypto_skcipher *VAR_0)
{
 struct crypto_rfc3686_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->child);
}
