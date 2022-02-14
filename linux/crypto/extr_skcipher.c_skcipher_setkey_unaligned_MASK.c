
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_alg {int (* setkey ) (struct crypto_skcipher*,int *,unsigned int) ;} ;
struct crypto_skcipher {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 struct skcipher_alg* FUNC_1 (struct crypto_skcipher*) ;
 unsigned long FUNC_2 (struct crypto_skcipher*) ;
 int * FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 (struct crypto_skcipher*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_2,
         const u8 *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5 = FUNC_2(VAR_2);
 struct skcipher_alg *VAR_6 = FUNC_1(VAR_2);
 u8 *VAR_7, *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_9 = VAR_4 + VAR_5;
 VAR_7 = FUNC_3(VAR_9, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = (u8 *)FUNC_0((unsigned long)VAR_7, VAR_5 + 1);
 FUNC_5(VAR_8, VAR_3, VAR_4);
 VAR_10 = VAR_6->setkey(VAR_2, VAR_8, VAR_4);
 FUNC_4(VAR_7);
 return VAR_10;
}
