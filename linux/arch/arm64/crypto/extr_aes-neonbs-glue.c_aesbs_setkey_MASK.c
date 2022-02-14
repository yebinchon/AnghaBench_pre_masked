
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int key_enc; } ;
struct aesbs_ctx {int rounds; int rk; } ;


 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 struct aesbs_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct crypto_skcipher *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2)
{
 struct aesbs_ctx *VAR_3 = FUNC_2(VAR_0);
 struct crypto_aes_ctx VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3->rounds = 6 + VAR_2 / 4;

 FUNC_3();
 FUNC_1(VAR_3->rk, VAR_4.key_enc, VAR_3->rounds);
 FUNC_4();

 return 0;
}
