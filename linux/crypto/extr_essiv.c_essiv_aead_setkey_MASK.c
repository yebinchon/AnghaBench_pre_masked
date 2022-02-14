
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {struct crypto_aead* aead; } ;
struct essiv_tfm_ctx {int essiv_cipher; int hash; TYPE_1__ u; } ;
struct crypto_authenc_keys {int authkeylen; int authkey; int enckeylen; int enckey; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_8__ {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct crypto_aead*,int) ;
 struct essiv_tfm_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aead*,int) ;
 int FUNC_5 (struct crypto_aead*,int const*,unsigned int) ;
 scalar_t__ FUNC_6 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ,int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ,int ) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static int FUNC_15(struct crypto_aead *VAR_6, const u8 *VAR_7,
        unsigned int VAR_8)
{
 struct essiv_tfm_ctx *VAR_9 = FUNC_2(VAR_6);
 FUNC_0(VAR_5, VAR_9->hash);
 struct crypto_authenc_keys VAR_10;
 u8 VAR_11[VAR_4];
 int VAR_12;

 FUNC_1(VAR_9->u.aead, VAR_0);
 FUNC_4(VAR_9->u.aead, FUNC_3(VAR_6) &
         VAR_0);
 VAR_12 = FUNC_5(VAR_9->u.aead, VAR_7, VAR_8);
 FUNC_4(VAR_6, FUNC_3(VAR_9->u.aead) &
       VAR_2);
 if (VAR_12)
  return VAR_12;

 if (FUNC_6(&VAR_10, VAR_7, VAR_8) != 0) {
  FUNC_4(VAR_6, VAR_1);
  return -VAR_3;
 }

 VAR_5->tfm = VAR_9->hash;
 VAR_12 = FUNC_13(VAR_5) ?:
       FUNC_14(VAR_5, VAR_10.enckey, VAR_10.enckeylen) ?:
       FUNC_12(VAR_5, VAR_10.authkey, VAR_10.authkeylen, VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_7(VAR_9->essiv_cipher, VAR_0);
 FUNC_9(VAR_9->essiv_cipher, FUNC_3(VAR_6) &
          VAR_0);
 VAR_12 = FUNC_10(VAR_9->essiv_cipher, VAR_11,
       FUNC_11(VAR_9->hash));
 FUNC_4(VAR_6, FUNC_8(VAR_9->essiv_cipher) &
       VAR_2);

 return VAR_12;
}
