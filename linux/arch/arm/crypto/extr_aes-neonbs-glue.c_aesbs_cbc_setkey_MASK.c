
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int key_enc; } ;
struct TYPE_2__ {int rounds; int rk; } ;
struct aesbs_cbc_ctx {int enc_tfm; TYPE_1__ key; } ;


 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 struct aesbs_cbc_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_0, const u8 *VAR_1,
       unsigned int VAR_2)
{
 struct aesbs_cbc_ctx *VAR_3 = FUNC_3(VAR_0);
 struct crypto_aes_ctx VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3->key.rounds = 6 + VAR_2 / 4;

 FUNC_4();
 FUNC_1(VAR_3->key.rk, VAR_4.key_enc, VAR_3->key.rounds);
 FUNC_5();

 return FUNC_2(VAR_3->enc_tfm, VAR_1, VAR_2);
}
