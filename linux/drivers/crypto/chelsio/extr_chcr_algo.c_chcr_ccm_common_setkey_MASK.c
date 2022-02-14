
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {unsigned int enckey_len; int key; int key_ctx_hdr; } ;
struct _key_ctx {int dummy; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (unsigned char,unsigned char,int ,int ,int) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_tfm*,int ) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct crypto_aead *VAR_11,
    const u8 *VAR_12,
    unsigned int VAR_13)
{
 struct chcr_aead_ctx *VAR_14 = FUNC_0(FUNC_2(VAR_11));
 unsigned char VAR_15, VAR_16;
 int VAR_17 = 0;

 VAR_17 = sizeof(struct _key_ctx) + FUNC_5(VAR_13, 16) * 2;
 if (VAR_13 == VAR_0) {
  VAR_15 = VAR_3;
  VAR_16 = VAR_6;
 } else if (VAR_13 == VAR_1) {
  VAR_15 = VAR_4;
  VAR_16 = VAR_7;
 } else if (VAR_13 == VAR_2) {
  VAR_15 = VAR_5;
  VAR_16 = VAR_8;
 } else {
  FUNC_3((struct crypto_tfm *)VAR_11,
         VAR_9);
  VAR_14->enckey_len = 0;
  return -VAR_10;
 }
 VAR_14->key_ctx_hdr = FUNC_1(VAR_15, VAR_16, 0, 0,
      VAR_17 >> 4);
 FUNC_4(VAR_14->key, VAR_12, VAR_13);
 VAR_14->enckey_len = VAR_13;

 return 0;
}
