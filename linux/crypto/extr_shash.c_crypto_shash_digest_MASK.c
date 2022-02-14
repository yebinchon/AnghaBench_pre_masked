
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int (* digest ) (struct shash_desc*,int const*,unsigned int,int *) ;} ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct shash_alg* FUNC_0 (struct crypto_shash*) ;
 unsigned long FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*) ;
 int FUNC_3 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_4 (struct shash_desc*,int const*,unsigned int,int *) ;

int FUNC_5(struct shash_desc *VAR_2, const u8 *VAR_3,
   unsigned int VAR_4, u8 *VAR_5)
{
 struct crypto_shash *VAR_6 = VAR_2->tfm;
 struct shash_alg *VAR_7 = FUNC_0(VAR_6);
 unsigned long VAR_8 = FUNC_1(VAR_6);

 if (FUNC_2(VAR_6) & VAR_0)
  return -VAR_1;

 if (((unsigned long)VAR_3 | (unsigned long)VAR_5) & VAR_8)
  return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_7->digest(VAR_2, VAR_3, VAR_4, VAR_5);
}
