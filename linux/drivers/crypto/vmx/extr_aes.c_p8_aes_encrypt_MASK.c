
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p8_aes_ctx {int enc_key; int fallback; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int const*,int *,int *) ;
 int FUNC_1 (int ,int *,int const*) ;
 int FUNC_2 () ;
 struct p8_aes_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct p8_aes_ctx *VAR_3 = FUNC_3(VAR_0);

 if (!FUNC_2()) {
  FUNC_1(VAR_3->fallback, VAR_1, VAR_2);
 } else {
  FUNC_8();
  FUNC_6();
  FUNC_5();
  FUNC_0(VAR_2, VAR_1, &VAR_3->enc_key);
  FUNC_4();
  FUNC_7();
  FUNC_9();
 }
}
