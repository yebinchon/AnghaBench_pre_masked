
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {struct crypto_ahash* fallback_tfm; } ;
struct n2_hmac_ctx {unsigned int hash_key_len; int hash_key; TYPE_1__ base; struct crypto_shash* child_shash; } ;
struct crypto_shash {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_6__ {struct crypto_shash* tfm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,struct crypto_shash*) ;
 struct n2_hmac_ctx* FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct crypto_ahash*,int const*,unsigned int) ;
 int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (TYPE_2__*,int const*,unsigned int,int ) ;
 int FUNC_6 (struct crypto_shash*) ;
 int FUNC_7 (int ,int const*,unsigned int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_8(struct crypto_ahash *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4)
{
 struct n2_hmac_ctx *VAR_5 = FUNC_2(VAR_2);
 struct crypto_shash *VAR_6 = VAR_5->child_shash;
 struct crypto_ahash *VAR_7;
 FUNC_1(VAR_1, VAR_6);
 int VAR_8, VAR_9, VAR_10;

 VAR_7 = VAR_5->base.fallback_tfm;
 VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_1->tfm = VAR_6;

 VAR_9 = FUNC_4(VAR_6);
 VAR_10 = FUNC_6(VAR_6);
 FUNC_0(VAR_10 > VAR_0);
 if (VAR_4 > VAR_9) {
  VAR_8 = FUNC_5(VAR_1, VAR_3, VAR_4,
       VAR_5->hash_key);
  if (VAR_8)
   return VAR_8;
  VAR_4 = VAR_10;
 } else if (VAR_4 <= VAR_0)
  FUNC_7(VAR_5->hash_key, VAR_3, VAR_4);

 VAR_5->hash_key_len = VAR_4;

 return VAR_8;
}
