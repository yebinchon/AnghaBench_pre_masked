
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_skcipher*,int ) ;
 int FUNC_1 (struct crypto_skcipher*,int const*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct crypto_skcipher *VAR_3,
        const u8 *VAR_4, unsigned int VAR_5)
{
 if (VAR_5 != VAR_0) {
  FUNC_0(VAR_3,
       VAR_1);
  return -VAR_2;
 }

 return FUNC_1(VAR_3, VAR_4, VAR_5, 0);
}
