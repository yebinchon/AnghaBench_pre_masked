
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {int crt_flags; TYPE_1__* __crt_alg; } ;
struct blkcipher_alg {unsigned int min_keysize; unsigned int max_keysize; int (* setkey ) (struct crypto_tfm*,int const*,unsigned int) ;} ;
struct TYPE_2__ {struct blkcipher_alg cra_blkcipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_2, const u8 *VAR_3, unsigned int VAR_4)
{
 struct blkcipher_alg *VAR_5 = &VAR_2->__crt_alg->cra_blkcipher;
 unsigned long VAR_6 = FUNC_0(VAR_2);

 if (VAR_4 < VAR_5->min_keysize || VAR_4 > VAR_5->max_keysize) {
  VAR_2->crt_flags |= VAR_0;
  return -VAR_1;
 }

 if ((unsigned long)VAR_3 & VAR_6)
  return FUNC_1(VAR_2, VAR_3, VAR_4);

 return VAR_5->setkey(VAR_2, VAR_3, VAR_4);
}
