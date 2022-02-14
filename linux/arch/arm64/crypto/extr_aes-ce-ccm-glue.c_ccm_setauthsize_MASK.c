
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct crypto_aead *VAR_1, unsigned int VAR_2)
{
 if ((VAR_2 & 1) || VAR_2 < 4)
  return -VAR_0;
 return 0;
}
