
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher {int dummy; } ;
struct artpec6_cryptotfm_context {int fallback; } ;


 int FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (int ) ;
 struct artpec6_cryptotfm_context* FUNC_2 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_3(struct crypto_skcipher *VAR_0)
{
 struct artpec6_cryptotfm_context *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->fallback);
 FUNC_0(VAR_0);
}
