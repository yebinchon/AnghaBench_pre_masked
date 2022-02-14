
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_alg {int (* setkey ) (struct crypto_shash*,int const*,unsigned int) ;} ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 struct shash_alg* FUNC_0 (struct crypto_shash*) ;
 unsigned long FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*,int ) ;
 int FUNC_3 (struct crypto_shash*,struct shash_alg*) ;
 int FUNC_4 (struct crypto_shash*,int const*,unsigned int) ;
 int FUNC_5 (struct crypto_shash*,int const*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct crypto_shash *VAR_1, const u8 *VAR_2,
   unsigned int VAR_3)
{
 struct shash_alg *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 if ((unsigned long)VAR_2 & VAR_5)
  VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3);
 else
  VAR_6 = VAR_4->setkey(VAR_1, VAR_2, VAR_3);

 if (FUNC_6(VAR_6)) {
  FUNC_3(VAR_1, VAR_4);
  return VAR_6;
 }

 FUNC_2(VAR_1, VAR_0);
 return 0;
}
