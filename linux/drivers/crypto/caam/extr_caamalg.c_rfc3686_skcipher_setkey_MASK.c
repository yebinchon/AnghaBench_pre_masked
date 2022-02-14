
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct crypto_skcipher*,int ) ;
 int FUNC_2 (struct crypto_skcipher*,int const*,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct crypto_skcipher *VAR_2,
       const u8 *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;
 int VAR_6;






 VAR_5 = 16 + VAR_1;
 VAR_4 -= VAR_1;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_2,
       VAR_0);
  return VAR_6;
 }

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
