
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_shash {int dummy; } ;
struct artpec6_hashalg_context {struct crypto_shash* child_hash; } ;
struct artpec6_hash_request_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int) ;
 struct crypto_shash* FUNC_4 (char const*,int ,int ) ;
 struct artpec6_hashalg_context* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (struct artpec6_hashalg_context*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_1,
        const char *VAR_2)
{
 struct artpec6_hashalg_context *VAR_3 = FUNC_5(VAR_1);

 FUNC_3(FUNC_2(VAR_1),
     sizeof(struct artpec6_hash_request_context));
 FUNC_6(VAR_3, 0, sizeof(*VAR_3));

 if (VAR_2) {
  struct crypto_shash *VAR_4;

  VAR_4 = FUNC_4(VAR_2, 0,
        VAR_0);

  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);

  VAR_3->child_hash = VAR_4;
 }

 return 0;
}
