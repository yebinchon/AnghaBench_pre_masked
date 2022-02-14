
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct priv {struct crypto_skcipher* child; struct crypto_cipher* tweak; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_cipher*,int) ;
 int FUNC_1 (struct crypto_cipher*) ;
 int FUNC_2 (struct crypto_cipher*,int) ;
 int FUNC_3 (struct crypto_cipher*,int const*,unsigned int) ;
 int FUNC_4 (struct crypto_skcipher*,int) ;
 struct priv* FUNC_5 (struct crypto_skcipher*) ;
 int FUNC_6 (struct crypto_skcipher*) ;
 int FUNC_7 (struct crypto_skcipher*,int) ;
 int FUNC_8 (struct crypto_skcipher*,int const*,unsigned int) ;
 int FUNC_9 (struct crypto_skcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct crypto_skcipher *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4)
{
 struct priv *VAR_5 = FUNC_5(VAR_2);
 struct crypto_skcipher *VAR_6;
 struct crypto_cipher *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_9(VAR_2, VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_4 /= 2;






 VAR_7 = VAR_5->tweak;
 FUNC_0(VAR_7, VAR_0);
 FUNC_2(VAR_7, FUNC_6(VAR_2) &
           VAR_0);
 VAR_8 = FUNC_3(VAR_7, VAR_3 + VAR_4, VAR_4);
 FUNC_7(VAR_2, FUNC_1(VAR_7) &
       VAR_1);
 if (VAR_8)
  return VAR_8;


 VAR_6 = VAR_5->child;
 FUNC_4(VAR_6, VAR_0);
 FUNC_7(VAR_6, FUNC_6(VAR_2) &
      VAR_0);
 VAR_8 = FUNC_8(VAR_6, VAR_3, VAR_4);
 FUNC_7(VAR_2, FUNC_6(VAR_6) &
       VAR_1);

 return VAR_8;
}
