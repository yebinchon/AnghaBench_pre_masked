
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2_hash_req_ctx {int dummy; } ;
struct n2_hash_ctx {struct crypto_ahash* fallback_tfm; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct crypto_tfm*) ;
 struct n2_hash_ctx* FUNC_3 (struct crypto_ahash*) ;
 scalar_t__ FUNC_4 (struct crypto_ahash*) ;
 int FUNC_5 (struct crypto_ahash*,scalar_t__) ;
 struct crypto_ahash* FUNC_6 (char const*,int ,int ) ;
 char* FUNC_7 (struct crypto_tfm*) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static int FUNC_9(struct crypto_tfm *VAR_1)
{
 const char *VAR_2 = FUNC_7(VAR_1);
 struct crypto_ahash *VAR_3 = FUNC_2(VAR_1);
 struct n2_hash_ctx *VAR_4 = FUNC_3(VAR_3);
 struct crypto_ahash *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_2, 0,
       VAR_0);
 if (FUNC_0(VAR_5)) {
  FUNC_8("Fallback driver '%s' could not be loaded!\n",
      VAR_2);
  VAR_6 = FUNC_1(VAR_5);
  goto out;
 }

 FUNC_5(VAR_3, (sizeof(struct n2_hash_req_ctx) +
      FUNC_4(VAR_5)));

 VAR_4->fallback_tfm = VAR_5;
 return 0;

out:
 return VAR_6;
}
