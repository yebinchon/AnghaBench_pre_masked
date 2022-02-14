
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p8_aes_xts_ctx {int fallback; int dec_key; int enc_key; int tweak_key; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,unsigned int,int *) ;
 int FUNC_1 (int const*,unsigned int,int *) ;
 struct p8_aes_xts_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (int ,int const*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct crypto_skcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct crypto_skcipher *VAR_1, const u8 *VAR_2,
        unsigned int VAR_3)
{
 struct p8_aes_xts_ctx *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_10(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_8();
 FUNC_6();
 FUNC_5();
 VAR_5 = FUNC_1(VAR_2 + VAR_3/2, (VAR_3/2) * 8, &VAR_4->tweak_key);
 VAR_5 |= FUNC_1(VAR_2, (VAR_3/2) * 8, &VAR_4->enc_key);
 VAR_5 |= FUNC_0(VAR_2, (VAR_3/2) * 8, &VAR_4->dec_key);
 FUNC_4();
 FUNC_7();
 FUNC_9();

 VAR_5 |= FUNC_3(VAR_4->fallback, VAR_2, VAR_3);

 return VAR_5 ? -VAR_0 : 0;
}
