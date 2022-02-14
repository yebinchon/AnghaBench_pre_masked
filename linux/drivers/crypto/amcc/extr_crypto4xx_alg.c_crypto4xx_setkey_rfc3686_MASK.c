
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_skcipher {int dummy; } ;
struct crypto4xx_ctx {int iv_nonce; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct crypto_skcipher*,int const*,unsigned int,int ,int ) ;
 struct crypto4xx_ctx* FUNC_2 (struct crypto_skcipher*) ;

int FUNC_3(struct crypto_skcipher *VAR_3,
        const u8 *VAR_4, unsigned int VAR_5)
{
 struct crypto4xx_ctx *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5 - VAR_2,
  VAR_1, VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_6->iv_nonce = FUNC_0((u32 *)&VAR_4[VAR_5 -
       VAR_2]);

 return 0;
}
