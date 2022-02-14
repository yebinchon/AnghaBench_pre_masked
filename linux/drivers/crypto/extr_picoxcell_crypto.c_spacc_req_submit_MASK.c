
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spacc_req {TYPE_2__* req; } ;
struct crypto_alg {int cra_flags; } ;
struct TYPE_4__ {TYPE_1__* tfm; } ;
struct TYPE_3__ {struct crypto_alg* __crt_alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spacc_req*) ;
 int FUNC_1 (struct spacc_req*) ;

__attribute__((used)) static int FUNC_2(struct spacc_req *VAR_2)
{
 struct crypto_alg *VAR_3 = VAR_2->req->tfm->__crt_alg;

 if (VAR_0 == (VAR_1 & VAR_3->cra_flags))
  return FUNC_1(VAR_2);
 else
  return FUNC_0(VAR_2);
}
