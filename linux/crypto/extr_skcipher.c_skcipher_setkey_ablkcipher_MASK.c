
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*,int) ;
 int FUNC_3 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 int FUNC_4 (struct crypto_skcipher*,int ) ;
 struct crypto_ablkcipher** FUNC_5 (struct crypto_skcipher*) ;
 int FUNC_6 (struct crypto_skcipher*) ;
 int FUNC_7 (struct crypto_skcipher*,int) ;
 int FUNC_8 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct crypto_skcipher *VAR_3,
          const u8 *VAR_4, unsigned int VAR_5)
{
 struct crypto_ablkcipher **VAR_6 = FUNC_5(VAR_3);
 struct crypto_ablkcipher *VAR_7 = *VAR_6;
 int VAR_8;

 FUNC_0(VAR_7, ~0);
 FUNC_2(VAR_7,
        FUNC_6(VAR_3) &
        VAR_1);
 VAR_8 = FUNC_3(VAR_7, VAR_4, VAR_5);
 FUNC_7(VAR_3,
      FUNC_1(VAR_7) &
      VAR_2);
 if (FUNC_9(VAR_8)) {
  FUNC_8(VAR_3);
  return VAR_8;
 }

 FUNC_4(VAR_3, VAR_0);
 return 0;
}
