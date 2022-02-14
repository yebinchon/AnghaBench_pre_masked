
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p8_aes_ctr_ctx {int fallback; int enc_key; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,unsigned int,int *) ;
 struct p8_aes_ctr_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct crypto_skcipher *VAR_1, const u8 *VAR_2,
        unsigned int VAR_3)
{
 struct p8_aes_ctr_ctx *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 FUNC_7();
 FUNC_5();
 FUNC_4();
 VAR_5 = FUNC_0(VAR_2, VAR_3 * 8, &VAR_4->enc_key);
 FUNC_3();
 FUNC_6();
 FUNC_8();

 VAR_5 |= FUNC_2(VAR_4->fallback, VAR_2, VAR_3);

 return VAR_5 ? -VAR_0 : 0;
}
