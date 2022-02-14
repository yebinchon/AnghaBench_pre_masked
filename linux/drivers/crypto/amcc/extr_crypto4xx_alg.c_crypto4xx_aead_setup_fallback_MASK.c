
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {struct crypto_aead* aead; } ;
struct crypto4xx_ctx {TYPE_1__ sw_cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_aead*,int) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 int FUNC_3 (struct crypto_aead*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto4xx_ctx *VAR_2,
      struct crypto_aead *VAR_3,
      const u8 *VAR_4,
      unsigned int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_2->sw_cipher.aead, VAR_0);
 FUNC_2(VAR_2->sw_cipher.aead,
  FUNC_1(VAR_3) & VAR_0);
 VAR_6 = FUNC_3(VAR_2->sw_cipher.aead, VAR_4, VAR_5);
 FUNC_0(VAR_3, VAR_1);
 FUNC_2(VAR_3,
  FUNC_1(VAR_2->sw_cipher.aead) &
   VAR_1);

 return VAR_6;
}
