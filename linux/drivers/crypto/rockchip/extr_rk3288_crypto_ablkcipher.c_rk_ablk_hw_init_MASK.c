
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rk_crypto_info {scalar_t__ reg; int async_req; } ;
struct rk_cipher_ctx {int mode; scalar_t__ keylen; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rk_crypto_info*,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 struct ablkcipher_request* FUNC_1 (int ) ;
 struct rk_cipher_ctx* FUNC_2 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_3 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_4 (struct ablkcipher_request*) ;
 struct crypto_tfm* FUNC_5 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct rk_crypto_info *VAR_23)
{
 struct ablkcipher_request *VAR_24 =
  FUNC_1(VAR_23->async_req);
 struct crypto_ablkcipher *VAR_25 = FUNC_4(VAR_24);
 struct crypto_tfm *VAR_26 = FUNC_5(VAR_25);
 struct rk_cipher_ctx *VAR_27 = FUNC_2(VAR_25);
 u32 VAR_28, VAR_29, VAR_30 = 0;

 VAR_29 = FUNC_6(VAR_26);
 VAR_28 = FUNC_3(VAR_25);

 if (VAR_29 == VAR_2) {
  VAR_27->mode |= VAR_21 |
        VAR_19 |
        VAR_18;
  FUNC_0(VAR_23, VAR_20, VAR_27->mode);
  FUNC_7(VAR_23->reg + VAR_22, VAR_24->info, VAR_28);
  VAR_30 = VAR_16;
 } else {
  VAR_27->mode |= VAR_8 |
        VAR_10 |
        VAR_6 |
        VAR_5;
  if (VAR_27->keylen == VAR_0)
   VAR_27->mode |= VAR_3;
  else if (VAR_27->keylen == VAR_1)
   VAR_27->mode |= VAR_4;
  FUNC_0(VAR_23, VAR_7, VAR_27->mode);
  FUNC_7(VAR_23->reg + VAR_9, VAR_24->info, VAR_28);
 }
 VAR_30 |= VAR_14 |
      VAR_13;
 FUNC_0(VAR_23, VAR_15, VAR_30);
 FUNC_0(VAR_23, VAR_17,
       VAR_12 | VAR_11);
}
