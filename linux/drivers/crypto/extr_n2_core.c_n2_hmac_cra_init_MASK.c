
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct crypto_shash* fallback_tfm; } ;
struct n2_hmac_ctx {TYPE_1__ base; struct crypto_shash* child_shash; } ;
struct n2_hmac_alg {char const* child_alg; } ;
struct n2_hash_req_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_shash {int dummy; } ;
typedef struct crypto_shash crypto_ahash ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (struct crypto_tfm*) ;
 struct n2_hmac_ctx* FUNC_3 (struct crypto_shash*) ;
 scalar_t__ FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (struct crypto_shash*,scalar_t__) ;
 struct crypto_shash* FUNC_6 (char const*,int ,int ) ;
 struct crypto_shash* FUNC_7 (char const*,int ,int ) ;
 int FUNC_8 (struct crypto_shash*) ;
 char* FUNC_9 (struct crypto_tfm*) ;
 struct n2_hmac_alg* FUNC_10 (struct crypto_tfm*) ;
 int FUNC_11 (char*,char const*) ;

__attribute__((used)) static int FUNC_12(struct crypto_tfm *VAR_1)
{
 const char *VAR_2 = FUNC_9(VAR_1);
 struct crypto_ahash *VAR_3 = FUNC_2(VAR_1);
 struct n2_hmac_ctx *VAR_4 = FUNC_3(VAR_3);
 struct n2_hmac_alg *VAR_5 = FUNC_10(VAR_1);
 struct crypto_ahash *VAR_6;
 struct crypto_shash *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(VAR_2, 0,
       VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_11("Fallback driver '%s' could not be loaded!\n",
      VAR_2);
  VAR_8 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_7 = FUNC_7(VAR_5->child_alg, 0, 0);
 if (FUNC_0(VAR_7)) {
  FUNC_11("Child shash '%s' could not be loaded!\n",
      VAR_5->child_alg);
  VAR_8 = FUNC_1(VAR_7);
  goto out_free_fallback;
 }

 FUNC_5(VAR_3, (sizeof(struct n2_hash_req_ctx) +
      FUNC_4(VAR_6)));

 VAR_4->child_shash = VAR_7;
 VAR_4->base.fallback_tfm = VAR_6;
 return 0;

out_free_fallback:
 FUNC_8(VAR_6);

out:
 return VAR_8;
}
