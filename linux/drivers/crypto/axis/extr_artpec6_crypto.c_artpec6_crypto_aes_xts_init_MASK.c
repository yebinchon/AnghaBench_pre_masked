
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher {int reqsize; } ;
struct artpec6_cryptotfm_context {int crypto_type; } ;
struct artpec6_crypto_request_context {int dummy; } ;


 int VAR_0 ;
 struct artpec6_cryptotfm_context* FUNC_0 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_1(struct crypto_skcipher *VAR_1)
{
 struct artpec6_cryptotfm_context *VAR_2 = FUNC_0(VAR_1);

 VAR_1->reqsize = sizeof(struct artpec6_crypto_request_context);
 VAR_2->crypto_type = VAR_0;

 return 0;
}
