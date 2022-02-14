
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto4xx_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*,int const*,unsigned int,int ,int ) ;
 int FUNC_1 (struct crypto4xx_ctx*,struct crypto_skcipher*,int const*,unsigned int) ;
 struct crypto4xx_ctx* FUNC_2 (struct crypto_skcipher*) ;

int FUNC_3(struct crypto_skcipher *VAR_2,
        const u8 *VAR_3, unsigned int VAR_4)
{
 struct crypto4xx_ctx *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_2, VAR_3, VAR_4,
  VAR_1, VAR_0);
}
