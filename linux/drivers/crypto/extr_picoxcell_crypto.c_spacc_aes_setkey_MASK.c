
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spacc_ablk_ctx {unsigned int key_len; int key; int sw_cipher; } ;
struct crypto_tfm {int crt_flags; } ;
struct TYPE_2__ {int crt_flags; } ;
struct crypto_ablkcipher {TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int const*,unsigned int) ;
 struct spacc_ablk_ctx* FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct crypto_ablkcipher *VAR_7, const u8 *VAR_8,
       unsigned int VAR_9)
{
 struct crypto_tfm *VAR_10 = FUNC_1(VAR_7);
 struct spacc_ablk_ctx *VAR_11 = FUNC_6(VAR_10);
 int VAR_12 = 0;

 if (VAR_9 > VAR_2) {
  FUNC_0(VAR_7, VAR_4);
  return -VAR_6;
 }






 if (VAR_9 != VAR_0 && VAR_9 != VAR_1) {
  if (!VAR_11->sw_cipher)
   return -VAR_6;





  FUNC_2(VAR_11->sw_cipher,
         VAR_3);
  FUNC_4(VAR_11->sw_cipher,
       VAR_7->base.crt_flags &
       VAR_3);

  VAR_12 = FUNC_5(VAR_11->sw_cipher, VAR_8, VAR_9);

  VAR_10->crt_flags &= ~VAR_5;
  VAR_10->crt_flags |=
   FUNC_3(VAR_11->sw_cipher) &
   VAR_5;

  if (VAR_12)
   goto sw_setkey_failed;
 }

 FUNC_7(VAR_11->key, VAR_8, VAR_9);
 VAR_11->key_len = VAR_9;

sw_setkey_failed:
 return VAR_12;
}
