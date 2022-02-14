
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct aesbs_cbc_ctx {int enc_tfm; } ;


 int FUNC_0 (int ,int *,int const*) ;
 struct aesbs_cbc_ctx* FUNC_1 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_2(struct crypto_skcipher *VAR_0, const u8 *VAR_1, u8 *VAR_2)
{
 struct aesbs_cbc_ctx *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->enc_tfm, VAR_2, VAR_1);
}
