
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
struct crypto_ablkcipher {int dummy; } ;
struct ablk_ctx {unsigned int enckey_len; int ciph_mode; int key_ctx_hdr; int key; } ;


 struct ablk_ctx* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int ,int ,int ,unsigned int) ;
 unsigned int VAR_4 ;
 int FUNC_2 (struct crypto_ablkcipher*) ;
 int FUNC_3 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct crypto_ablkcipher*,int ) ;
 int FUNC_6 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_ablkcipher *VAR_5,
       const u8 *VAR_6,
       unsigned int VAR_7)
{
 struct ablk_ctx *VAR_8 = FUNC_0(FUNC_2(VAR_5));
 unsigned int VAR_9, VAR_10;
 u16 VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (VAR_12)
  goto badkey_err;
 VAR_9 = FUNC_4(VAR_7);
 VAR_11 = (VAR_9 == VAR_0) ? 8 : 0;
 FUNC_6(VAR_8->key, VAR_6, VAR_7);
 VAR_8->enckey_len = VAR_7;
 VAR_10 = (VAR_4 +
   VAR_7 + VAR_11) >> 4;

 VAR_8->key_ctx_hdr = FUNC_1(VAR_9, VAR_1,
      0, 0, VAR_10);
 VAR_8->ciph_mode = VAR_2;

 return 0;
badkey_err:
 FUNC_5(VAR_5, VAR_3);
 VAR_8->enckey_len = 0;

 return VAR_12;
}
