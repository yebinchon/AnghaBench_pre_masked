
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_2__ {int cipher; } ;
struct crypto4xx_ctx {TYPE_1__ sw_cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*,int) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto4xx_ctx *VAR_2,
           struct crypto_skcipher *VAR_3,
           const u8 *VAR_4,
           unsigned int VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_2->sw_cipher.cipher,
        VAR_0);
 FUNC_5(VAR_2->sw_cipher.cipher,
  FUNC_1(VAR_3) & VAR_0);
 VAR_6 = FUNC_6(VAR_2->sw_cipher.cipher, VAR_4, VAR_5);
 FUNC_0(VAR_3, VAR_1);
 FUNC_2(VAR_3,
  FUNC_4(VAR_2->sw_cipher.cipher) &
   VAR_1);

 return VAR_6;
}
