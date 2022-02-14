
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct crypto_skcipher*,int,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_skcipher *VAR_2, const u8 *VAR_3,
        unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2, VAR_0);
  return -VAR_1;
 }
 return FUNC_2(VAR_2, VAR_5, VAR_3, VAR_4);
}
