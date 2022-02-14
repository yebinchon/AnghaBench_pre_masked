
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aes_ctx {int key_length; int key_dec; } ;


 int FUNC_0 (int ,int,int const*,int *) ;
 struct crypto_aes_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct crypto_aes_ctx *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = 6 + VAR_3->key_length / 4;

 FUNC_0(VAR_3->key_dec, VAR_4, VAR_2, VAR_1);
}
