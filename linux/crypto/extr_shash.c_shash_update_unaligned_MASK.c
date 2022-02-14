
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubuf ;
typedef int const u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int (* update ) (struct shash_desc*,int const*,unsigned int) ;} ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (int const*,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 struct shash_alg* FUNC_2 (struct crypto_shash*) ;
 unsigned long FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (int const*,int const*,unsigned int) ;
 int FUNC_5 (int const*,int ,unsigned int) ;
 int FUNC_6 (struct shash_desc*,int const*,unsigned int) ;
 int FUNC_7 (struct shash_desc*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_2, const u8 *VAR_3,
      unsigned int VAR_4)
{
 struct crypto_shash *VAR_5 = VAR_2->tfm;
 struct shash_alg *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8 = VAR_7 + 1 -
         ((unsigned long)VAR_3 & VAR_7);




 u8 VAR_9[VAR_1 * 2];
 u8 *VAR_10 = FUNC_0(&VAR_9[0], VAR_7 + 1);
 int VAR_11;

 if (FUNC_1(VAR_10 + VAR_8 > VAR_9 + sizeof(VAR_9)))
  return -VAR_0;

 if (VAR_8 > VAR_4)
  VAR_8 = VAR_4;

 FUNC_4(VAR_10, VAR_3, VAR_8);
 VAR_11 = VAR_6->update(VAR_2, VAR_10, VAR_8);
 FUNC_5(VAR_10, 0, VAR_8);

 return VAR_11 ?:
        VAR_6->update(VAR_2, VAR_3 + VAR_8, VAR_4 - VAR_8);
}
