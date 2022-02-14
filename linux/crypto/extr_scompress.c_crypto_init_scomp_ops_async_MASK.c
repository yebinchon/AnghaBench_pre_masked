
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; } ;
struct crypto_scomp {int dummy; } ;
struct crypto_alg {int dummy; } ;
struct crypto_acomp {int reqsize; int dst_free; int decompress; int compress; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_scomp*) ;
 int FUNC_1 (struct crypto_scomp*) ;
 struct crypto_acomp* FUNC_2 (struct crypto_tfm*) ;
 struct crypto_scomp* FUNC_3 (struct crypto_alg*,int *) ;
 int VAR_1 ;
 int FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (struct crypto_alg*) ;
 int VAR_2 ;
 struct crypto_scomp** FUNC_6 (struct crypto_tfm*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_7(struct crypto_tfm *VAR_6)
{
 struct crypto_alg *VAR_7 = VAR_6->__crt_alg;
 struct crypto_acomp *VAR_8 = FUNC_2(VAR_6);
 struct crypto_scomp **VAR_9 = FUNC_6(VAR_6);
 struct crypto_scomp *VAR_10;

 if (!FUNC_4(VAR_7))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_7, &VAR_2);
 if (FUNC_0(VAR_10)) {
  FUNC_5(VAR_7);
  return FUNC_1(VAR_10);
 }

 *VAR_9 = VAR_10;
 VAR_6->exit = VAR_1;

 VAR_8->compress = VAR_3;
 VAR_8->decompress = VAR_4;
 VAR_8->dst_free = VAR_5;
 VAR_8->reqsize = sizeof(void *);

 return 0;
}
