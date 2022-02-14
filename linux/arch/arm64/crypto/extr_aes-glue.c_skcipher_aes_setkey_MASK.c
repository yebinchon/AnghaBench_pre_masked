
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 struct crypto_aes_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_skcipher *VAR_1, const u8 *VAR_2,
          unsigned int VAR_3)
{
 struct crypto_aes_ctx *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_2(VAR_1, VAR_0);

 return VAR_5;
}
