
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_ablkcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct crypto_ablkcipher *VAR_4, const u8 *VAR_5,
     unsigned int VAR_6)
{
 if (VAR_6 != VAR_0 && VAR_6 != VAR_1 &&
     VAR_6 != VAR_2)
  return -VAR_3;
 else
  return FUNC_0(VAR_4, VAR_5, VAR_6);
}
