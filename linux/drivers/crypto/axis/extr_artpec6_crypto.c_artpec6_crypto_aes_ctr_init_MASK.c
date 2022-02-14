
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher {int reqsize; int base; } ;
struct artpec6_cryptotfm_context {int crypto_type; int fallback; } ;
struct artpec6_crypto_request_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct artpec6_cryptotfm_context* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct crypto_skcipher *VAR_2)
{
 struct artpec6_cryptotfm_context *VAR_3 = FUNC_3(VAR_2);

 VAR_3->fallback =
  FUNC_2(FUNC_4(&VAR_2->base),
        0, VAR_1);
 if (FUNC_0(VAR_3->fallback))
  return FUNC_1(VAR_3->fallback);

 VAR_2->reqsize = sizeof(struct artpec6_crypto_request_context);
 VAR_3->crypto_type = VAR_0;

 return 0;
}
