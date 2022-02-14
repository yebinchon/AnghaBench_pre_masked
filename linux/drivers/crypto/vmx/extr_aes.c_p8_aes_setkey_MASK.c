
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p8_aes_ctx {int fallback; int dec_key; int enc_key; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,unsigned int,int *) ;
 int FUNC_1 (int const*,unsigned int,int *) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 struct p8_aes_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct crypto_tfm *VAR_1, const u8 *VAR_2,
    unsigned int VAR_3)
{
 int VAR_4;
 struct p8_aes_ctx *VAR_5 = FUNC_3(VAR_1);

 FUNC_8();
 FUNC_6();
 FUNC_5();
 VAR_4 = FUNC_1(VAR_2, VAR_3 * 8, &VAR_5->enc_key);
 VAR_4 |= FUNC_0(VAR_2, VAR_3 * 8, &VAR_5->dec_key);
 FUNC_4();
 FUNC_7();
 FUNC_9();

 VAR_4 |= FUNC_2(VAR_5->fallback, VAR_2, VAR_3);

 return VAR_4 ? -VAR_0 : 0;
}
