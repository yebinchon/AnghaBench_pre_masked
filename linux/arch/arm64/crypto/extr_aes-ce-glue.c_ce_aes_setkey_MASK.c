
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int crt_flags; } ;
struct crypto_aes_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 struct crypto_aes_ctx* FUNC_1 (struct crypto_tfm*) ;

int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4)
{
 struct crypto_aes_ctx *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);
 if (!VAR_6)
  return 0;

 VAR_2->crt_flags |= VAR_0;
 return -VAR_1;
}
