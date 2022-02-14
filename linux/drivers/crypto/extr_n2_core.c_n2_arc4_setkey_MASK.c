
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* arc4; } ;
struct n2_cipher_context {int enc_type; TYPE_1__ key; } ;
struct n2_cipher_alg {int enc_type; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 struct crypto_tfm* FUNC_0 (struct crypto_ablkcipher*) ;
 struct n2_cipher_context* FUNC_1 (struct crypto_tfm*) ;
 struct n2_cipher_alg* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_3(struct crypto_ablkcipher *VAR_0, const u8 *VAR_1,
     unsigned int VAR_2)
{
 struct crypto_tfm *VAR_3 = FUNC_0(VAR_0);
 struct n2_cipher_context *VAR_4 = FUNC_1(VAR_3);
 struct n2_cipher_alg *VAR_5 = FUNC_2(VAR_3);
 u8 *VAR_6 = VAR_4->key.arc4;
 u8 *VAR_7 = VAR_6 + 256;
 u8 *VAR_8 = VAR_7 + 1;
 int VAR_9, VAR_10, VAR_11;

 VAR_4->enc_type = VAR_5->enc_type;

 VAR_10 = VAR_11 = 0;
 *VAR_7 = 0;
 *VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < 256; VAR_9++)
  VAR_6[VAR_9] = VAR_9;
 for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
  u8 VAR_12 = VAR_6[VAR_9];
  VAR_10 = (VAR_10 + VAR_1[VAR_11] + VAR_12) & 0xff;
  VAR_6[VAR_9] = VAR_6[VAR_10];
  VAR_6[VAR_10] = VAR_12;
  if (++VAR_11 >= VAR_2)
   VAR_11 = 0;
 }

 return 0;
}
