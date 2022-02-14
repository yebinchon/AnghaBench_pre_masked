
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s390_aes_ctx {unsigned int key_len; int key; int fc; } ;
struct crypto_aead {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct s390_aes_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_4, const u8 *VAR_5,
     unsigned int VAR_6)
{
 struct s390_aes_ctx *VAR_7 = FUNC_0(VAR_4);

 switch (VAR_6) {
 case 130:
  VAR_7->fc = VAR_0;
  break;
 case 129:
  VAR_7->fc = VAR_1;
  break;
 case 128:
  VAR_7->fc = VAR_2;
  break;
 default:
  return -VAR_3;
 }

 FUNC_1(VAR_7->key, VAR_5, VAR_6);
 VAR_7->key_len = VAR_6;
 return 0;
}
