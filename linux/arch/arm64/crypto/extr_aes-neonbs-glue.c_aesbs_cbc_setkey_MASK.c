
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int key_enc; } ;
struct TYPE_2__ {int rounds; int rk; } ;
struct aesbs_cbc_ctx {TYPE_1__ key; int enc; } ;


 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 struct aesbs_cbc_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_0, const u8 *VAR_1,
       unsigned int VAR_2)
{
 struct aesbs_cbc_ctx *VAR_3 = FUNC_2(VAR_0);
 struct crypto_aes_ctx VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3->key.rounds = 6 + VAR_2 / 4;

 FUNC_5(VAR_3->enc, VAR_4.key_enc, sizeof(VAR_3->enc));

 FUNC_3();
 FUNC_1(VAR_3->key.rk, VAR_4.key_enc, VAR_3->key.rounds);
 FUNC_4();

 return 0;
}
