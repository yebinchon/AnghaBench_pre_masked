
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct artpec6_hashalg_context {scalar_t__ hmac_key_length; int hmac_key; scalar_t__ child_hash; } ;


 int FUNC_0 (scalar_t__) ;
 struct artpec6_hashalg_context* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct artpec6_hashalg_context *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->child_hash)
  FUNC_0(VAR_1->child_hash);

 FUNC_2(VAR_1->hmac_key, 0, sizeof(VAR_1->hmac_key));
 VAR_1->hmac_key_length = 0;
}
