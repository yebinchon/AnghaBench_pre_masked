
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int ivsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct ablkcipher_walk {unsigned int blocksize; int iv; scalar_t__ iv_buffer; } ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,unsigned int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int *,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_6(struct ablkcipher_walk *VAR_2,
         struct crypto_tfm *VAR_3,
         unsigned int VAR_4)
{
 unsigned VAR_5 = VAR_2->blocksize;
 unsigned int VAR_6 = VAR_3->crt_ablkcipher.ivsize;
 unsigned VAR_7 = FUNC_0(VAR_5, VAR_4 + 1);
 unsigned int VAR_8 = VAR_7 * 2 + VAR_6 + FUNC_4(VAR_7, VAR_6) -
       (VAR_4 + 1);
 u8 *VAR_9;

 VAR_8 += VAR_4 & ~(FUNC_2() - 1);
 VAR_2->iv_buffer = FUNC_3(VAR_8, VAR_1);
 if (!VAR_2->iv_buffer)
  return -VAR_0;

 VAR_9 = (u8 *)FUNC_0((unsigned long)VAR_2->iv_buffer, VAR_4 + 1);
 VAR_9 = FUNC_1(VAR_9, VAR_5) + VAR_7;
 VAR_9 = FUNC_1(VAR_9, VAR_5) + VAR_7;
 VAR_9 = FUNC_1(VAR_9, VAR_6);

 VAR_2->iv = FUNC_5(VAR_9, VAR_2->iv, VAR_6);
 return 0;
}
