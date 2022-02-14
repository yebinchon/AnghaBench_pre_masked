
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aead*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct crypto_aead *VAR_1,
          unsigned int VAR_2)
{
 switch (VAR_2) {
 case 8:
 case 12:
 case 16:
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_1, VAR_2);
}
