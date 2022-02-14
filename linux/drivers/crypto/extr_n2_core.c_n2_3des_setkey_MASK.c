
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int des3; } ;
struct n2_cipher_context {unsigned int key_len; TYPE_1__ key; int enc_type; } ;
struct n2_cipher_alg {int enc_type; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 struct crypto_tfm* FUNC_0 (struct crypto_ablkcipher*) ;
 struct n2_cipher_context* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 struct n2_cipher_alg* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (struct crypto_ablkcipher*,int const*) ;

__attribute__((used)) static int FUNC_5(struct crypto_ablkcipher *VAR_0, const u8 *VAR_1,
     unsigned int VAR_2)
{
 struct crypto_tfm *VAR_3 = FUNC_0(VAR_0);
 struct n2_cipher_context *VAR_4 = FUNC_1(VAR_3);
 struct n2_cipher_alg *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_0, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_4->enc_type = VAR_5->enc_type;

 VAR_4->key_len = VAR_2;
 FUNC_2(VAR_4->key.des3, VAR_1, VAR_2);
 return 0;
}
