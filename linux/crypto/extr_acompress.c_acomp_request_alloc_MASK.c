
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_acomp {int dummy; } ;
struct acomp_req {int dummy; } ;
struct TYPE_2__ {int * cra_type; } ;


 struct acomp_req* FUNC_0 (struct crypto_acomp*) ;
 struct acomp_req* FUNC_1 (struct acomp_req*) ;
 struct crypto_tfm* FUNC_2 (struct crypto_acomp*) ;
 int VAR_0 ;

struct acomp_req *FUNC_3(struct crypto_acomp *VAR_1)
{
 struct crypto_tfm *VAR_2 = FUNC_2(VAR_1);
 struct acomp_req *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 && (VAR_2->__crt_alg->cra_type != &VAR_0))
  return FUNC_1(VAR_3);

 return VAR_3;
}
