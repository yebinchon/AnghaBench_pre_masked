
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct ablk_ctx {unsigned int enckey_len; int ciph_mode; int key_ctx_hdr; int key; int rrkey; } ;


 struct ablk_ctx* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,int ,unsigned short) ;
 unsigned int VAR_6 ;
 int FUNC_2 (struct crypto_ablkcipher*) ;
 int FUNC_3 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 int FUNC_4 (struct crypto_ablkcipher*,int ) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_ablkcipher *VAR_7, const u8 *VAR_8,
          unsigned int VAR_9)
{
 struct ablk_ctx *VAR_10 = FUNC_0(FUNC_2(VAR_7));
 unsigned short VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_9);
 if (VAR_12)
  goto badkey_err;

 FUNC_6(VAR_10->key, VAR_8, VAR_9);
 VAR_10->enckey_len = VAR_9;
 FUNC_5(VAR_10->rrkey, VAR_10->key, VAR_9 << 2);
 VAR_11 = (VAR_6 + VAR_9) >> 4;
 VAR_10->key_ctx_hdr =
  FUNC_1((VAR_9 == VAR_0) ?
     VAR_1 :
     VAR_2,
     VAR_3, 1,
     0, VAR_11);
 VAR_10->ciph_mode = VAR_4;
 return 0;
badkey_err:
 FUNC_4(VAR_7, VAR_5);
 VAR_10->enckey_len = 0;

 return VAR_12;
}
