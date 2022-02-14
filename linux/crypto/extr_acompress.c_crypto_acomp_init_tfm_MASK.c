
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_tfm {TYPE_2__* __crt_alg; } ;
struct TYPE_3__ {int exit; } ;
struct crypto_acomp {TYPE_1__ base; int reqsize; int dst_free; int decompress; int compress; } ;
struct acomp_alg {int (* init ) (struct crypto_acomp*) ;scalar_t__ exit; int reqsize; int dst_free; int decompress; int compress; } ;
struct TYPE_4__ {int * cra_type; } ;


 struct crypto_acomp* FUNC_0 (struct crypto_tfm*) ;
 struct acomp_alg* FUNC_1 (struct crypto_acomp*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct crypto_acomp*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_2)
{
 struct crypto_acomp *VAR_3 = FUNC_0(VAR_2);
 struct acomp_alg *VAR_4 = FUNC_1(VAR_3);

 if (VAR_2->__crt_alg->cra_type != &VAR_1)
  return FUNC_2(VAR_2);

 VAR_3->compress = VAR_4->compress;
 VAR_3->decompress = VAR_4->decompress;
 VAR_3->dst_free = VAR_4->dst_free;
 VAR_3->reqsize = VAR_4->reqsize;

 if (VAR_4->exit)
  VAR_3->base.exit = VAR_0;

 if (VAR_4->init)
  return VAR_4->init(VAR_3);

 return 0;
}
