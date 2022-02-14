
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct crypto_sm4_ctx {int rkey_dec; } ;


 struct crypto_sm4_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int *,int *) ;

void FUNC_2(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const struct crypto_sm4_ctx *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3->rkey_dec, (u32 *)VAR_1, (u32 *)VAR_2);
}
