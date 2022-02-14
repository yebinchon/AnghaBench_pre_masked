
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int base; } ;
struct artpec6_cryptotfm_context {unsigned int key_length; int aes_key; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aead*,int ) ;
 struct artpec6_cryptotfm_context* FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_1, const u8 *VAR_2,
          unsigned int VAR_3)
{
 struct artpec6_cryptotfm_context *VAR_4 = FUNC_1(&VAR_1->base);

 if (VAR_3 != 16 && VAR_3 != 24 && VAR_3 != 32) {
  FUNC_0(VAR_1, VAR_0);
  return -1;
 }

 VAR_4->key_length = VAR_3;

 FUNC_2(VAR_4->aes_key, VAR_2, VAR_3);
 return 0;
}
