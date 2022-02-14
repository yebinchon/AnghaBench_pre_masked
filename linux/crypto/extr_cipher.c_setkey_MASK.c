
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {int crt_flags; TYPE_1__* __crt_alg; } ;
struct cipher_alg {unsigned int cia_min_keysize; unsigned int cia_max_keysize; int (* cia_setkey ) (struct crypto_tfm*,int const*,unsigned int) ;} ;
struct TYPE_2__ {struct cipher_alg cra_cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_3, const u8 *VAR_4, unsigned int VAR_5)
{
 struct cipher_alg *VAR_6 = &VAR_3->__crt_alg->cra_cipher;
 unsigned long VAR_7 = FUNC_0(VAR_3);

 VAR_3->crt_flags &= ~VAR_1;
 if (VAR_5 < VAR_6->cia_min_keysize || VAR_5 > VAR_6->cia_max_keysize) {
  VAR_3->crt_flags |= VAR_0;
  return -VAR_2;
 }

 if ((unsigned long)VAR_4 & VAR_7)
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 return VAR_6->cia_setkey(VAR_3, VAR_4, VAR_5);
}
