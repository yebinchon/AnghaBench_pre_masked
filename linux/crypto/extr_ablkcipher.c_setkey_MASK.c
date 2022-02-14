
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_alg {unsigned int min_keysize; unsigned int max_keysize; int (* setkey ) (struct crypto_ablkcipher*,int const*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ablkcipher_alg* FUNC_0 (struct crypto_ablkcipher*) ;
 unsigned long FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*,int ) ;
 int FUNC_3 (struct crypto_ablkcipher*,int const*,unsigned int) ;
 int FUNC_4 (struct crypto_ablkcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct crypto_ablkcipher *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4)
{
 struct ablkcipher_alg *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6 = FUNC_1(VAR_2);

 if (VAR_4 < VAR_5->min_keysize || VAR_4 > VAR_5->max_keysize) {
  FUNC_2(VAR_2, VAR_0);
  return -VAR_1;
 }

 if ((unsigned long)VAR_3 & VAR_6)
  return FUNC_3(VAR_2, VAR_3, VAR_4);

 return VAR_5->setkey(VAR_2, VAR_3, VAR_4);
}
