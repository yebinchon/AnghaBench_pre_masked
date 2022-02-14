
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aes_ctx {int key_dec; } ;


 int FUNC_0 (int ,int *,int const*,int ) ;
 int FUNC_1 (struct crypto_aes_ctx*,int *,int const*) ;
 int FUNC_2 () ;
 struct crypto_aes_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct crypto_aes_ctx*) ;

__attribute__((used)) static void FUNC_7(struct crypto_tfm *VAR_0, u8 VAR_1[], u8 const VAR_2[])
{
 struct crypto_aes_ctx *VAR_3 = FUNC_3(VAR_0);

 if (!FUNC_2()) {
  FUNC_1(VAR_3, VAR_1, VAR_2);
  return;
 }

 FUNC_4();
 FUNC_0(VAR_3->key_dec, VAR_1, VAR_2, FUNC_6(VAR_3));
 FUNC_5();
}
