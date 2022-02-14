
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct crypto_sm4_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_sm4_ctx*,int const*,unsigned int) ;
 struct crypto_sm4_ctx* FUNC_1 (struct crypto_tfm*) ;

int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3,
         unsigned int VAR_4)
{
 struct crypto_sm4_ctx *VAR_5 = FUNC_1(VAR_2);
 u32 *VAR_6 = &VAR_2->crt_flags;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3, VAR_4);
 if (!VAR_7)
  return 0;

 *VAR_6 |= VAR_0;
 return -VAR_1;
}
