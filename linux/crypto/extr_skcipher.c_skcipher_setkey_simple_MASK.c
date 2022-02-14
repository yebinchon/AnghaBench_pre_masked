
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_cipher*,int) ;
 int FUNC_1 (struct crypto_cipher*) ;
 int FUNC_2 (struct crypto_cipher*,int) ;
 int FUNC_3 (struct crypto_cipher*,int const*,unsigned int) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct crypto_skcipher*,int) ;
 struct crypto_cipher* FUNC_6 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_2, const u8 *VAR_3,
      unsigned int VAR_4)
{
 struct crypto_cipher *VAR_5 = FUNC_6(VAR_2);
 int VAR_6;

 FUNC_0(VAR_5, VAR_0);
 FUNC_2(VAR_5, FUNC_4(VAR_2) &
    VAR_0);
 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4);
 FUNC_5(VAR_2, FUNC_1(VAR_5) &
      VAR_1);
 return VAR_6;
}
