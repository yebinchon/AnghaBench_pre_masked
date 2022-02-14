
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubuf ;
typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int (* final ) (struct shash_desc*,int *) ;} ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 struct shash_alg* FUNC_2 (struct crypto_shash*) ;
 unsigned long FUNC_3 (struct crypto_shash*) ;
 unsigned int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 int FUNC_7 (struct shash_desc*,int *) ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_3, u8 *VAR_4)
{
 struct crypto_shash *VAR_5 = VAR_3->tfm;
 unsigned long VAR_6 = FUNC_3(VAR_5);
 struct shash_alg *VAR_7 = FUNC_2(VAR_5);
 unsigned int VAR_8 = FUNC_4(VAR_5);




 u8 VAR_9[VAR_2 + VAR_1];
 u8 *VAR_10 = FUNC_0(&VAR_9[0], VAR_6 + 1);
 int VAR_11;

 if (FUNC_1(VAR_10 + VAR_8 > VAR_9 + sizeof(VAR_9)))
  return -VAR_0;

 VAR_11 = VAR_7->final(VAR_3, VAR_10);
 if (VAR_11)
  goto out;

 FUNC_5(VAR_4, VAR_10, VAR_8);

out:
 FUNC_6(VAR_10, 0, VAR_8);
 return VAR_11;
}
