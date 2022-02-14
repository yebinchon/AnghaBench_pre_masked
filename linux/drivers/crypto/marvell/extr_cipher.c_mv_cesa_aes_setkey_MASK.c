
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int key_length; int * key_enc; int * key_dec; } ;
struct mv_cesa_aes_ctx {TYPE_1__ aes; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int const*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_skcipher*,int ) ;
 struct crypto_tfm* FUNC_3 (struct crypto_skcipher*) ;
 struct mv_cesa_aes_ctx* FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_5(struct crypto_skcipher *VAR_1, const u8 *VAR_2,
         unsigned int VAR_3)
{
 struct crypto_tfm *VAR_4 = FUNC_3(VAR_1);
 struct mv_cesa_aes_ctx *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(&VAR_5->aes, VAR_2, VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_1, VAR_0);
  return VAR_8;
 }

 VAR_6 = (VAR_5->aes.key_length - 16) / 4;
 VAR_7 = VAR_5->aes.key_length + 24 - VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_5->aes.key_dec[4 + VAR_9] =
   FUNC_1(VAR_5->aes.key_enc[VAR_7 + VAR_9]);

 return 0;
}
