
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
typedef enum sec_cipher_alg { ____Placeholder_sec_cipher_alg } sec_cipher_alg ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_skcipher*,int const*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct crypto_skcipher *VAR_4,
        const u8 *VAR_5, unsigned int VAR_6)
{
 enum sec_cipher_alg VAR_7;

 switch (VAR_6) {
 case 130:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
}
