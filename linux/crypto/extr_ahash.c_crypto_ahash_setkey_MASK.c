
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ahash {int (* setkey ) (struct crypto_ahash*,int const*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*,int const*,unsigned int) ;
 unsigned long FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct crypto_ahash*,int ) ;
 int FUNC_4 (struct crypto_ahash*,int const*,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct crypto_ahash *VAR_1, const u8 *VAR_2,
   unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if ((unsigned long)VAR_2 & VAR_4)
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  VAR_5 = VAR_1->setkey(VAR_1, VAR_2, VAR_3);

 if (FUNC_5(VAR_5)) {
  FUNC_0(VAR_1);
  return VAR_5;
 }

 FUNC_3(VAR_1, VAR_0);
 return 0;
}
