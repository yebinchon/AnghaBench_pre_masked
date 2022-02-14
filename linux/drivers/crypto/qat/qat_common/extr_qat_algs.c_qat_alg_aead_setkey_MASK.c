
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qat_alg_aead_ctx {scalar_t__ enc_cd; } ;
struct crypto_aead {int dummy; } ;


 struct qat_alg_aead_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_aead*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_0, const uint8_t *VAR_1,
          unsigned int VAR_2)
{
 struct qat_alg_aead_ctx *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->enc_cd)
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
