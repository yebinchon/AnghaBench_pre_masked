
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct crypto_alg* __crt_alg; } ;
struct crypto_rng {TYPE_1__ base; } ;
struct crypto_alg {int dummy; } ;
struct TYPE_4__ {int (* seed ) (struct crypto_rng*,int const*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (struct crypto_alg*,int) ;
 int FUNC_3 (int *,unsigned int) ;
 int * FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct crypto_rng*,int const*,unsigned int) ;

int FUNC_7(struct crypto_rng *VAR_2, const u8 *VAR_3, unsigned int VAR_4)
{
 struct crypto_alg *VAR_5 = VAR_2->base.__crt_alg;
 u8 *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_1(VAR_5);
 if (!VAR_3 && VAR_4) {
  VAR_6 = FUNC_4(VAR_4, VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_7 = FUNC_3(VAR_6, VAR_4);
  if (VAR_7)
   goto out;
  VAR_3 = VAR_6;
 }

 VAR_7 = FUNC_0(VAR_2)->seed(VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_5, VAR_7);
out:
 FUNC_5(VAR_6);
 return VAR_7;
}
