
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct arc4_ctx {int dummy; } ;


 int FUNC_0 (struct arc4_ctx*,int const*,unsigned int) ;
 struct arc4_ctx* FUNC_1 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_2(struct crypto_skcipher *VAR_0, const u8 *VAR_1,
         unsigned int VAR_2)
{
 struct arc4_ctx *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
