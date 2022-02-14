
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_acomp {int (* dst_free ) (int *) ;} ;
struct acomp_req {int flags; int * dst; } ;
struct TYPE_2__ {int * cra_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct acomp_req*) ;
 struct crypto_acomp* FUNC_1 (struct acomp_req*) ;
 int FUNC_2 (struct acomp_req*) ;
 struct crypto_tfm* FUNC_3 (struct crypto_acomp*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct acomp_req *VAR_2)
{
 struct crypto_acomp *VAR_3 = FUNC_1(VAR_2);
 struct crypto_tfm *VAR_4 = FUNC_3(VAR_3);

 if (VAR_4->__crt_alg->cra_type != &VAR_1)
  FUNC_2(VAR_2);

 if (VAR_2->flags & VAR_0) {
  VAR_3->dst_free(VAR_2->dst);
  VAR_2->dst = ((void*)0);
 }

 FUNC_0(VAR_2);
}
