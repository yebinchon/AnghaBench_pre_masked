
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto_sm4_ctx {int rkey_enc; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct crypto_tfm*,int *,int const*) ;
 struct crypto_sm4_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int const*) ;

__attribute__((used)) static void FUNC_6(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const struct crypto_sm4_ctx *VAR_3 = FUNC_2(VAR_0);

 if (!FUNC_0()) {
  FUNC_1(VAR_0, VAR_1, VAR_2);
 } else {
  FUNC_3();
  FUNC_5(VAR_3->rkey_enc, VAR_1, VAR_2);
  FUNC_4();
 }
}
