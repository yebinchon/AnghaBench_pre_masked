
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
 int VAR_4 ;
 int FUNC_0 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 int FUNC_1 (struct crypto_ablkcipher*,int ) ;

__attribute__((used)) static int FUNC_2(struct crypto_ablkcipher *VAR_5,
      const u8 *VAR_6, unsigned int VAR_7)
{
 if (VAR_7 == VAR_0 || VAR_7 == VAR_1 ||
     VAR_7 == VAR_2)
  return FUNC_0(VAR_5, VAR_6, VAR_7);

 FUNC_1(VAR_5, VAR_3);

 return -VAR_4;
}
