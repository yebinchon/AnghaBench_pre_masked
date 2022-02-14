
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {struct crypto_aead* sw_cipher; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_3 (struct crypto_aead*,int) ;
 int FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct crypto_aead*,int) ;
 int FUNC_6 (struct crypto_aead*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_aead *VAR_2,
    const u8 *VAR_3,
    unsigned int VAR_4)
{
 struct chcr_aead_ctx *VAR_5 = FUNC_0(FUNC_1(VAR_2));
 int VAR_6;

 FUNC_3(VAR_5->sw_cipher, VAR_0);
 FUNC_5(VAR_5->sw_cipher, FUNC_4(VAR_2) &
         VAR_0);
 VAR_6 = FUNC_6(VAR_5->sw_cipher, VAR_3, VAR_4);
 FUNC_3(VAR_2, VAR_1);
 FUNC_5(VAR_2, FUNC_4(VAR_5->sw_cipher) &
         VAR_1);
 if (VAR_6)
  return VAR_6;
 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
