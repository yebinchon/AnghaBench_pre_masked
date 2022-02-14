
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct artpec6_cryptotfm_context {int dummy; } ;
struct artpec6_crypto_aead_req_ctx {int dummy; } ;


 struct artpec6_cryptotfm_context* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int) ;
 int FUNC_2 (struct artpec6_cryptotfm_context*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_0)
{
 struct artpec6_cryptotfm_context *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 FUNC_1(VAR_0,
    sizeof(struct artpec6_crypto_aead_req_ctx));

 return 0;
}
