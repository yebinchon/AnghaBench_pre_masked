
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qat_crypto_request {int dummy; } ;
struct qat_alg_aead_ctx {int qat_hash_alg; int hash_tfm; } ;
struct crypto_aead {int dummy; } ;
typedef enum icp_qat_hw_auth_algo { ____Placeholder_icp_qat_hw_auth_algo } icp_qat_hw_auth_algo ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct qat_alg_aead_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int) ;
 int FUNC_4 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_aead *VAR_0,
        enum icp_qat_hw_auth_algo VAR_1,
        const char *VAR_2)
{
 struct qat_alg_aead_ctx *VAR_3 = FUNC_2(VAR_0);

 VAR_3->hash_tfm = FUNC_4(VAR_2, 0, 0);
 if (FUNC_0(VAR_3->hash_tfm))
  return FUNC_1(VAR_3->hash_tfm);
 VAR_3->qat_hash_alg = VAR_1;
 FUNC_3(VAR_0, sizeof(struct qat_crypto_request));
 return 0;
}
