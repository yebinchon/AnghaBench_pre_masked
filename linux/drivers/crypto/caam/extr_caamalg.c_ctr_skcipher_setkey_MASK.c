
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct crypto_skcipher*,int ) ;
 int FUNC_2 (struct crypto_skcipher*,int const*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_skcipher *VAR_1,
          const u8 *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;
 int VAR_5;






 VAR_4 = 16;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_1,
       VAR_0);
  return VAR_5;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
