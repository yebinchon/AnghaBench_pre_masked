
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_alg {unsigned int min_keysize; unsigned int max_keysize; int (* setkey ) (struct crypto_skcipher*,int const*,unsigned int) ;} ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct skcipher_alg* FUNC_0 (struct crypto_skcipher*) ;
 unsigned long FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*,int ) ;
 int FUNC_3 (struct crypto_skcipher*,int ) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct crypto_skcipher*,int const*,unsigned int) ;
 int FUNC_6 (struct crypto_skcipher*,int const*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct crypto_skcipher *VAR_3, const u8 *VAR_4,
      unsigned int VAR_5)
{
 struct skcipher_alg *VAR_6 = FUNC_0(VAR_3);
 unsigned long VAR_7 = FUNC_1(VAR_3);
 int VAR_8;

 if (VAR_5 < VAR_6->min_keysize || VAR_5 > VAR_6->max_keysize) {
  FUNC_3(VAR_3, VAR_1);
  return -VAR_2;
 }

 if ((unsigned long)VAR_4 & VAR_7)
  VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5);
 else
  VAR_8 = VAR_6->setkey(VAR_3, VAR_4, VAR_5);

 if (FUNC_7(VAR_8)) {
  FUNC_4(VAR_3);
  return VAR_8;
 }

 FUNC_2(VAR_3, VAR_0);
 return 0;
}
