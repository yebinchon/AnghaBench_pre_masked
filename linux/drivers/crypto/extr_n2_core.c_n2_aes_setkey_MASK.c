
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int aes; } ;
struct n2_cipher_context {int enc_type; unsigned int key_len; TYPE_1__ key; } ;
struct n2_cipher_alg {int enc_type; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 struct n2_cipher_context* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int const*,unsigned int) ;
 struct n2_cipher_alg* FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_5(struct crypto_ablkcipher *VAR_6, const u8 *VAR_7,
    unsigned int VAR_8)
{
 struct crypto_tfm *VAR_9 = FUNC_1(VAR_6);
 struct n2_cipher_context *VAR_10 = FUNC_2(VAR_9);
 struct n2_cipher_alg *VAR_11 = FUNC_4(VAR_9);

 VAR_10->enc_type = (VAR_11->enc_type & VAR_5);

 switch (VAR_8) {
 case 130:
  VAR_10->enc_type |= VAR_2;
  break;
 case 129:
  VAR_10->enc_type |= VAR_3;
  break;
 case 128:
  VAR_10->enc_type |= VAR_4;
  break;
 default:
  FUNC_0(VAR_6, VAR_0);
  return -VAR_1;
 }

 VAR_10->key_len = VAR_8;
 FUNC_3(VAR_10->key.aes, VAR_7, VAR_8);
 return 0;
}
