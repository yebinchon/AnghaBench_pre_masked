
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct artpec6_cryptotfm_context {unsigned int key_length; int aes_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct artpec6_cryptotfm_context* FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*,int ) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct crypto_skcipher *VAR_2, const u8 *VAR_3,
         unsigned int VAR_4)
{
 struct artpec6_cryptotfm_context *VAR_5 =
  FUNC_0(VAR_2);

 switch (VAR_4) {
 case 16:
 case 24:
 case 32:
  break;
 default:
  FUNC_1(VAR_2,
       VAR_0);
  return -VAR_1;
 }

 FUNC_2(VAR_5->aes_key, VAR_3, VAR_4);
 VAR_5->key_length = VAR_4;
 return 0;
}
