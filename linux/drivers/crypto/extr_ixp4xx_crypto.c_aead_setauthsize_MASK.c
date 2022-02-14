
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aead*,unsigned int) ;
 int FUNC_1 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1) >> 2;

 if ((VAR_2>>2) < 1 || (VAR_2>>2) > VAR_3 || (VAR_2 & 3))
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
