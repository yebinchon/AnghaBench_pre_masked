
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {struct crypto_skcipher* skcipher; } ;
struct essiv_tfm_ctx {int essiv_cipher; int hash; TYPE_1__ u; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_6__ {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int const*,unsigned int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct crypto_skcipher*,int) ;
 struct essiv_tfm_ctx* FUNC_8 (struct crypto_skcipher*) ;
 int FUNC_9 (struct crypto_skcipher*) ;
 int FUNC_10 (struct crypto_skcipher*,int) ;
 int FUNC_11 (struct crypto_skcipher*,int const*,unsigned int) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_12(struct crypto_skcipher *VAR_4,
     const u8 *VAR_5, unsigned int VAR_6)
{
 struct essiv_tfm_ctx *VAR_7 = FUNC_8(VAR_4);
 FUNC_0(VAR_3, VAR_7->hash);
 u8 VAR_8[VAR_2];
 int VAR_9;

 FUNC_7(VAR_7->u.skcipher, VAR_0);
 FUNC_10(VAR_7->u.skcipher,
      FUNC_9(VAR_4) &
      VAR_0);
 VAR_9 = FUNC_11(VAR_7->u.skcipher, VAR_5, VAR_6);
 FUNC_10(VAR_4,
      FUNC_9(VAR_7->u.skcipher) &
      VAR_1);
 if (VAR_9)
  return VAR_9;

 VAR_3->tfm = VAR_7->hash;
 VAR_9 = FUNC_5(VAR_3, VAR_5, VAR_6, VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_7->essiv_cipher, VAR_0);
 FUNC_3(VAR_7->essiv_cipher,
    FUNC_9(VAR_4) &
    VAR_0);
 VAR_9 = FUNC_4(VAR_7->essiv_cipher, VAR_8,
       FUNC_6(VAR_7->hash));
 FUNC_10(VAR_4,
      FUNC_2(VAR_7->essiv_cipher) &
      VAR_1);

 return VAR_9;
}
