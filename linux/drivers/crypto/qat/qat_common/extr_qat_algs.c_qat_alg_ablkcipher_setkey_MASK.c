
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qat_alg_ablkcipher_ctx {scalar_t__ enc_cd; } ;
struct crypto_ablkcipher {int dummy; } ;


 struct qat_alg_ablkcipher_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (struct qat_alg_ablkcipher_ctx*,int const*,unsigned int,int) ;
 int FUNC_2 (struct qat_alg_ablkcipher_ctx*,int const*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_ablkcipher *VAR_0,
         const u8 *VAR_1, unsigned int VAR_2,
         int VAR_3)
{
 struct qat_alg_ablkcipher_ctx *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->enc_cd)
  return FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
}
